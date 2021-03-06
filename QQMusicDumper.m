//
//  QQMusicDumper.m
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/4/26.
//
//

#import "Headers/QQLyricParse.h"
//#import "Headers/QQLineLyric.h"
#import "QQMusicDumper.h"
#import "Headers/LyricManager.h"
#import "IO.h"
#import "SQLHelper.h"
#import "Headers/SongInfo.h"
#import "Headers/SongInfoManager.h"
#import "UIKit/UIKit.h"
#import "Headers/QQLineLyricQRC.h"
#import "DLLRCParser.h"
#import  <objc/runtime.h>
#import <sqlite3.h>

Class LMcls=NULL;
LyricManager* LM=nil;
Class SongInfoManagercls=NULL;
SongInfoManager* SIManager=nil;
Class QQLyricParsecls=nil;
#define PrefixRegex @"\\[\\d{1,},\\d{1,}\\]"
#define OtherRegex @"\\(\\d{1,},\\d{1,}\\)"

#define MAXTimeDifference 0.00005//LRC lines which have time difference less than this value will be rewritten in the same line because fuck Tencent

static NSString* FixTimeStamp(NSString* Input){
    @autoreleasepool {

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

NSString* CombineLRC(NSMutableDictionary* Input){
    NSMutableArray* array1=[NSMutableArray array];
    for (NSString* Key in Input.allKeys){
        NSMutableArray* tmparray=[[[DLLRCParser alloc] init] parseLRC:[[Input objectForKey:Key] componentsJoinedByString:@"\n"]];

        [array1 addObjectsFromArray:tmparray];
        [tmparray release];
    }

    if(array1.count<=0){
        return nil;
    }
    NSArray* arraytmp=[array1 sortedArrayWithOptions:NSSortConcurrent usingComparator:^NSComparisonResult(id obj1,id obj2){

            if([[obj1 objectForKey:@"TIME"] floatValue] ==[[obj2 objectForKey:@"TIME"] floatValue]){
                return NSOrderedSame;
            }
            if([[obj1 objectForKey:@"TIME"] floatValue] <[[obj2 objectForKey:@"TIME"] floatValue]){
                return NSOrderedAscending;
            }
            else{
                return NSOrderedDescending;
            }


        }];


        array1=[NSMutableArray arrayWithArray:arraytmp];
      //  NSLog(@"Sorted:%@",array1);

        NSMutableString* finallrc=[NSMutableString string];
        for(int i=0;i<array1.count;i++){
         //  [finallrc appendString:@"\n"];
             //             NSLog(@"%i",i);
                 id nextObject;
             id preObject;
            id currobject;
            if(i==0||i>=array1.count-1){
                if(i==0){
                    nextObject=[array1 objectAtIndex:i+1];
                    preObject=[array1 objectAtIndex:i];
                    currobject=[array1 objectAtIndex:i];
                }
                else{
                    nextObject=[array1 objectAtIndex:i];
                    preObject=[array1 objectAtIndex:i-1];
                    currobject=[array1 objectAtIndex:i];
                }
            }
            else{

                nextObject=[array1 objectAtIndex:i+1];
                preObject=[array1 objectAtIndex:i-1];
                currobject=[array1 objectAtIndex:i];

            }



            float nexttime=[[nextObject objectForKey:@"TIME"] floatValue];
            float pretime=[[preObject objectForKey:@"TIME"] floatValue];
            float currtime=[[currobject objectForKey:@"TIME"] floatValue];

            float timediff1=nexttime-currtime;
            float timediff2=currtime-pretime;
            if(timediff2<=MAXTimeDifference&&i!=0&&i!=array1.count-1){
                if([finallrc containsString:[currobject objectForKey:@"LRCTIME"]]){

                }
                else{
                    NSString* tmpstr=[NSString stringWithFormat:@"%@%@  %@",[currobject objectForKey:@"LRCTIME"],[currobject objectForKey:@"LRC"],[preObject objectForKey:@"LRC"]];
                    [array1 removeObject:preObject];
                      [array1 removeObject:currobject];
                    [finallrc appendString:tmpstr];
                //   [finallrc appendString:@"\n"];
                }

            }
            if(timediff1<=MAXTimeDifference&&i!=0&&i!=array1.count-1){
                if([finallrc containsString:[currobject objectForKey:@"LRCTIME"]]){

                }
                else{
      NSString* tmpstr=[NSString stringWithFormat:@"%@%@%@",[currobject objectForKey:@"LRCTIME"],[currobject objectForKey:@"LRC"],[nextObject objectForKey:@"LRC"]];
                    [array1 removeObject:nextObject];
                    [array1 removeObject:currobject];
                [finallrc appendString:tmpstr];
             //  [finallrc appendString:@"\n"];
                }

            }
            else{
           // NSMutableString* rstring=[NSMutableString string];
                if([finallrc containsString:[currobject objectForKey:@"LRCTIME"]]){

                }
                else{
                    NSString* tmpstr=[NSString stringWithFormat:@"%@%@",[currobject objectForKey:@"LRCTIME"],[currobject objectForKey:@"LRC"]];
                    [array1 removeObject:currobject];
         [finallrc appendString:tmpstr];
          //  [finallrc appendString:@"\n"];
                }

        }
        }
    finallrc=(NSMutableString*)[finallrc stringByReplacingOccurrencesOfString:@"\n" withString:@""];
    // NSLog(@"%@",finallrc);
    finallrc=(NSMutableString*)[finallrc stringByReplacingOccurrencesOfString:@"[" withString:@"\n["];
    // NSArray* components=[finallrc componentsSeparatedByString:@"\n"];
    // NSLog(@"%@",components);
    //[[finallrc dataUsingEncoding:NSUTF8StringEncoding] writeToFile:OUTPATH atomically:YES];
    return finallrc;
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
    QQLyricParsecls=objc_getClass("QQLyricParse");
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
            if(ID3LRC!=nil){
                [LRCDict setObject:ID3LRC forKey:@"ID3"];
            }
            if(TranslateLRC!=nil){
                [LRCDict setObject:TranslateLRC forKey:@"Translate"];
            }
            if(TransliterateLRC!=nil){
                [LRCDict setObject:TransliterateLRC forKey:@"Transliterate"];
            }

            /*[Serialize(ID3LRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@ID3.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];
            [Serialize(TranslateLRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@翻译.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];
            [Serialize(TransliterateLRC) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@音译.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];
            [CombineLRC(LRCDict) writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@合并.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES  encoding:NSUTF8StringEncoding error:nil];*/
            NSMutableDictionary* result=[NSMutableDictionary dictionary];
            BOOL isEmpty=YES;
            if(Serialize(ID3LRC)!=nil){
              [result setObject:Serialize(ID3LRC) forKey:@"ID3"];
              isEmpty=false;
            }
            if(Serialize(TranslateLRC)!=nil){
              [result setObject:Serialize(TranslateLRC) forKey:@"Translate"];
              isEmpty=false;
            }
            if(Serialize(TransliterateLRC)!=nil){
              [result setObject:Serialize(TransliterateLRC) forKey:@"Transliterate"];
              isEmpty=false;
            }
            [result setObject:Name forKey:@"Name"];
            [result setObject:Singer forKey:@"Singer"];
            [result setObject:Album forKey:@"Album"];
            if(!isEmpty){
              [result writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@.txt",NSHomeDirectory(),Name,Singer,Album] atomically:YES];
            }
            //Name,Singer,Album
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
       //NSLog(@"TranslatePath:%@",TranslatePath);
        //id LyricManager=[LMcls sharedLyricManager];
      // NSLog(@"TranslateLyrics:%@",translatelyrics);
        QQLyricParse* rawlyrics=[[QQLyricParsecls alloc] init];
        [rawlyrics parse:translatelyrics];
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
        //id LyricManager=[LMcls sharedLyricManager];
        translatelyrics=[LMcls getQrcTextFromXml:translatelyrics];
        translatelyrics=FixTimeStamp(translatelyrics);
        //QQLyricParse* rawlyrics=[LyricManager parseText:translatelyrics];
        QQLyricParse* rawlyrics=[[QQLyricParsecls alloc] init];
        [rawlyrics parse:translatelyrics];
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

      //  id LyricManager=[LMcls sharedLyricManager];
        //QQLyricParse* rawlyrics=[LyricManager parseText:translatelyrics];
        QQLyricParse* rawlyrics=[[QQLyricParsecls alloc] init];
        [rawlyrics parse:translatelyrics];
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
