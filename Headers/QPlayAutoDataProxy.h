//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ImageManagerDelegate-Protocol.h"
#import "ListTagDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class CategoricalSongFolderListItem, ChannelItem, ChannelItemKey, NSMutableArray, NSString, QPlayAutoRequestArgument, SongInfo;

@interface QPlayAutoDataProxy : NSObject <ImageManagerDelegate, ListTagDelegate, ProtocolHostDelegate>
{
    NSMutableArray *RankingList;
    NSMutableArray *SquareList;
    NSMutableArray *RadioCatList;
    NSMutableArray *RadioList;
    NSMutableArray *catogaryList;
    CategoricalSongFolderListItem *currentCateCluster;
    ChannelItem *currentChannelItem;
    ChannelItemKey *currentChannelItemKey;
    QPlayAutoRequestArgument *currentArgument;
    long long picBufferSize;
    _Bool bRankSongLoading;
    SongInfo *currentSong;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SongInfo *currentSong; // @synthesize currentSong;
- (void).cxx_destruct;
- (_Bool)isExpiredChannel:(id)arg1;
- (_Bool)isValidChannel:(id)arg1;
- (void)OnRequestSongForFourthFolder:(id)arg1 argument:(id)arg2;
- (void)OnRequestSongForThirdFolder:(id)arg1 argument:(id)arg2;
- (void)OnRequestSongForSecondFolder:(id)arg1 argument:(id)arg2;
- (void)onRequestLyric:(id)arg1;
- (void)onRequestStopSendData:(id)arg1;
- (void)responseEmptyList:(id)arg1;
- (void)onRequestAlbumPic:(id)arg1 BufferSize:(long long)arg2;
- (void)onRequestMediaInfo:(unsigned long long)arg1;
- (id)macAddress;
- (void)onRequestDeviceInfo:(id)arg1;
- (void)OnRequestSongFolder:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(id)arg2;
- (void)updateAlbumPic:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)responseCategory;
- (void)_categoryPageDataDidUpdate:(id)arg1;
- (void)_radioListDidUpdate:(id)arg1;
- (void)responseRadioCategory;
- (void)radioCategoriesDataDidUpdate:(id)arg1;
- (void)responseSquareChannel;
- (void)_channelSquareDataDidUpdate:(id)arg1;
- (void)responseRankingChannel;
- (_Bool)_isNotSupportType:(unsigned long long)arg1;
- (void)_RankingDataDidUpdate:(id)arg1;
- (void)_onFetchRankSongCallback:(id)arg1;
- (void)_onFetchSongCallback:(id)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)Stop;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
