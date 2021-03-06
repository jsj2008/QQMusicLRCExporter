//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ChannelCreator, NSMutableArray, NSString;

@interface ProfileRecvData : NSObject
{
    long long _code;
    NSString *_msg;
    unsigned long long _orderType;
    long long _ownerUin;
    long long _visitUin;
    long long _sin;
    long long _ein;
    ChannelCreator *_creator;
    NSMutableArray *_list;
    long long _favSongNum;
    long long _favAlbumNum;
    long long _favSongListNum;
    long long _selfdirnum;
    long long _buySongNum;
    long long _buyAlbumNum;
    NSString *_buyURL;
}

+ (id)translateFromJsonData:(id)arg1;
+ (id)translateCDList:(id)arg1;
+ (id)translateAlbumList:(id)arg1;
+ (_Bool)isShow:(id)arg1;
+ (id)translateToChannelItem:(id)arg1;
+ (id)translateToChannleCreator:(id)arg1;
@property(retain, nonatomic) NSString *buyURL; // @synthesize buyURL=_buyURL;
@property(nonatomic) long long buyAlbumNum; // @synthesize buyAlbumNum=_buyAlbumNum;
@property(nonatomic) long long buySongNum; // @synthesize buySongNum=_buySongNum;
@property(nonatomic) long long selfdirnum; // @synthesize selfdirnum=_selfdirnum;
@property(nonatomic) long long favSongListNum; // @synthesize favSongListNum=_favSongListNum;
@property(nonatomic) long long favAlbumNum; // @synthesize favAlbumNum=_favAlbumNum;
@property(nonatomic) long long favSongNum; // @synthesize favSongNum=_favSongNum;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
@property(nonatomic) long long ein; // @synthesize ein=_ein;
@property(nonatomic) long long sin; // @synthesize sin=_sin;
@property(nonatomic) long long visitUin; // @synthesize visitUin=_visitUin;
@property(nonatomic) long long ownerUin; // @synthesize ownerUin=_ownerUin;
@property(nonatomic) unsigned long long orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)hasMore;
- (void)dealloc;

@end

