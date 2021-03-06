//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString, UIColor;

@interface ChannelV4CategoryGroup : NSObject <NSCoding, NSCopying>
{
    NSString *_groupName;
    long long _groupId;
    UIColor *_groupColor;
    NSMutableArray *_categories;
}

@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) UIColor *groupColor; // @synthesize groupColor=_groupColor;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

