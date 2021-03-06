//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMTableViewProtocol-Protocol.h"
#import "TopicChannelCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class ChannelItemKey, NSMutableDictionary, NSString, TopicChannelListItem, UIViewController;

@interface TopicChannelViewController : SkinViewController <UITableViewDataSource, TopicChannelCellDelegate, QMTableViewProtocol>
{
    _Bool _loadingMore;
    NSString *_jumpUrl;
    TopicChannelListItem *_topicChannelListItem;
    NSMutableDictionary *_cellHeights;
    ChannelItemKey *channelItemKey;
    UIViewController *_specifiedFromVC;
}

@property(retain, nonatomic) UIViewController *specifiedFromVC; // @synthesize specifiedFromVC=_specifiedFromVC;
@property(retain, nonatomic) ChannelItemKey *channelItemKey; // @synthesize channelItemKey;
@property(retain, nonatomic) NSMutableDictionary *cellHeights; // @synthesize cellHeights=_cellHeights;
@property(retain, nonatomic) TopicChannelListItem *topicChannelListItem; // @synthesize topicChannelListItem=_topicChannelListItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)TopicChannelCellPlayBtnTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_releaseUnvisibleImages;
- (void)_listDataDidUpdate:(id)arg1;
- (void)_showTableView:(_Bool)arg1;
- (int)vcType;
- (void)reFresh;
- (void)viewDidPop;
- (void)viewWillPop;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

