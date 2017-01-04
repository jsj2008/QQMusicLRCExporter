//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ProcessViewDelegate-Protocol.h"

@class NSString, NSTimer, ProcessView, UIButton, UIImageView, UILabel, UIView;

@interface QMImportResultVC : SkinViewController <ProcessViewDelegate>
{
    _Bool _bNeedUpdate;
    _Bool _bStatedExposureDetailBtn;
    _Bool _bWakeupByOutside;
    _Bool _bStatedTransSongSucc;
    UIImageView *_topoView;
    UIImageView *_succIcon;
    UILabel *_stateLbl;
    UIButton *_detailButton;
    UIButton *_stopButton;
    UILabel *_connectedTips;
    UIView *_notesView;
    NSString *_curSongName;
    unsigned long long _importState;
    NSTimer *_refeshTimer;
    ProcessView *_processBar;
    UILabel *_processLbl;
}

@property(nonatomic) _Bool bStatedTransSongSucc; // @synthesize bStatedTransSongSucc=_bStatedTransSongSucc;
@property(nonatomic) _Bool bWakeupByOutside; // @synthesize bWakeupByOutside=_bWakeupByOutside;
@property(nonatomic) _Bool bStatedExposureDetailBtn; // @synthesize bStatedExposureDetailBtn=_bStatedExposureDetailBtn;
@property(nonatomic) _Bool bNeedUpdate; // @synthesize bNeedUpdate=_bNeedUpdate;
@property(retain, nonatomic) UILabel *processLbl; // @synthesize processLbl=_processLbl;
@property(retain, nonatomic) ProcessView *processBar; // @synthesize processBar=_processBar;
@property(retain, nonatomic) NSTimer *refeshTimer; // @synthesize refeshTimer=_refeshTimer;
@property(nonatomic) unsigned long long importState; // @synthesize importState=_importState;
@property(retain, nonatomic) NSString *curSongName; // @synthesize curSongName=_curSongName;
@property(retain, nonatomic) UIView *notesView; // @synthesize notesView=_notesView;
@property(retain, nonatomic) UILabel *connectedTips; // @synthesize connectedTips=_connectedTips;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *stateLbl; // @synthesize stateLbl=_stateLbl;
@property(retain, nonatomic) UIImageView *succIcon; // @synthesize succIcon=_succIcon;
@property(retain, nonatomic) UIImageView *topoView; // @synthesize topoView=_topoView;
- (void).cxx_destruct;
- (struct CGSize)imageSizeForProcessView:(id)arg1 position:(int)arg2;
- (id)imageNameForProcessView:(id)arg1 position:(int)arg2;
- (void)notifyShowMiniPlayer;
- (void)onNotifyQMImportSongsHttpServerDisconnect;
- (void)hideLoadingView;
- (id)loadingViewText;
- (void)showLoadingView;
- (void)didReceiveMemoryWarning;
- (void)popGestureRecognize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateUI;
- (void)back:(id)arg1;
- (void)dealloc;
- (id)processRatioText;
- (void)createProcessBar;
- (void)updateConnectedTipsWithState:(unsigned long long)arg1;
- (void)createConnectedTips;
- (id)connectionTipsText;
- (id)importingSongTitle;
- (void)stopConnectionByOutside;
- (void)stopConnectionByInside;
- (void)stopConnectionWithMessage:(id)arg1;
- (void)showDetailVC;
- (id)stateInfoText;
- (void)createStopImportButton;
- (void)createNotes;
- (id)noteByIndex:(long long)arg1;
- (id)detailButtonTitle;
- (void)createDetailButton;
- (void)createStatusLabel;
- (void)createTopoView;
- (id)initFromOutside;
- (void)loadView;
- (int)vcType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
