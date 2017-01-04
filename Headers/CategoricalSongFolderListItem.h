//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SongFolderListItem.h"

@class MusicCluster, NSString;

@interface CategoricalSongFolderListItem : SongFolderListItem
{
    _Bool _songShowFlag;
    _Bool _albumShowFlag;
    _Bool _mvShowFlag;
    _Bool _gedanShowFlag;
    _Bool _itemNew;
    long long _categoryId;
    long long _sortId;
    long long _fenleipindaoId;
    NSString *_categoryName;
    NSString *_categoryDesc;
    NSString *_coverPicUrl;
    NSString *_coverIconUrl;
    NSString *_themeUrl;
    NSString *_coverColor;
    long long *_categorySubId;
    NSString *_tjReport;
    MusicCluster *_songsCluster;
    MusicCluster *_albumsCluster;
    MusicCluster *_mvsCluster;
    MusicCluster *_songListsCluster;
    long long _from;
    NSString *_jumpurl;
    NSString *_adverUrl;
}

@property(retain, nonatomic) NSString *adverUrl; // @synthesize adverUrl=_adverUrl;
@property(retain, nonatomic) NSString *jumpurl; // @synthesize jumpurl=_jumpurl;
@property(nonatomic) _Bool itemNew; // @synthesize itemNew=_itemNew;
@property(nonatomic) _Bool gedanShowFlag; // @synthesize gedanShowFlag=_gedanShowFlag;
@property(nonatomic) _Bool mvShowFlag; // @synthesize mvShowFlag=_mvShowFlag;
@property(nonatomic) _Bool albumShowFlag; // @synthesize albumShowFlag=_albumShowFlag;
@property(nonatomic) _Bool songShowFlag; // @synthesize songShowFlag=_songShowFlag;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(retain, nonatomic) MusicCluster *songListsCluster; // @synthesize songListsCluster=_songListsCluster;
@property(retain, nonatomic) MusicCluster *mvsCluster; // @synthesize mvsCluster=_mvsCluster;
@property(retain, nonatomic) MusicCluster *albumsCluster; // @synthesize albumsCluster=_albumsCluster;
@property(retain, nonatomic) MusicCluster *songsCluster; // @synthesize songsCluster=_songsCluster;
@property(retain, nonatomic) NSString *tjReport; // @synthesize tjReport=_tjReport;
@property(nonatomic) long long *categorySubId; // @synthesize categorySubId=_categorySubId;
@property(retain, nonatomic) NSString *coverColor; // @synthesize coverColor=_coverColor;
@property(retain, nonatomic) NSString *themeUrl; // @synthesize themeUrl=_themeUrl;
@property(retain, nonatomic) NSString *coverIconUrl; // @synthesize coverIconUrl=_coverIconUrl;
@property(retain, nonatomic) NSString *coverPicUrl; // @synthesize coverPicUrl=_coverPicUrl;
@property(retain, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) long long fenleipindaoId; // @synthesize fenleipindaoId=_fenleipindaoId;
@property(nonatomic) long long sortId; // @synthesize sortId=_sortId;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (long long)ein;
- (_Bool)hasMoreData;
- (id)key;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
