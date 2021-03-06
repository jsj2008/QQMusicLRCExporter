//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class ListenSpeedControl, ProfileHeadIcon, ProfileNickIcon, QMLabel, UIImageView;
@protocol MyMusicRootUserInfoControlDelegate;

@interface MyMusicRootUserInfoControl : UIControl
{
    int _listenTime;
    id <MyMusicRootUserInfoControlDelegate> _delegate;
    ListenSpeedControl *_listenSpeedControl;
    ProfileHeadIcon *_icon;
    ProfileNickIcon *_nickIcon;
    QMLabel *_timeOut;
    UIImageView *_redPoint;
    double _rightSepWidth;
}

@property int listenTime; // @synthesize listenTime=_listenTime;
@property double rightSepWidth; // @synthesize rightSepWidth=_rightSepWidth;
@property(retain) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain) QMLabel *timeOut; // @synthesize timeOut=_timeOut;
@property(retain) ProfileNickIcon *nickIcon; // @synthesize nickIcon=_nickIcon;
@property(retain) ProfileHeadIcon *icon; // @synthesize icon=_icon;
@property(retain) ListenSpeedControl *listenSpeedControl; // @synthesize listenSpeedControl=_listenSpeedControl;
@property(nonatomic) __weak id <MyMusicRootUserInfoControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onColorStyleChanged;
- (void)onNotifyConcisePattenOn:(id)arg1;
- (void)refreshUserListenTimeState;
- (void)hideSingleUserIconView;
- (void)refreshSkinSetting;
- (_Bool)shouldHiddenRedPoint:(id)arg1;
- (void)updateUserListenTime:(int)arg1;
- (void)loadUserProcessPercent;
- (void)clearUserIcon;
- (void)updateUI:(id)arg1 isFreePackUser:(_Bool)arg2 withListenTime:(int)arg3;
- (struct CGRect)getNickIconFrame;
- (void)setRightSep:(double)arg1;
- (void)buildSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

