//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ComInfo : NSObject
{
}

+ (_Bool)isChinaMobile;
+ (_Bool)isChinaTelecom;
+ (_Bool)isNotChinaUnicom;
+ (_Bool)isChinaUnicom;
+ (id)getMNC;
+ (id)getNetworkName;
+ (_Bool)isChinaMCC;
+ (id)getMCC;
+ (int)getJailBroken;
+ (id)jailBreakPaths;
+ (void)resetTelephonyNetworkInfo;
+ (id)getTelephoneyNetworkInfo;

@end
