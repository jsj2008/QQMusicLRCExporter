//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RC4 : NSObject
{
    int i;
    int j;
    unsigned char s[256];
    NSString *key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (void)swap:(int)arg1 swap2:(int)arg2;
- (unsigned char)KSA;
- (void)initialize;
- (id)encryptData:(id)arg1;
- (id)initWithKey:(id)arg1;

@end
