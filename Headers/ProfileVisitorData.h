//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ProfileVisitorData : NSObject
{
    NSString *_logoUrl;
    unsigned long long _uin;
    NSString *_nick;
    NSString *_time;
}

+ (id)translateFromArray:(id)arg1;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
- (void).cxx_destruct;

@end
