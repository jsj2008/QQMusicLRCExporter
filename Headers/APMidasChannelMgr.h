//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface APMidasChannelMgr : NSObject
{
    NSString *defaultChannel;
    NSString *expressChannel;
    NSMutableArray *showChannels;
    NSMutableArray *channels;
    NSMutableArray *acctChannels;
    NSString *currentAcctName;
}

+ (void)deInstance;
+ (id)instance;
@property(retain, nonatomic) NSString *currentAcctName; // @synthesize currentAcctName;
@property(retain, nonatomic) NSMutableArray *acctChannels; // @synthesize acctChannels;
@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels;
@property(retain, nonatomic) NSMutableArray *showChannels; // @synthesize showChannels;
@property(retain, nonatomic) NSString *expressChannel; // @synthesize expressChannel;
@property(retain, nonatomic) NSString *defaultChannel; // @synthesize defaultChannel;
- (void).cxx_destruct;
- (id)getChannelId:(id)arg1;
- (id)getExpressChannel;
- (void)contructChannels:(id)arg1 withJson:(id)arg2;
- (void)resolveChannel:(id)arg1;

@end

