//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4APacket, IDTcpConnection, NSError;

@protocol IDTcpConnectionDelegate <NSObject>
- (void)connection:(IDTcpConnection *)arg1 errorEncountered:(NSError *)arg2;
- (void)connection:(IDTcpConnection *)arg1 didCreatePackage:(IDA4APacket *)arg2;
@end

