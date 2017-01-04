//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IndexSetProtocol-Protocol.h"
#import "ListTagDelegate-Protocol.h"
#import "QPlayQueueDataSoucce-Protocol.h"

@class IndexSet, ListBase, NSArray, NSString, SongInfo;

@interface PlayList : NSObject <ListTagDelegate, IndexSetProtocol, QPlayQueueDataSoucce>
{
    SongInfo *currentPlaySong;
    ListBase *arrayCurrentPlaySongList;
    int errCount;
    int currentIndex;
    _Bool bErrCauseDataSource;
    NSArray *qplaySongList;
    _Bool _bChangeIndexForNetwork;
    int current;
    int _beforeDeleteRealIndex;
    IndexSet *_indexSet;
}

@property(nonatomic) int beforeDeleteRealIndex; // @synthesize beforeDeleteRealIndex=_beforeDeleteRealIndex;
@property(nonatomic) _Bool bChangeIndexForNetwork; // @synthesize bChangeIndexForNetwork=_bChangeIndexForNetwork;
@property(retain, nonatomic) IndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(nonatomic) _Bool bErrCauseDataSource; // @synthesize bErrCauseDataSource;
@property(retain, nonatomic) SongInfo *currentPlaySong; // @synthesize currentPlaySong;
@property(retain, nonatomic) ListBase *arrayCurrentPlaySongList; // @synthesize arrayCurrentPlaySongList;
- (void).cxx_destruct;
- (void)addSongsToPlayList:(id)arg1 atFront:(_Bool)arg2 assetsType:(int)arg3;
- (_Bool)translateNextSongIntoList:(id)arg1;
- (void)_joinNextSongsQueue:(id)arg1 wantPlayed:(id)arg2 listPlayMode:(int)arg3;
- (void)setListPlayMode:(int)arg1;
- (_Bool)updatePlayingList:(id)arg1;
- (void)setCurrent:(int)arg1;
- (void)update;
- (unsigned long long)indexOfNextSong;
- (unsigned long long)indexOfNextSongNoNeedNet;
- (_Bool)isChangeIndexForNetwork;
- (id)songInfoDescriptionAtIndex:(int)arg1;
- (_Bool)isSongPlayableAtIndex:(int)arg1;
- (void)onBeforeDeleteRealIndexChanged:(int)arg1;
- (_Bool)isSongExistLocalFile:(int)arg1;
- (void)setErr:(_Bool)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (_Bool)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 clearErrorCount:(_Bool)arg4;
- (_Bool)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (_Bool)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 manualCause:(_Bool)arg4 clearErrorCount:(_Bool)arg5;
- (void)setIndexsetIndex:(int)arg1;
- (void)updateCurrentPlayingSongList:(id)arg1;
- (int)getPlayingIndex;
- (void)setDefaultPlayMode:(int)arg1;
- (_Bool)isValidIndex;
- (void)QPlayFireNowIndex;
- (void)fireNowIndex;
@property int currentIndex;
- (id)returnCurrentSong;
- (id)songInTheDataSourceById:(unsigned long long)arg1;
- (id)songInTheDataSource:(id)arg1;
- (_Bool)isSameQDataSource:(id)arg1;
- (id)prepareQPlaySongs:(id)arg1 mode:(int)arg2;
- (int)realPlayIndexAfterDelete;
- (_Bool)isDeletePlayingIndex;
- (void)deleteViewIndex:(long long)arg1;
- (void)setPlayListCurrent:(unsigned long long)arg1;
- (void)refreshIndexSetCount:(unsigned long long)arg1;
- (id)buildQPlayShuffleSongs:(id)arg1;
- (id)_qplayQueueSongsInShuffle:(id)arg1 queueCapability:(unsigned long long)arg2;
- (id)_qplayQueueSongsInRepeat:(id)arg1 queueCapability:(unsigned long long)arg2;
- (id)_qplayQueueSongsInSequence:(id)arg1 queueCapability:(unsigned long long)arg2;
- (id)filterSongsForQPlay:(id)arg1;
- (id)qplayQueueSongs:(id)arg1 queueCapability:(unsigned long long)arg2;
- (_Bool)hasQPlaySupportedSongsinPlaylist;
- (int)countValue;
- (_Bool)updateQPlaySong:(id)arg1;
- (long long)onlyGetNextOrPreIndex:(_Bool)arg1 Auto:(_Bool)arg2;
- (void)playNextInNextSongQueue;
- (_Bool)MoveNext:(_Bool)arg1 Auto:(_Bool)arg2;
- (id)currentSong;
@property(readonly, nonatomic) int current; // @synthesize current;
@property(readonly, nonatomic) int currentPlayMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
