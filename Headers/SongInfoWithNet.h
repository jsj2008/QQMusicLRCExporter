//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FirstPieceCacheSong, NSFileHandle, NSString;

@interface SongInfoWithNet : NSObject
{
    _Bool _isWifi;
    int _httpStatus;
    FirstPieceCacheSong *_firstPieceCacheSong;
    NSString *_savePath;
    NSFileHandle *_writeFileHandle;
}

+ (id)createSongInfoWithNet:(id)arg1 isWifi:(_Bool)arg2;
@property(retain) NSFileHandle *writeFileHandle; // @synthesize writeFileHandle=_writeFileHandle;
@property int httpStatus; // @synthesize httpStatus=_httpStatus;
@property(copy) NSString *savePath; // @synthesize savePath=_savePath;
@property _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(retain) FirstPieceCacheSong *firstPieceCacheSong; // @synthesize firstPieceCacheSong=_firstPieceCacheSong;
- (void).cxx_destruct;
- (void)dealloc;

@end
