//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate-Protocol.h"
#import "QMTableViewProtocol-Protocol.h"

@class NSArray, NSString;

@interface FunsViewController : SkinViewController <ImageManagerDelegate, QMTableViewProtocol>
{
    _Bool loadingMore;
    int type;
    unsigned long long visitUin;
    long long fansTotalCount;
    NSArray *FansList;
}

@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore;
@property(retain, nonatomic) NSArray *FansList; // @synthesize FansList;
@property(nonatomic) long long fansTotalCount; // @synthesize fansTotalCount;
@property(nonatomic) unsigned long long visitUin; // @synthesize visitUin;
- (void).cxx_destruct;
- (_Bool)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (_Bool)hasMoreDataInTableView:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)showTable;
- (id)emptyViewBgImage;
- (id)emptyViewBgText2;
- (void)reFresh;
- (void)onNotifyFanListUpdate:(id)arg1;
- (void)viewDidPop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)resetSongTableFrame;
- (void)reLayout:(long long)arg1;
- (void)viewDidLoad;
- (_Bool)isGuest;
- (id)initWithUin:(unsigned long long)arg1 type:(int)arg2 totalFollowsCount:(long long)arg3;
- (int)headerHight;
- (void)loadView;
- (struct CGRect)reFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

