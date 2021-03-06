//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class KKMediaRootViewController, NSTimer, UIImageView, UILabel, UIView;

@interface QLJumpBannerView : UIButton
{
    UIView *_backgroundView;
    UIImageView *_iconView;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    NSTimer *_showTimer;
    KKMediaRootViewController *_mainCtl;
}

@property(nonatomic) KKMediaRootViewController *mainCtl; // @synthesize mainCtl=_mainCtl;
- (void)dealloc;
- (id)getSystemVersion;
- (id)getBindingQQ;
- (id)getDeviceID;
- (void)timeHideControl;
- (void)setupShowTimer;
- (void)moveDown:(_Bool)arg1;
- (void)flushJumpBanner;
- (void)clickButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

