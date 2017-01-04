//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QMCrashMonitor : NSObject
{
    _Bool _enterSafeMode;
}

+ (id)monitor;
@property(nonatomic) _Bool enterSafeMode; // @synthesize enterSafeMode=_enterSafeMode;
- (void)runCrashMonitorTest;
- (_Bool)checkIfShowSafeModeAlert:(CDUnknownBlockType)arg1;
- (void)cleanPossibleCauseCrashCache;
- (_Bool)shouldEnterSafeMode;
- (void)stopMonitoring;
- (void)startMonitoring;
- (long long)historyCrashTimes;

@end
