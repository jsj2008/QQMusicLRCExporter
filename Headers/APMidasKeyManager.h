//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APMidasHttpReq, NSString;

@interface APMidasKeyManager : NSObject
{
    _Bool _updating;
    long long _state;
    NSString *_offerId;
    NSString *_openId;
    struct vector<id<ApKeyChangeObserver>, std::__1::allocator<id<ApKeyChangeObserver>>> _observers;
    int _changeKeyRetryTimes;
    APMidasHttpReq *_changeKeyReq;
}

+ (void)deInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) APMidasHttpReq *changeKeyReq; // @synthesize changeKeyReq=_changeKeyReq;
@property(nonatomic) int changeKeyRetryTimes; // @synthesize changeKeyRetryTimes=_changeKeyRetryTimes;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool updating; // @synthesize updating=_updating;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyKeyUpdate;
- (void)updateKeyUsingBaseKey:(_Bool)arg1;
- (void)updateKeyByKeyType:(long long)arg1;
- (void)readKeysFromLocalPersistence;
- (void)saveKeysToLocalPersistence;
- (void)deleteNewPersistenceFile;
- (void)deleteOldPersistenceFile;
- (_Bool)checkNewKeyPersistenceFileExist;
- (_Bool)checkOldKeyPersistenceFileExist;
- (void)initAllKeys;
- (void *)getProcessor;
- (void)updateKeyAtState:(long long)arg1;
- (void)loadKeyByOfferid:(id)arg1 openId:(id)arg2;
- (void)unRegisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end
