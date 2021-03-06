//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMPickerViewDelegate-Protocol.h"
#import "QMTableViewProtocol-Protocol.h"
#import "SingerHeaderViewDelegate-Protocol.h"
#import "UITabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class MusicCluster, NSString, QMTableView;
@protocol SingerMasterVCDelegate;

@interface ParticularSingerCategory : SkinViewController <SingerHeaderViewDelegate, UITabBarDelegate, UITableViewDataSource, QMPickerViewDelegate, QMTableViewProtocol>
{
    QMTableView *folderTableView;
    MusicCluster *thisCluster;
    int folderListTag;
    _Bool loadingMore;
    int _frontSingerNum;
    id <SingerMasterVCDelegate> _delegate;
}

@property(nonatomic) int frontSingerNum; // @synthesize frontSingerNum=_frontSingerNum;
@property(nonatomic) __weak id <SingerMasterVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int folderListTag; // @synthesize folderListTag;
@property(retain, nonatomic) MusicCluster *thisCluster; // @synthesize thisCluster;
@property(retain, nonatomic) QMTableView *folderTableView; // @synthesize folderTableView;
- (void).cxx_destruct;
- (void)onColorStyleChanged;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)moreButtonClickedDelegate;
- (_Bool)isItTimeToShowMore;
- (void)pickerView:(id)arg1 clickedButtonAtIndex:(long long)arg2 withObject:(id)arg3;
- (void)indexBtnTapped:(id)arg1;
- (void)showNoNetView;
- (void)showTableView;
- (void)showLoadingView;
- (int)vcType;
- (void)reFresh;
- (void)viewDidPop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)hasHotSingerHeader;
- (void)pushVCWithAnimated:(int)arg1;
- (void)didClickHeader:(int)arg1;
- (void)didClickCategoryHeader:(id)arg1;
- (id)titleText;
- (int)searchHeight;
- (int)statusBarOffset;
- (struct CGRect)reFrame;
- (_Bool)needReFrame;
- (void)reLayout:(long long)arg1;
- (void)reLayoutTo:(int)arg1;
- (id)createHeaderView;
- (void)createSingerCategoryHeader;
- (void)dealloc;
- (_Bool)useBgImage;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

