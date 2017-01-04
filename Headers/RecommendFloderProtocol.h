//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class CategoricalSongFolderListItem, FMShowItem, KSongItem, QMSingerNewsItem, SongDetailItem, SongListItem, VideoItem;

@interface RecommendFloderProtocol : ProtocolBaseJason
{
    CategoricalSongFolderListItem *listItem;
    SongListItem *currentSongFolderItem;
    FMShowItem *fmShowItem;
    unsigned long long _song_ID;
    VideoItem *_videoItem;
    SongDetailItem *_songDetailItem;
    KSongItem *_kSongItem;
    QMSingerNewsItem *_singerNewsItem;
}

@property(retain, nonatomic) QMSingerNewsItem *singerNewsItem; // @synthesize singerNewsItem=_singerNewsItem;
@property(retain, nonatomic) KSongItem *kSongItem; // @synthesize kSongItem=_kSongItem;
@property(retain, nonatomic) SongDetailItem *songDetailItem; // @synthesize songDetailItem=_songDetailItem;
@property(retain, nonatomic) VideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(nonatomic) unsigned long long song_ID; // @synthesize song_ID=_song_ID;
@property(retain, nonatomic) FMShowItem *fmShowItem; // @synthesize fmShowItem;
@property(retain, nonatomic) SongListItem *currentSongFolderItem; // @synthesize currentSongFolderItem;
@property(retain, nonatomic) CategoricalSongFolderListItem *listItem; // @synthesize listItem;
- (void).cxx_destruct;
- (id)_castItemToChannel:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)init;

@end
