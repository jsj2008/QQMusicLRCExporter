//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DBContext : NSObject
{
    CDUnknownBlockType _runDB;
    CDUnknownBlockType _runCallback;
    CDUnknownBlockType _getDB;
    CDUnknownBlockType _getCallback;
    CDUnknownBlockType _runBlock;
}

@property(copy, nonatomic) CDUnknownBlockType runBlock; // @synthesize runBlock=_runBlock;
@property(copy, nonatomic) CDUnknownBlockType getCallback; // @synthesize getCallback=_getCallback;
@property(copy, nonatomic) CDUnknownBlockType getDB; // @synthesize getDB=_getDB;
@property(copy, nonatomic) CDUnknownBlockType runCallback; // @synthesize runCallback=_runCallback;
@property(copy, nonatomic) CDUnknownBlockType runDB; // @synthesize runDB=_runDB;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseBlocks;

@end
