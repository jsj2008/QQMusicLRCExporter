//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "FollowTableViewImageManagerDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "QMSearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FollowMoreDataManager, NSString, QMSearchBar, UITableView, UIView;

@interface QQFriendsGroupVC : SkinViewController <QMSearchBarDelegate, FollowTableViewImageManagerDelegate, UITableViewDataSource, UITableViewDelegate, ImageManagerDelegate>
{
    _Bool isSearching;
    long long _groupid;
    FollowMoreDataManager *_dataManager;
    QMSearchBar *_searchBar;
    UITableView *_searchTable;
    UIView *_dimView;
}

@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) UITableView *searchTable; // @synthesize searchTable=_searchTable;
@property(retain, nonatomic) QMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) FollowMoreDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) long long groupid; // @synthesize groupid=_groupid;
- (void).cxx_destruct;
- (void)onNotifyFollowMoreDataUserDataChanged:(id)arg1;
- (void)onNotifyFollowMoreDataQQFriendsGroupDetailDataChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissSearchTableView;
- (void)switchToQQFriensTable;
- (void)cancleKeyboard;
- (void)newSearchTable;
- (void)hideDimView;
- (void)showDimView;
- (_Bool)searchRemarkName:(id)arg1 inQQFriendItem:(id)arg2;
- (_Bool)searchUserName:(id)arg1 inQQFriendItem:(id)arg2;
- (_Bool)searchUin:(id)arg1 inQQFriendItem:(id)arg2;
- (void)beginSearchWithSearchKey:(id)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)searchTextFieldTouchDown:(id)arg1;
- (void)searchCancleButtonClicked:(id)arg1;
- (void)onSearchButtonClicked:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 TableView:(id)arg2 Image:(id)arg3;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)findQQFriendItemWithUin:(unsigned long long)arg1;
- (id)emptyViewBgText;
- (id)emptyViewBgImage;
- (id)emptyViewText;
- (void)recommendToQQFriends;
- (void)syncFollowStatus:(id)arg1;
- (void)queryFollowQQFriendWithUin:(unsigned long long)arg1 isFollow:(_Bool)arg2 AndCellIndex:(long long)arg3;
- (void)queryQQFriendGroupDetailInfo:(long long)arg1;
- (void)newSongTable;
- (int)searchHeight;
- (void)reFresh;
- (int)vcType;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidPop;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

