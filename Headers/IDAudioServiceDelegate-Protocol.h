//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDAudioService;

@protocol IDAudioServiceDelegate <NSObject>
- (void)audioService:(IDAudioService *)arg1 multimediaButtonEvent:(int)arg2;
- (void)audioService:(IDAudioService *)arg1 interruptStateChanged:(int)arg2;
- (void)audioService:(IDAudioService *)arg1 entertainmentStateChanged:(int)arg2;
@end

