//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSString;

@interface AssetRecommendProtocol : ProtocolBaseJason
{
    NSString *_clientVersion;
    long long _recomendType;
    long long _index;
    long long _count;
    NSString *_songid_list;
    NSString *_title;
    NSString *_linktitle;
    NSString *_link;
    NSArray *_songs;
    NSArray *_songList;
}

@property(retain, nonatomic) NSArray *songList; // @synthesize songList=_songList;
@property(retain, nonatomic) NSArray *songs; // @synthesize songs=_songs;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *linktitle; // @synthesize linktitle=_linktitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *songid_list; // @synthesize songid_list=_songid_list;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long recomendType; // @synthesize recomendType=_recomendType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (_Bool)isDataBeginWithFiveZero;
- (id)getUrl;
- (id)createPostData:(id)arg1 SIDStr:(id)arg2;
- (id)init;

@end
