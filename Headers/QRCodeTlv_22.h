//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData, NSString;

@interface QRCodeTlv_22 : WloginTlv
{
    unsigned int dwSSOVer;
    unsigned int dwAppID;
    unsigned int dwSubAppID;
    NSData *guid;
    unsigned short wAppNameLen;
    NSString *sAppName;
    unsigned short wAppVerLen;
    NSString *sAppVer;
    unsigned short wAppSigLen;
    NSString *sAppSig;
}

@property(copy) NSString *sAppSig; // @synthesize sAppSig;
@property(nonatomic) unsigned short wAppSigLen; // @synthesize wAppSigLen;
@property(copy) NSString *sAppVer; // @synthesize sAppVer;
@property(nonatomic) unsigned short wAppVerLen; // @synthesize wAppVerLen;
@property(copy) NSString *sAppName; // @synthesize sAppName;
@property(nonatomic) unsigned short wAppNameLen; // @synthesize wAppNameLen;
@property(retain) NSData *guid; // @synthesize guid;
@property(nonatomic) unsigned int dwSubAppID; // @synthesize dwSubAppID;
@property(nonatomic) unsigned int dwAppID; // @synthesize dwAppID;
@property(nonatomic) unsigned int dwSSOVer; // @synthesize dwSSOVer;
- (void)dealloc;
- (id)getV;
- (int)encode:(id)arg1;
- (id)init;

@end

