//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMCRPCStruct.h"

@class NSNumber, NSString;

@interface FMCMenuParams : FMCRPCStruct
{
}

@property(retain) NSString *menuName;
@property(retain) NSNumber *position;
@property(retain) NSNumber *parentID;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

