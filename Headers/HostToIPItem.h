//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface HostToIPItem : NSObject
{
    NSString *_host;
    double _ipExpireTime;
    NSMutableArray *_ipResult;
}

@property(retain, nonatomic) NSMutableArray *ipResult; // @synthesize ipResult=_ipResult;
@property(nonatomic) double ipExpireTime; // @synthesize ipExpireTime=_ipExpireTime;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end

