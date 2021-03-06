//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController_Comment.h"

#import "ListTagDelegate-Protocol.h"
#import "MusicCircleCellDelegate-Protocol.h"
#import "MusicCircleTextCellTableViewCellDelegate-Protocol.h"
#import "MusicFeedDetailImagAndTextCellDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MusicCircleFeed, NSIndexPath, NSString, UITableView;

@interface MusicCircleFeedDetailVC : SkinViewController_Comment <UITableViewDataSource, UITableViewDelegate, ListTagDelegate, MusicCircleCellDelegate, MusicCircleTextCellTableViewCellDelegate, MusicFeedDetailImagAndTextCellDelegate, UIAlertViewDelegate>
{
    _Bool isHasHeaer;
    _Bool _isShowLoadMore;
    _Bool _isShowLodingView;
    int _enableCommentIndex;
    MusicCircleFeed *feedInfo;
    long long _rowCountNumbers;
    NSIndexPath *_selectedIndexPath;
    UITableView *_currentTableView;
}

@property(retain, nonatomic) UITableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool isShowLodingView; // @synthesize isShowLodingView=_isShowLodingView;
@property(nonatomic) _Bool isShowLoadMore; // @synthesize isShowLoadMore=_isShowLoadMore;
@property(nonatomic) long long rowCountNumbers; // @synthesize rowCountNumbers=_rowCountNumbers;
@property(nonatomic) int enableCommentIndex; // @synthesize enableCommentIndex=_enableCommentIndex;
@property(nonatomic) _Bool isHasHeaer; // @synthesize isHasHeaer;
@property(retain, nonatomic) MusicCircleFeed *feedInfo; // @synthesize feedInfo;
- (void).cxx_destruct;
- (void)endSelected;
- (void)reCommentActionStart:(id)arg1 feed:(id)arg2 withSender:(id)arg3;
- (_Bool)isNeedHideContainViewWhenKeyBoardHide;
- (_Bool)isHasZan;
- (void)redoCommentWhenDeleteFaild;
- (void)deleteCommentMessageNoAlert:(id)arg1;
- (void)_handleDeleteCommentMessageAlertView:(id)arg1 buttonIndex:(long long)arg2 sender:(id)arg3;
- (void)deleteCommentMessage:(id)arg1;
- (void)doDelThisFeed:(id)arg1 withSender:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)_setUpLoadMoreFootView:(id)arg1;
- (id)_defaultBgView;
- (id)filterZanArray:(id)arg1;
- (id)findNextShowComment:(id)arg1 fromIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (int)showCommentNum;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onListError:(int)arg1;
- (void)onListMusicCircleFeed:(id)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (id)translateActionInfoToCommentInfo:(id)arg1;
- (double)headerOffsetY;
- (void)reloadData;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)reFresh;
- (void)didReceiveMemoryWarning;
- (int)vcType;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

