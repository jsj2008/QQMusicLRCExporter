//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ProtocolHostDelegate-Protocol.h"

@class NSMutableDictionary;

@interface ProfileDataMgr : NSObject <ProtocolHostDelegate>
{
    NSMutableDictionary *_recvDatas;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *recvDatas; // @synthesize recvDatas=_recvDatas;
- (void).cxx_destruct;
- (void)postData:(id)arg1 workReturn:(long long)arg2 uin:(unsigned long long)arg3 notifyName:(id)arg4;
- (void)postNotifyData:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)buildUpData:(id)arg1;
- (void)updateActiveProfile;
- (void)requestProfileMore:(unsigned long long)arg1;
- (void)requestProfile:(unsigned long long)arg1;
- (void)request:(unsigned long long)arg1 start:(int)arg2;
- (void)update:(unsigned long long)arg1 followFlag:(_Bool)arg2;
- (unsigned long long)favSongListNum:(unsigned long long)arg1;
- (unsigned long long)favAlbumNum:(unsigned long long)arg1;
- (unsigned long long)favSongNum:(unsigned long long)arg1;
- (id)cdList:(unsigned long long)arg1;
- (_Bool)hasMoreCD:(unsigned long long)arg1;
- (id)recvData:(unsigned long long)arg1;
- (int)totalCDNumber:(id)arg1;
- (id)channelCreator:(unsigned long long)arg1;
- (void)logout;
- (void)loginOk;
- (void)prepareData;
- (id)init;

@end

