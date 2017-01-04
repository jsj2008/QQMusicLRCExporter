//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FontItem, NSString, PhotoItem, UIColor, UIScrollView;

@protocol QMSharePhotoListDelegate <NSObject>

@optional
- (void)qmChangeQRState:(_Bool)arg1;
- (void)qmChangeFontShadow:(_Bool)arg1;
- (void)qmChangeFontAlignment:(long long)arg1;
- (void)qmChangeFontSize:(unsigned long long)arg1;
- (void)qmChangeFontColor:(UIColor *)arg1;
- (void)qmFontTableViewDidClickWithObject:(FontItem *)arg1;
- (void)qmFontShouldShowAlertView:(NSString *)arg1 object:(FontItem *)arg2;
- (void)qmFontShouldShowVipPurchaseAlertView:(NSString *)arg1 object:(FontItem *)arg2;
- (void)qmScrollViewDidScroll:(UIScrollView *)arg1;
- (void)qmPhotoTableViewDidClickTitle:(NSString *)arg1 object:(PhotoItem *)arg2;
- (void)qmsharePhotoListDidClick:(unsigned long long)arg1 object:(PhotoItem *)arg2;
@end
