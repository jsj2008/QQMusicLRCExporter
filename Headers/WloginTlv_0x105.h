//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x105 : WloginTlv
{
    NSData *acSig;
    NSData *acPicData;
}

@property(retain) NSData *acPicData; // @synthesize acPicData;
@property(retain) NSData *acSig; // @synthesize acSig;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end
