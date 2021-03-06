//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QWTask;

@interface QQWalletSDK : NSObject
{
    QWTask *_currentTask;
}

+ (_Bool)isSupportQQWallet;
+ (void)registerQQWalletApplication:(id)arg1 urlScheme:(id)arg2 name:(id)arg3;
+ (_Bool)QQWalletSDKHanldeApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)startPayWithAppId:(id)arg1 bargainorId:(id)arg2 tokenId:(id)arg3 signature:(id)arg4 nonce:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)startPayWithServerParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) QWTask *currentTask; // @synthesize currentTask=_currentTask;
- (void).cxx_destruct;
- (void)handleResponseWithInfo:(id)arg1;
- (void)startTask:(id)arg1;

@end

