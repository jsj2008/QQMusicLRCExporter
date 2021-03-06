//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AppThemeItem, NSError;

@protocol AppThemeManagerDelegate <NSObject>

@optional
- (void)appThemeDidUpdated:(AppThemeItem *)arg1;
- (void)appThemeDownloadFailed:(AppThemeItem *)arg1 error:(NSError *)arg2;
- (void)appThemeDownloading:(AppThemeItem *)arg1;
- (void)appThemeDownloading:(AppThemeItem *)arg1 nowPercent:(unsigned long long)arg2;
- (void)appThemeDownloaded:(AppThemeItem *)arg1 changeThemeNow:(_Bool)arg2;
@end

