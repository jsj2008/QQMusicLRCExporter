//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LuaWaxSharedEnv : NSObject
{
    _Bool _isWaxStarted;
}

+ (id)sharedWaxEnv;
@property _Bool isWaxStarted; // @synthesize isWaxStarted=_isWaxStarted;
- (void)stopWax;

@end
