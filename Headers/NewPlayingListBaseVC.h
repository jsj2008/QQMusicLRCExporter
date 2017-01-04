//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HookViewController.h"

#import "NewPlayingListBaseViewDelegate-Protocol.h"
#import "QMPopoverViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NewPlayingListBaseView, PlayList, UIButton, UILabel, UITableView, UIToolbar, UIView;
@protocol NewPlayingListBaseVCDelegate;

@interface NewPlayingListBaseVC : HookViewController <UITableViewDataSource, UITableViewDelegate, NewPlayingListBaseViewDelegate, UIAlertViewDelegate, QMPopoverViewDelegate>
{
    _Bool _isShowing;
    _Bool _isBlackModel;
    _Bool _isPopoverStyle;
    _Bool _isViewAppearing;
    NewPlayingListBaseView *_eventView;
    UIView *_baseView;
    UIToolbar *_maskView;
    UITableView *_playingListTableView;
    UIView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_bottomView;
    UIView *_lineView;
    UIView *_bottomLineView;
    UIButton *_playModeButton;
    UIButton *_clearListButton;
    UIButton *_hiddenButton;
    UILabel *_playTitle;
    UIButton *_clearAllButton;
    UIButton *_removeOnlySongButton;
    UIButton *_returnSingleRadioButton;
    NSArray *_allSongs;
    NSMutableArray *_songs;
    id <NewPlayingListBaseVCDelegate> _delegate;
    PlayList *_playinglist;
    unsigned long long _playingListType;
    UIView *_inView;
    unsigned long long _arrowDirections;
    struct _NSRange _nextSongRange;
    struct CGRect _fromRect;
}

@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) __weak UIView *inView; // @synthesize inView=_inView;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) _Bool isPopoverStyle; // @synthesize isPopoverStyle=_isPopoverStyle;
@property(nonatomic) unsigned long long playingListType; // @synthesize playingListType=_playingListType;
@property(nonatomic) _Bool isBlackModel; // @synthesize isBlackModel=_isBlackModel;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) PlayList *playinglist; // @synthesize playinglist=_playinglist;
@property(nonatomic) __weak id <NewPlayingListBaseVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(nonatomic) struct _NSRange nextSongRange; // @synthesize nextSongRange=_nextSongRange;
@property(nonatomic) __weak NSArray *allSongs; // @synthesize allSongs=_allSongs;
@property(retain, nonatomic) UIButton *returnSingleRadioButton; // @synthesize returnSingleRadioButton=_returnSingleRadioButton;
@property(retain, nonatomic) UIButton *removeOnlySongButton; // @synthesize removeOnlySongButton=_removeOnlySongButton;
@property(retain, nonatomic) UIButton *clearAllButton; // @synthesize clearAllButton=_clearAllButton;
@property(retain, nonatomic) UILabel *playTitle; // @synthesize playTitle=_playTitle;
@property(retain, nonatomic) UIButton *hiddenButton; // @synthesize hiddenButton=_hiddenButton;
@property(retain, nonatomic) UIButton *clearListButton; // @synthesize clearListButton=_clearListButton;
@property(retain, nonatomic) UIButton *playModeButton; // @synthesize playModeButton=_playModeButton;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *playingListTableView; // @synthesize playingListTableView=_playingListTableView;
@property(retain, nonatomic) UIToolbar *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) NewPlayingListBaseView *eventView; // @synthesize eventView=_eventView;
- (void).cxx_destruct;
- (void)showInPopoverStyle;
- (void)setPopoverSytleFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3;
- (void)UIStatusBarOrientation:(id)arg1;
- (void)showBannerTips:(id)arg1 WithIcon:(long long)arg2;
- (void)showBannerTips:(id)arg1 WithIcon:(long long)arg2 Force:(_Bool)arg3;
- (void)showBannerTips:(id)arg1 WithIcon:(long long)arg2 withTipsType:(long long)arg3 withForceClearQueue:(_Bool)arg4;
- (void)showRadioSongFetchLoadingTips;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onColorChanged;
- (_Bool)playList:(id)arg1 ItemClicked:(int)arg2 listPlayMode:(int)arg3 isNeedToResetNavBar:(_Bool)arg4;
- (_Bool)playList:(id)arg1 ItemClicked:(int)arg2 listPlayMode:(int)arg3;
- (void)onNotifyPlayModeChanged:(id)arg1;
- (void)onNotifyPlayingListChange:(id)arg1;
- (void)setCurrentWhenChangeModel;
- (void)reloadData;
- (void)updatePlayModeChange;
- (void)updatePlayModeBtnState:(int)arg1;
- (void)tryPlaySongWhenDeleted:(unsigned long long)arg1 isManual:(_Bool)arg2;
- (void)deleteSong:(id)arg1;
- (void)prepareDeleteSong:(unsigned long long)arg1 isManual:(_Bool)arg2;
- (void)clearSongListAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clearSongList:(id)arg1;
- (void)onTouchUpInsidePlayMode:(id)arg1;
- (void)delayHiddenPlayingList;
- (void)hiddenPlayingList;
- (void)closePlayingList;
- (void)returnSingleRadio;
- (void)touchBaseViewEnd;
- (void)_makeBaseViewBackGroundColor;
- (void)buildView;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
