//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDEtchSession.h"

@interface IDEtchSession (ApplicationManagement)
- (void)handleEvent:(long long)arg1 uniqueIdentifier:(id)arg2 appIdentifier:(id)arg3 applicationManagementServiceEvent:(int)arg4;
- (void)applicationManagementService:(long long)arg1 removeEventHandlerAppId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationManagementService:(long long)arg1 addEventHandlerAppId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationManagementService:(long long)arg1 registerAppId:(id)arg2 variantMap:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)applicationManagementService:(long long)arg1 disposeWithError:(id *)arg2;
- (long long)registerApplicationManagementServiceWithIdentifier:(id)arg1 error:(id *)arg2;
@end
