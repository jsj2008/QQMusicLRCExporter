//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController_Comment.h"

#import "ListTagDelegate-Protocol.h"
#import "MusicCircleCellDelegate-Protocol.h"
#import "QMTableViewProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MusicCluster, NSArray, NSString;

@interface MusicCircleMyFeedVC : SkinViewController_Comment <QMTableViewProtocol, UITableViewDataSource, UITableViewDelegate, ListTagDelegate, MusicCircleCellDelegate>
{
    _Bool _loadingMore;
    NSArray *_myFeedList;
    MusicCluster *_myCluster;
}

@property(retain, nonatomic) MusicCluster *myCluster; // @synthesize myCluster=_myCluster;
@property(retain, nonatomic) NSArray *myFeedList; // @synthesize myFeedList=_myFeedList;
- (void).cxx_destruct;
- (void)removeFeed:(id)arg1 fromList:(id)arg2;
- (void)doDelThisFeed:(id)arg1 withSender:(id)arg2;
- (void)buildTableFootView;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)onListLoadedMyFeed:(id)arg1;
- (void)showProtocolErrorTips:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)makeList:(id)arg1;
- (void)reFresh;
- (int)vcType;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isGuest;
- (id)emptyViewText;
- (id)emptyViewBgText;
- (void)navigateToMusicCircle;
- (id)showFriendMomentButton;
- (void)showEmptyView;
- (_Bool)isNeedHideContainViewWhenKeyBoardHide;
- (void)loadView;
- (id)initWithUin:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
