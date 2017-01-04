//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSMutableArray, NSString, RadioListItem, SongInfo;

@interface RadioDataManager : NSObject <ProtocolHostDelegate>
{
    NSMutableArray *radioSongPlayedList;
    int nextIndex;
    _Bool isManualRefresh;
    RadioListItem *_radioListItem;
    SongInfo *_radioSong;
    NSString *_callBackString;
    _Bool *_notifyPlayerVC;
    _Bool *_isReFresh;
}

+ (id)sharedManager;
@property(nonatomic) _Bool *isReFresh; // @synthesize isReFresh=_isReFresh;
@property(nonatomic) _Bool *notifyPlayerVC; // @synthesize notifyPlayerVC=_notifyPlayerVC;
@property(retain, nonatomic) NSString *callBackString; // @synthesize callBackString=_callBackString;
@property(retain, nonatomic) SongInfo *radioSong; // @synthesize radioSong=_radioSong;
@property(retain, nonatomic) RadioListItem *radioListItem; // @synthesize radioListItem=_radioListItem;
- (void).cxx_destruct;
- (id)getPlayedSongList;
- (void)onPlayListIndexChanged:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)reportRadioSongBehavior:(id)arg1 listenTime:(double)arg2 operateType:(long long)arg3 sourceType:(long long)arg4 recReason:(id)arg5;
- (void)realFetchRadioSongList:(id)arg1 refresh:(_Bool)arg2;
- (void)fetchRadioSongList:(id)arg1 refresh:(_Bool)arg2;
- (void)manualFetchRadioSongList:(id)arg1 refresh:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end
