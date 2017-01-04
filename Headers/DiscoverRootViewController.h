//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseScrollerVC.h"

#import "ImageManagerDelegate-Protocol.h"
#import "ListTagDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "ThreeButtonCell-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BELoadingView, FriendListenProtocol, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage, UIView, UIViewController;

@interface DiscoverRootViewController : BaseScrollerVC <UISearchBarDelegate, UITableViewDataSource, UIScrollViewDelegate, UISearchDisplayDelegate, UITextFieldDelegate, ProtocolHostDelegate, ListTagDelegate, ThreeButtonCell, ImageManagerDelegate>
{
    BELoadingView *loadingView;
    FriendListenProtocol *fprotocol;
    _Bool freshFriendListenDone;
    _Bool needShowExpand;
    _Bool expansion;
    NSIndexPath *_toolsIndexPath;
    NSArray *_threeButtonItemDatas;
    NSMutableArray *_friendListenData;
    NSMutableDictionary *_roundHeadCache;
    UIImage *_defaultRoundImg;
    NSString *_friendListenSubTitle;
    UIView *_headView;
    UIButton *_recognizeSongBtn;
    UIViewController *_detailVC;
    UIView *_iconLabelGroup;
}

@property(retain, nonatomic) UIView *iconLabelGroup; // @synthesize iconLabelGroup=_iconLabelGroup;
@property(retain, nonatomic) UIViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) UIButton *recognizeSongBtn; // @synthesize recognizeSongBtn=_recognizeSongBtn;
@property(retain) UIView *headView; // @synthesize headView=_headView;
@property(retain) NSString *friendListenSubTitle; // @synthesize friendListenSubTitle=_friendListenSubTitle;
@property(retain) UIImage *defaultRoundImg; // @synthesize defaultRoundImg=_defaultRoundImg;
@property(retain) NSMutableDictionary *roundHeadCache; // @synthesize roundHeadCache=_roundHeadCache;
@property(retain) NSMutableArray *friendListenData; // @synthesize friendListenData=_friendListenData;
@property(retain) NSArray *threeButtonItemDatas; // @synthesize threeButtonItemDatas=_threeButtonItemDatas;
@property(retain) NSIndexPath *toolsIndexPath; // @synthesize toolsIndexPath=_toolsIndexPath;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)friendListenHeaderCache;
- (id)getCorerRadiusImage:(id)arg1 rect:(struct CGRect)arg2;
- (id)getRoundDefaultImage;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)freshFriendListenData;
- (id)getdefaultYunyingKey;
- (void)onDefaultSearchKeyChanged:(id)arg1;
- (void)onNotifyUserLanguageChanged:(id)arg1;
- (void)onNotifyLogout:(id)arg1;
- (void)onNotifySuccess:(id)arg1;
- (void)onNotifyMusicCircleKSongNewFeedUpate:(id)arg1;
- (void)onNotifyMusicCircleNewInfoDidRead:(id)arg1;
- (void)shouldReloadMusicCircleCell:(id)arg1;
- (void)playFriendHotSongAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTouchUpInsideThreeButtonCell:(id)arg1;
- (id)cellForExpandIndexPath:(id)arg1;
- (id)cellForFriendListenIndexPath:(id)arg1;
- (id)cellForFriendHeadIndexPath:(id)arg1;
- (void)updateRedPointsState;
- (id)cellForToolsIndexPath:(id)arg1;
- (void)jumpToRecognize:(id)arg1;
- (void)goToSearch:(id)arg1;
- (void)onColorStyleChanged;
- (void)viewDidPop;
- (void)showLoginAlertViewWithMsg:(id)arg1 successAction:(SEL)arg2 successObject:(id)arg3;
- (void)navigateToLyricPosterVC:(id)arg1;
- (void)navigateToKGeVC:(id)arg1;
- (void)navigateToMVChannelVC:(id)arg1;
- (void)navigateToRecognizerVC:(id)arg1;
- (void)directNavigateToMusicCircleDetailVCWithFeedId:(id)arg1;
- (void)navigateToMusicCircleVC:(id)arg1;
- (void)navigateToSingersVC:(id)arg1;
- (void)freshHeadView;
- (id)createHeaderView;
- (id)strVCtype;
- (int)statusBarOffset;
- (void)viewDidAppear:(_Bool)arg1;
- (void)jumpToViewByMid:(int)arg1 AndKey1:(id)arg2 AndKey2:(id)arg3;
- (void)popGestureRecognize;
- (void)didLeaveScrollerVC;
- (void)didEntranceScrollerVC;
- (struct CGRect)frameForControlIndex:(unsigned long long)arg1;
- (void)reLayout:(long long)arg1;
- (void)reloadThreeButtonDatas;
- (void)loadView;
- (_Bool)useBgImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
