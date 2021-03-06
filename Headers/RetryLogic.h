//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SongInfo, SongInfoKey;

@interface RetryLogic : NSObject
{
    _Bool _canChangeQuality;
    _Bool _exist320KMp3;
    _Bool _existFLAC;
    _Bool _disableRetryLogic;
    int _eRetryLogicType;
    int _defaultSongRateType;
    int _fixedSongRateType;
    int _maxRate;
    SongInfoKey *_songInfoKey;
    NSMutableArray *_downloadPropertys;
    SongInfo *_curSong;
}

+ (struct SFlexInteger)getDefaultSongRateTypeBySetting:(int)arg1 forSong:(id)arg2 assetsType:(int)arg3;
@property(retain) SongInfo *curSong; // @synthesize curSong=_curSong;
@property int maxRate; // @synthesize maxRate=_maxRate;
@property _Bool disableRetryLogic; // @synthesize disableRetryLogic=_disableRetryLogic;
@property int fixedSongRateType; // @synthesize fixedSongRateType=_fixedSongRateType;
@property int defaultSongRateType; // @synthesize defaultSongRateType=_defaultSongRateType;
@property _Bool existFLAC; // @synthesize existFLAC=_existFLAC;
@property _Bool exist320KMp3; // @synthesize exist320KMp3=_exist320KMp3;
@property _Bool canChangeQuality; // @synthesize canChangeQuality=_canChangeQuality;
@property(retain) NSMutableArray *downloadPropertys; // @synthesize downloadPropertys=_downloadPropertys;
@property(retain) SongInfoKey *songInfoKey; // @synthesize songInfoKey=_songInfoKey;
@property int eRetryLogicType; // @synthesize eRetryLogicType=_eRetryLogicType;
- (void).cxx_destruct;
- (void)disableRetry;
- (void)clearAllRecords;
- (void)canceledLast;
- (_Bool)canRetry;
- (void)setFixedRate:(struct SFlexInteger)arg1;
- (void)setLastError:(int)arg1;
- (struct SFlexInteger)getNextQualityByAssetsType:(int)arg1;
- (id)getCurrentProperty;
- (unsigned long long)getRetryCount;
- (unsigned long long)getConnectCount;
- (id)getHistoryHosts;
- (void)addDownloadProperty:(id)arg1;
- (id)initWithRetryType:(int)arg1 songInfoKey:(id)arg2 exist320KMp3:(_Bool)arg3 existFlac:(_Bool)arg4 defaultSongRateType:(int)arg5 maxRate:(int)arg6 forSong:(id)arg7;

@end

