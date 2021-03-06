//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProfileCacheDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class NSMutableDictionary, NSString, ProfileCacheMgr, ProfileRecvData;

@interface MyProfileMgr : NSObject <ProtocolHostDelegate, ProfileCacheDelegate>
{
    _Bool _needUpdateNewTip;
    NSMutableDictionary *_profile;
    ProfileRecvData *_recvData;
    ProfileCacheMgr *_cacheMgr;
}

+ (void)setQQUserData:(id)arg1;
+ (id)instance;
@property(nonatomic) _Bool needUpdateNewTip; // @synthesize needUpdateNewTip=_needUpdateNewTip;
@property(retain, nonatomic) ProfileCacheMgr *cacheMgr; // @synthesize cacheMgr=_cacheMgr;
@property(retain, nonatomic) ProfileRecvData *recvData; // @synthesize recvData=_recvData;
@property(retain, nonatomic) NSMutableDictionary *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)postNotifyData:(id)arg1 workReturn:(long long)arg2 uin:(unsigned long long)arg3;
- (void)updateActiveProfileInfo:(id)arg1;
- (void)recvResponseData:(id)arg1;
- (void)cacheData:(id)arg1;
- (void)logout;
- (void)loginOk;
- (id)dbPathFile;
- (void)requestProfileMore:(unsigned long long)arg1;
- (void)requestProfile:(unsigned long long)arg1;
- (void)removeData:(id)arg1;
- (id)channelCreator;
- (id)cdList:(unsigned long long)arg1;
- (_Bool)hasMoreCD:(unsigned long long)arg1;
- (int)totalCDNumber:(id)arg1;
- (void)updateProfile;
- (void)clearFollowNew;
- (_Bool)isFollowNew;
- (void)clearOrderNew;
- (_Bool)isOrderNew;
- (void)clearFansNew;
- (_Bool)isFansNew;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

