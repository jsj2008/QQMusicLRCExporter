//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "BBAssetsTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ALAssetsGroup, BBAssetPikerState, NSMutableArray, NSString, UITableView;

@interface BBAssetTableViewController : SkinViewController <BBAssetsTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_fetchedAssetsArray;
    long long _assetsPerRow;
    BBAssetPikerState *_assetPickerState;
    ALAssetsGroup *_assetsGroup;
    UITableView *_tblView;
}

@property(retain, nonatomic) UITableView *tblView; // @synthesize tblView=_tblView;
@property(nonatomic) __weak ALAssetsGroup *assetsGroup; // @synthesize assetsGroup=_assetsGroup;
@property(nonatomic) __weak BBAssetPikerState *assetPickerState; // @synthesize assetPickerState=_assetPickerState;
@property(retain, nonatomic) NSMutableArray *fetchedAssetsArray; // @synthesize fetchedAssetsArray=_fetchedAssetsArray;
- (void).cxx_destruct;
- (void)assetsTableViewCell:(id)arg1 didSelectAsset:(_Bool)arg2 atColumn:(unsigned long long)arg3;
@property(readonly, nonatomic) long long assetsPerRow; // @synthesize assetsPerRow=_assetsPerRow;
- (void)fetchAssets;
- (void)doneBtnPressed:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (long long)getNumberOfRows;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
