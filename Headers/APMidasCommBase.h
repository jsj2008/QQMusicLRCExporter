//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ApKeyChangeObserver-Protocol.h"

@class APMidasHttpReq, NSString;

@interface APMidasCommBase : NSObject <ApKeyChangeObserver>
{
    _Bool useLoading;
    _Bool changeKeyJustNow;
    _Bool needChangeKey;
    _Bool _requestToChangekey;
    APMidasHttpReq *_req;
}

@property(nonatomic) _Bool requestToChangekey; // @synthesize requestToChangekey=_requestToChangekey;
@property(retain, nonatomic) APMidasHttpReq *req; // @synthesize req=_req;
@property(nonatomic) _Bool needChangeKey; // @synthesize needChangeKey;
@property(nonatomic) _Bool changeKeyJustNow; // @synthesize changeKeyJustNow;
@property(nonatomic) _Bool useLoading; // @synthesize useLoading;
- (void).cxx_destruct;
- (void)onUpdateKeyNetworkError:(long long)arg1 offerId:(id)arg2 openId:(id)arg3;
- (void)onKeyUpdateError:(long long)arg1 message:(id)arg2 offerId:(id)arg3 openId:(id)arg4;
- (void)onUpdateSecKey:(id)arg1 payKey:(id)arg2 keyTime:(id)arg3 offerId:(id)arg4 openId:(id)arg5;
- (_Bool)onHttpResp:(id)arg1;
- (void)startReq:(id)arg1 paramsContructor:(id)arg2 netErr:(CDUnknownBlockType)arg3 err:(CDUnknownBlockType)arg4 succ:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)pushReq:(id)arg1;
- (void)resume;
- (void)doRelease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

