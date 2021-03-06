//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIImageView, UILabel;

@interface QMFeedbackView : UIView
{
    UIImageView *_imageView;
    UILabel *_serverLabel;
    UILabel *_networkStatus;
    UIView *_networkBgView;
    UIView *_seperateLine;
    NSTimer *_checkTimer;
}

+ (id)getFeedView;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UIView *networkBgView; // @synthesize networkBgView=_networkBgView;
@property(retain, nonatomic) UILabel *networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) UILabel *serverLabel; // @synthesize serverLabel=_serverLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)switchToNextServer;
- (void)onNotifyNetStatusChanged:(id)arg1;
- (void)onNotifyServerChanged:(id)arg1;
- (void)realcheckNetworkStatus;
- (void)checkNetworkStatus;
- (id)networkStatusColor:(_Bool)arg1;
- (id)serverName:(int)arg1;
- (void)updateNetWorkView;
- (void)jumpToFeedBack;
- (void)panFeedViewGesture:(id)arg1;
- (void)tapFeedViewGesture:(id)arg1;
- (void)changeColorStyleTo:(_Bool)arg1;
- (void)onNotifyJumpToDarkView:(id)arg1;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (int)headerHight;
- (void)addNetworkNotifyObserver;
- (void)addColorableNotifyObserver;
- (void)buildGestureRecognizer;
- (void)buildNetworkView;
- (void)buildImageView;
- (void)dealloc;
- (id)initRDMVersion;
- (id)initGrayVersion;

@end

