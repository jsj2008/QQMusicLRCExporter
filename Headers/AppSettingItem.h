//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface AppSettingItem : NSObject <NSCoding>
{
    _Bool appAddedByUser;
    unsigned int flag;
    NSString *openID;
    NSString *appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(nonatomic) _Bool appAddedByUser; // @synthesize appAddedByUser;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(retain, nonatomic) NSString *openID; // @synthesize openID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

