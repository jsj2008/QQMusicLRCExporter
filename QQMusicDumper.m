//
//  QQMusicDumper.m
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/4/26.
//
//
#import "QQLyricParse.h"
#import "QQLineLyric.h"
#import "QQMusicDumper.h"
#import "LyricManager.h"
#import "IO.h"
#import "SQLHelper.h"
#import "SongInfo.h"
#import "SongInfoManager.h"
#import "UIKit/UIKit.h"
#import "QQLineLyricQRC.h"
#import "DLLRCParser.h"
#import  <objc/runtime.h>
Class LMcls=NULL;
LyricManager* LM=nil;
Class SongInfoManagercls=NULL;
SongInfoManager* SIManager=nil;
#define PrefixRegex @"\\[\\d{1,},\\d{1,}\\]"
#define OtherRegex @"\\(\\d{1,},\\d{1,}\\)"
static NSString* FixTimeStamp(NSString* Input){
    @autoreleasepool {
        /*BFCodec* BFC=[[BFCodec alloc] init];
         [BFC cipherInit:[NSData dataWithBytes:"\xf9\xa1\x42\xc7\x0b\x07\xd9\xa8\x09\x3b\x56\xb8\xc2\xee\xb6\x98" length:16]];*/
        
        NSMutableString* TestString=[Input mutableCopy];
        NSRange InitialRange=[TestString rangeOfString:PrefixRegex options: NSRegularExpressionSearch];//Fixing Prefix Time
        while(InitialRange.location!= NSNotFound){
            NSString* Substring=[TestString substringWithRange:InitialRange];
            Substring=[Substring stringByReplacingOccurrencesOfString:@"[" withString:@""];
            Substring=[Substring stringByReplacingOccurrencesOfString:@"]" withString:@""];
            long long millisecs=[[Substring componentsSeparatedByString:@","] objectAtIndex:0].longLongValue;
            double seconds=millisecs/1000.0;
            int min=seconds/60;
            double sec=seconds-60*min;
            NSString* ReplacedString=[NSString stringWithFormat:@"[%02d:%05.2lf]",min,sec];
            [TestString replaceCharactersInRange:InitialRange withString:ReplacedString];
            
            
            InitialRange=[TestString rangeOfString:PrefixRegex options: NSRegularExpressionSearch];
            
        }
        InitialRange=[TestString rangeOfString:OtherRegex options: NSRegularExpressionSearch];//Fixing Other Time
        while(InitialRange.location!= NSNotFound){
            [TestString replaceCharactersInRange:InitialRange withString:@""];
            
            
            InitialRange=[TestString rangeOfString:OtherRegex options: NSRegularExpressionSearch];
            
        }
        //NSLog(@"%@",TestString);
        return TestString;
        
    }
    
    
    
}
static NSString* Serialize(NSArray* Input){
    if(Input.count <=0 || Input==nil){
        return nil;
    }
    NSMutableString* RetVal=[NSMutableString stringWithFormat:@""];
    for (int i=0;i<Input.count;i++){
        [RetVal appendString:[Input objectAtIndex:i]];
    }
    return RetVal;
}

@implementation QQMusicDumper
+(void)Dump{
    LMcls=objc_getClass("LyricManager");
    LM=[LMcls sharedLyricManager];
    SongInfoManagercls=objc_getClass("SongInfoManager");
    SIManager=[SongInfoManagercls sharedSongInfoManager];
    NSLog(@"Init LM:%@\nSIManager:%@",LM,SIManager);
    //Should Dump
    NSMutableDictionary *preferences = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/naville.qqlrcexport.plist"];
    BOOL value = [[preferences objectForKey:@"Dump"] boolValue];
    if(!value||!preferences){
        [preferences release];
        return ;
    }
    [preferences release];

    //
    @autoreleasepool{

        NSError* error;
        NSFileManager* fm=[NSFileManager defaultManager];
        [fm removeItemAtPath:[IO GetPath:@"qqmusicHelper.sqlite"] error:nil];
        NSLog(@"Start Dumping");
        [fm copyItemAtPath:[IO GetPath:@"qqmusic.sqlite"] toPath:[IO GetPath:@"qqmusicHelper.sqlite"] error:&error];
        NSLog(@"Copy A New DataBase");
        NSArray* SongList=[SQLHelper querySQL:[IO GetPath:@"qqmusicHelper.sqlite"] TableName:@"SONGS" ColumnNames:@[@"name",@"singer",@"id",@"album",@"type"] Error:&error];
        for(int i=0;i<[SongList count];i++){
            NSMutableDictionary* LRCDict=[NSMutableDictionary dictionary];
            NSMutableArray* TranslateLRC=[NSMutableArray array];
            NSMutableArray* ID3LRC=[NSMutableArray array];
            NSMutableArray* TransliterateLRC=[NSMutableArray array];
            NSDictionary* SongInfoDict=[SongList objectAtIndex:i];
             SongInfo* SI=[[NSClassFromString(@"SongInfo") alloc] initWithSongType:[[SongInfoDict objectForKey:@"type"] intValue] songID:[[SongInfoDict objectForKey:@"id"] longLongValue]];
             [self DumpTranslateWithSongInfo:SI withLyricsArray:&TranslateLRC];
             [self DumpID3WithSongInfo:SI withLyricsArray:&ID3LRC];
             [self DumpTransliterateWithSongInfo:SI withLyricsArray:&TransliterateLRC];
             NSString *Name=[SongInfoDict objectForKey:@"name"];
             NSString *Singer=[SongInfoDict objectForKey:@"singer"];
             NSString* Album=[SongInfoDict objectForKey:@"album"];
             Name=[Name stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
             Singer=[Singer stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
             Album=[Album stringByReplacingOccurrencesOfString:@"/" withString:@"_"];
            [LRCDict setObject:ID3LRC forKey:@"ID3"];
            [Serialize(ID3LRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@ID3.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];
            [Serialize(TranslateLRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@翻译.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];
            [Serialize(TransliterateLRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@音译.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];      
        }
   }    
}
+(NSString*)ConvertLRCTime:(long long)microsecond{
    //NSLog(@"ConvertLRCTime:%lli",microsecond);
    double seconds=microsecond/1000.0;
    int min=seconds/60;
    double sec=seconds-60*min;
    
    return [NSString stringWithFormat:@"[%02d:%05.2lf]",min,sec];
    
}

+(void)DumpTranslateWithSongInfo:(SongInfo*)SI withLyricsArray:(NSMutableArray**)LyricsArray{
    @autoreleasepool{
        NSString* TranslatePath=[LMcls getTranslateLyricFilePath:SI];
        NSString* translatelyrics=[LMcls decodeQrcFileWithPath:TranslatePath];
        if(TranslatePath==nil||translatelyrics==nil){
            return;
        } 
       // NSLog(@"TranslatePath:%@",TranslatePath);  
        id LyricManager=[LMcls sharedLyricManager];
       // NSLog(@"TranslateLyrics:%@",translatelyrics);
        QQLyricParse* rawlyrics=[LyricManager parseText:translatelyrics];          
        NSArray* lyricist=rawlyrics.mLineLyricList;
        for(int i=0;i<[lyricist count];i++){
            QQLineLyricQRC* qll=[lyricist objectAtIndex:i];
            NSString* timestring=[self ConvertLRCTime:qll.time];   
            [*LyricsArray addObject:[NSString stringWithFormat:@"%@%@\n",timestring,qll.text]];
        }
        //NSLog(@"Translate Lyrics:%@",LyricsArray);

    }//End AutoRelease Pool
}
+(void)DumpTransliterateWithSongInfo:(SongInfo*)SI withLyricsArray:(NSMutableArray**)LyricsArray{
    @autoreleasepool{
        NSString* TranslatePath=[LMcls getYInyiLyricFilePath:SI];
        NSString* translatelyrics=[LMcls decodeQrcFileWithPath:TranslatePath];
        if(TranslatePath==nil||translatelyrics==nil){
            return;
        } 
       // NSLog(@"TranslatePath:%@",TranslatePath); 
        id LyricManager=[LMcls sharedLyricManager];
        translatelyrics=[LMcls getQrcTextFromXml:translatelyrics];
        translatelyrics=FixTimeStamp(translatelyrics);  
        QQLyricParse* rawlyrics=[LyricManager parseText:translatelyrics];          
        NSArray* lyricist=rawlyrics.mLineLyricList;
        for(int i=0;i<[lyricist count];i++){
            QQLineLyricQRC* qll=[lyricist objectAtIndex:i];
            NSString* timestring=[self ConvertLRCTime:qll.time];
            [*LyricsArray addObject:[NSString stringWithFormat:@"%@%@\n",timestring,qll.text]];
        }
      // NSLog(@"Transliterate Lyrics:%@",*LyricsArray);

    }//End AutoRelease Pool
}
+(void)DumpID3WithSongInfo:(SongInfo*)SI withLyricsArray:(NSMutableArray**)LyricsArray{
    @autoreleasepool{
        NSString* TranslatePath=[LMcls getID3VersionLyricFilePath:SI isQrc:YES];
        if(TranslatePath==nil||TranslatePath.length==0){
            TranslatePath=[LMcls getID3VersionLyricFilePath:SI isQrc:NO];

        }
        NSString* translatelyrics=[LMcls decodeQrcFileWithPath:TranslatePath];
        if(TranslatePath==nil||translatelyrics==nil){
            return;
        } 
       // NSLog(@"TranslatePath:%@",TranslatePath); 
        translatelyrics=[LMcls getQrcTextFromXml:translatelyrics]; 
        translatelyrics=FixTimeStamp(translatelyrics);
        //NSLog(@"ID3Lyrics:%@",translatelyrics); 

        id LyricManager=[LMcls sharedLyricManager];
        QQLyricParse* rawlyrics=[LyricManager parseText:translatelyrics];          
        NSArray* lyricist=rawlyrics.mLineLyricList;
        for(int i=0;i<[lyricist count];i++){
            QQLineLyricQRC* qll=[lyricist objectAtIndex:i];
            NSString* timestring=[self ConvertLRCTime:qll.time]; 
            [*LyricsArray addObject:[NSString stringWithFormat:@"%@%@\n",timestring,qll.text]];
        }
        //NSLog(@"ID3 Lyrics:%@",LyricsArray);


    }//End AutoRelease Pool
}




@end