//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface MemSig : NSObject <NSCoding>
{
    NSString *sigName;
    unsigned int dwAppid;
    NSData *sig;
    NSData *sigKey;
    unsigned int dwSigTime;
    unsigned int dwValidTime;
    NSString *sigDesc;
}

@property(nonatomic) unsigned int dwValidTime; // @synthesize dwValidTime;
@property(nonatomic) unsigned int dwSigTime; // @synthesize dwSigTime;
@property(copy, nonatomic) NSString *sigDesc; // @synthesize sigDesc;
@property(nonatomic) unsigned int dwAppid; // @synthesize dwAppid;
@property(copy, nonatomic) NSString *sigName; // @synthesize sigName;
@property(retain, nonatomic) NSData *sigKey; // @synthesize sigKey;
@property(retain, nonatomic) NSData *sig; // @synthesize sig;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end

