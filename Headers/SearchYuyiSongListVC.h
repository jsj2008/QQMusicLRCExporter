//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMTableViewProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class DirectCluster, ListBase, NSString;

@interface SearchYuyiSongListVC : SkinViewController <UITableViewDataSource, QMTableViewProtocol>
{
    _Bool loadingMore;
    int _songsListTag;
    DirectCluster *_thisCluster;
    ListBase *_songList;
}

@property(retain, nonatomic) ListBase *songList; // @synthesize songList=_songList;
@property(nonatomic) int songsListTag; // @synthesize songsListTag=_songsListTag;
@property(retain, nonatomic) DirectCluster *thisCluster; // @synthesize thisCluster=_thisCluster;
- (void).cxx_destruct;
- (struct CGPoint)anchorButtonPosition:(struct CGSize)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(long long)arg2;
- (void)_showSelectDownloadQualityActionSheet:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)downloadAll;
- (void)onTouchUpInsideRandomButton:(id)arg1;
- (void)handleBatchAction:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (int)vcType;
- (id)list;
- (void)back:(id)arg1;
- (void)dealloc;
- (_Bool)showDelBtnInActionSheet:(id)arg1;
- (void)showNothingView;
- (void)showNoNetView;
- (void)showTableView;
- (void)showLoadingView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidPop;
- (id)createRandomPlayButton;
- (id)createOperateView;
- (void)addTableViewHeaderView;
- (void)resetSongTableFrame;
- (void)reLayout:(long long)arg1;
- (void)reFresh;
- (void)viewDidLoad;
- (id)initWithClusterInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

