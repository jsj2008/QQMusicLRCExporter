//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSURL, TADContainerView;

@protocol TADContainerViewDelegate <NSObject>
- (void)containerView:(TADContainerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)containerViewDidLoadAd:(TADContainerView *)arg1;

@optional
- (void)continueAdPlay;
- (void)pauseAdPlay;
- (void)containerLandingViewDidDismiss;
- (void)containerLandingViewWillDismiss;
- (void)containerLandingViewDidPresent;
- (void)containerLandingViewWillPresent;
- (_Bool)containerView:(TADContainerView *)arg1 shouldOpenURL:(NSURL *)arg2;
- (void)containerViewCloseButtonPressed:(TADContainerView *)arg1;
@end

