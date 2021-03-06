//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class ChannelCreatorFollowActionProtocol, FollowTableViewImageManager, GeneSimilarProtocol, NSArray, NSMutableArray, NSMutableDictionary, QQFriendGroupDetailInfoProtocol, QQFriendGroupInfoProtocol, WXFriendListProtocol;

@interface FollowMoreDataManager : NSObject <ProtocolHostDelegate>
{
    FollowTableViewImageManager *_singerTableManager;
    FollowTableViewImageManager *_daRenTableManager;
    FollowTableViewImageManager *_normalUserTableManager;
    FollowTableViewImageManager *_QQFriendsTableManager;
    FollowTableViewImageManager *_searchTableManager;
    FollowTableViewImageManager *_wxFriendTableManager;
    QQFriendGroupInfoProtocol *_groupInfoProtocol;
    QQFriendGroupDetailInfoProtocol *_groupDetailInfoProtocol;
    WXFriendListProtocol *_wxFriendListProtocol;
    ChannelCreatorFollowActionProtocol *_followProtocol;
    GeneSimilarProtocol *_singerRecProtocol;
    GeneSimilarProtocol *_daRenRecProtocol;
    NSArray *_groupInfos;
    NSArray *_qqFriends;
    NSArray *_unFollowQQFriend;
    NSArray *_searchResult;
    NSMutableDictionary *_allUnFollowQQFriendsDic;
    NSMutableArray *_singers;
    NSMutableArray *_daRens;
    NSArray *_wxFriends;
    long long _singersTotalNum;
    long long _daRensTotalNum;
}

+ (void)deleteAllGroupCache;
+ (id)sharedFollowMoreDataManager;
@property(nonatomic) long long daRensTotalNum; // @synthesize daRensTotalNum=_daRensTotalNum;
@property(nonatomic) long long singersTotalNum; // @synthesize singersTotalNum=_singersTotalNum;
@property(retain, nonatomic) NSArray *wxFriends; // @synthesize wxFriends=_wxFriends;
@property(retain, nonatomic) NSMutableArray *daRens; // @synthesize daRens=_daRens;
@property(retain, nonatomic) NSMutableArray *singers; // @synthesize singers=_singers;
@property(retain, nonatomic) NSMutableDictionary *allUnFollowQQFriendsDic; // @synthesize allUnFollowQQFriendsDic=_allUnFollowQQFriendsDic;
@property(retain, nonatomic) NSArray *searchResult; // @synthesize searchResult=_searchResult;
@property(retain, nonatomic) NSArray *unFollowQQFriend; // @synthesize unFollowQQFriend=_unFollowQQFriend;
@property(retain, nonatomic) NSArray *qqFriends; // @synthesize qqFriends=_qqFriends;
@property(retain, nonatomic) NSArray *groupInfos; // @synthesize groupInfos=_groupInfos;
@property(retain, nonatomic) GeneSimilarProtocol *daRenRecProtocol; // @synthesize daRenRecProtocol=_daRenRecProtocol;
@property(retain, nonatomic) GeneSimilarProtocol *singerRecProtocol; // @synthesize singerRecProtocol=_singerRecProtocol;
@property(retain, nonatomic) ChannelCreatorFollowActionProtocol *followProtocol; // @synthesize followProtocol=_followProtocol;
@property(retain, nonatomic) WXFriendListProtocol *wxFriendListProtocol; // @synthesize wxFriendListProtocol=_wxFriendListProtocol;
@property(retain, nonatomic) QQFriendGroupDetailInfoProtocol *groupDetailInfoProtocol; // @synthesize groupDetailInfoProtocol=_groupDetailInfoProtocol;
@property(retain, nonatomic) QQFriendGroupInfoProtocol *groupInfoProtocol; // @synthesize groupInfoProtocol=_groupInfoProtocol;
@property(retain, nonatomic) FollowTableViewImageManager *wxFriendTableManager; // @synthesize wxFriendTableManager=_wxFriendTableManager;
@property(retain, nonatomic) FollowTableViewImageManager *searchTableManager; // @synthesize searchTableManager=_searchTableManager;
@property(retain, nonatomic) FollowTableViewImageManager *QQFriendsTableManager; // @synthesize QQFriendsTableManager=_QQFriendsTableManager;
@property(retain, nonatomic) FollowTableViewImageManager *normalUserTableManager; // @synthesize normalUserTableManager=_normalUserTableManager;
@property(retain, nonatomic) FollowTableViewImageManager *daRenTableManager; // @synthesize daRenTableManager=_daRenTableManager;
@property(retain, nonatomic) FollowTableViewImageManager *singerTableManager; // @synthesize singerTableManager=_singerTableManager;
- (void).cxx_destruct;
- (void)deleteCacheFileByGroupid:(long long)arg1;
- (_Bool)isCacheExpired:(id)arg1 timeInterval:(double)arg2;
- (void)readCurrentUserGroupDetailInfo;
- (void)readCurrentUserGroupInfoFromPath:(id)arg1;
- (void)saveCurrentUserCache:(id)arg1 filePath:(id)arg2;
- (id)getGroupDetailInfoCachePathByGroupid:(long long)arg1;
- (id)filterFollowedQQFriend:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)dealloc;
- (id)init;

@end

