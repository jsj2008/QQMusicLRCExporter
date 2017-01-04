//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, QPlayUpnpControlPoint, QPlayUpnpDevice;

@protocol CGUpnpControlPointDelegate <NSObject>

@optional
- (void)controlPoint:(QPlayUpnpControlPoint *)arg1 variableChangedForDevice:(QPlayUpnpDevice *)arg2 serviceID:(NSString *)arg3 name:(NSString *)arg4 value:(NSString *)arg5;
- (void)controlPoint:(QPlayUpnpControlPoint *)arg1 deviceInvalid:(NSString *)arg2;
- (void)controlPoint:(QPlayUpnpControlPoint *)arg1 deviceRemoved:(NSString *)arg2 sonosHHID:(NSString *)arg3 sonosBootSeq:(NSString *)arg4;
- (void)controlPoint:(QPlayUpnpControlPoint *)arg1 deviceUpdated:(NSString *)arg2 sonosHHID:(NSString *)arg3 sonosBootSeq:(NSString *)arg4;
- (void)controlPoint:(QPlayUpnpControlPoint *)arg1 deviceAdded:(NSString *)arg2 sonosHHID:(NSString *)arg3 sonosBootSeq:(NSString *)arg4;
@end
