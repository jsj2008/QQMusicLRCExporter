//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface MpGoodsInfo : NSObject <NSMutableCopying>
{
    NSString *Name;
    NSString *GoodsNumber;
    NSString *GoodsImageUrl;
}

@property(copy, nonatomic) NSString *GoodsImageUrl; // @synthesize GoodsImageUrl;
@property(copy, nonatomic) NSString *GoodsNumber; // @synthesize GoodsNumber;
@property(copy, nonatomic) NSString *Name; // @synthesize Name;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end
