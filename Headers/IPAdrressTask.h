//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData, NSString, NSTimer;
@protocol IPAdrressTaskDelegate;

@interface IPAdrressTask : NSObject
{
    NSString *_currentHost;
    double _ipExpireTime;
    NSMutableArray *_ipResult;
    NSTimer *_refreshTimer;
    NSMutableData *_ipData;
    id <IPAdrressTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <IPAdrressTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableData *ipData; // @synthesize ipData=_ipData;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMutableArray *ipResult; // @synthesize ipResult=_ipResult;
@property(nonatomic) double ipExpireTime; // @synthesize ipExpireTime=_ipExpireTime;
@property(retain, nonatomic) NSString *currentHost; // @synthesize currentHost=_currentHost;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)startIPTask;
- (_Bool)reQuestIpAdress:(id)arg1;
- (void)startFreshTimer;
- (id)init;

@end
