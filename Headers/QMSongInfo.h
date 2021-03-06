//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSongInfo.h"

@class NSString, NextAudioData, RetryLogic, SongInfo, StatInfo;

@interface QMSongInfo : KSSongInfo
{
    _Bool _pauseFlag;
    _Bool _isCacheNextSong;
    int _listTagType;
    int _listType;
    int _assetsType;
    int _rateType;
    NextAudioData *_nextData;
    RetryLogic *_retryLogic;
    double _playingEndTime;
    StatInfo *_playStatInfo;
    StatInfo *_importantStatInfo;
    NSString *_secondCacheTimePoint;
    SongInfo *_songInfo;
}

@property(nonatomic) _Bool isCacheNextSong; // @synthesize isCacheNextSong=_isCacheNextSong;
@property(nonatomic) int rateType; // @synthesize rateType=_rateType;
@property(nonatomic) int assetsType; // @synthesize assetsType=_assetsType;
@property(retain, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSString *secondCacheTimePoint; // @synthesize secondCacheTimePoint=_secondCacheTimePoint;
@property(retain, nonatomic) StatInfo *importantStatInfo; // @synthesize importantStatInfo=_importantStatInfo;
@property(retain, nonatomic) StatInfo *playStatInfo; // @synthesize playStatInfo=_playStatInfo;
@property(nonatomic) int listTagType; // @synthesize listTagType=_listTagType;
@property(nonatomic) double playingEndTime; // @synthesize playingEndTime=_playingEndTime;
@property(readonly, nonatomic) RetryLogic *retryLogic; // @synthesize retryLogic=_retryLogic;
@property _Bool pauseFlag; // @synthesize pauseFlag=_pauseFlag;
@property(retain, nonatomic) NextAudioData *nextData; // @synthesize nextData=_nextData;
- (void).cxx_destruct;
- (void)stopCacheNextSong;
- (void)cacheNextSong;
- (id)initWithSongInfo:(id)arg1 rateType:(int)arg2 assetsType:(int)arg3;

@end

