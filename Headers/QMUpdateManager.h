//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QMUpdateManager : NSObject
{
    _Bool _hasShownUpdateAlertToday;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasShownUpdateAlertToday; // @synthesize hasShownUpdateAlertToday=_hasShownUpdateAlertToday;
- (void)_openInstallAddress;
- (void)resetOnceDayToken;
- (void)showUpdateAlertAtMostOncePerDay:(id)arg1 version:(id)arg2;
- (void)showUpgradeAlertView:(_Bool)arg1;

@end
