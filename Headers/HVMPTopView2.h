//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QLInteractiveVoteSwithDelegate-Protocol.h"

@class MPVolumeView, NSString, QLBadgeViewEx, QLMovieBaseControlView, UIButton, UILabel;

@interface HVMPTopView2 : UIView <QLInteractiveVoteSwithDelegate>
{
    UIView *_topBackgroundView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_airplayButton;
    MPVolumeView *_airplayView;
    MPVolumeView *_airplayView2;
    UIButton *_dlnaButton;
    UIButton *_momentButton;
    UIButton *_moreButton;
    UILabel *_titleTagLabel;
    _Bool _momentBtnHidden;
    _Bool _remotePlayDisabled;
    NSString *_remotePlayDisableReason;
    QLBadgeViewEx *_unreadNumIcon;
    UIButton *_interactiveVoteButton;
    QLMovieBaseControlView *_mainCtlView;
}

@property QLMovieBaseControlView *mainCtlView; // @synthesize mainCtlView=_mainCtlView;
@property(retain, nonatomic) UIButton *interactiveVoteButton; // @synthesize interactiveVoteButton=_interactiveVoteButton;
@property(retain, nonatomic) QLBadgeViewEx *unreadNumIcon; // @synthesize unreadNumIcon=_unreadNumIcon;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)interactiveSwitchISOpen:(_Bool)arg1;
- (void)updateInteractiveVoteSwith:(long long)arg1;
- (void)refreshFuncItems;
- (void)disableRemotePlayWithReason:(id)arg1;
- (void)enableRemotePlay;
- (void)clearResources;
- (void)showDLNAButton:(_Bool)arg1;
- (void)enableDLNAButton:(_Bool)arg1;
- (void)hideMoreButton:(_Bool)arg1;
- (void)hideMomentButton:(_Bool)arg1;
- (void)setTitle:(id)arg1 tag:(id)arg2;
- (void)checkAirplayShow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moreBtnClicked:(id)arg1;
- (void)momentBtnClicked:(id)arg1;
- (void)dlnaBtnClicked:(id)arg1;
- (void)airplayBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
