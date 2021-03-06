//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDMessagingService, IDVehicleInfo, IDVersionInfo;
@protocol IDAccessoryMonitor;

@interface IDAccessoryMonitor : NSObject
{
    id <IDAccessoryMonitor> _accessoryMonitor;
}

@property(retain) id <IDAccessoryMonitor> accessoryMonitor; // @synthesize accessoryMonitor=_accessoryMonitor;
- (void).cxx_destruct;
- (void)deregisterApplication:(id)arg1;
- (void)registerNonStickyApplication:(id)arg1;
- (void)registerStickyApplication:(id)arg1;
- (void)launchApplication:(id)arg1;
@property(readonly) _Bool supportsA4AMultisession;
@property(readonly) _Bool supportsA4AConnectionInBackground;
- (id)proxyInfo;
- (id)communicationURL;
- (void)stopMonitoring;
- (void)startMonitoringWithManifest:(id)arg1;
- (void)startMonitoring;
@property(readonly, nonatomic) IDMessagingService *messagingService;
@property(readonly, nonatomic) IDVersionInfo *etchVersion;
@property(readonly, nonatomic) IDVersionInfo *cdsVersion;
@property(readonly, nonatomic) IDVehicleInfo *vehicleInfo;
- (id)init;

@end

