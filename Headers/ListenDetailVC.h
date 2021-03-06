//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "OHAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface ListenDetailVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, OHAttributedLabelDelegate>
{
    UITableView *detailsTable;
    NSArray *data;
    NSArray *_wifiData;
    id callback;
    SEL changeIndex;
    _Bool finishMode;
}

@property(nonatomic) _Bool finishMode; // @synthesize finishMode;
@property(nonatomic) SEL changeIndex; // @synthesize changeIndex;
@property(nonatomic) __weak id callback; // @synthesize callback;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)loginFail;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loginSucess:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleCellIcon:(id)arg1 listenRate:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

