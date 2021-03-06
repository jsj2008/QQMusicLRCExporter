//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "QMChannelInteractiveProtocol-Protocol.h"

@class NSString;
@protocol QMChannelInteractiveProtocol;

@interface ChannelV4Cell : QQMusicCell <QMChannelInteractiveProtocol>
{
    id _cellData;
    id <QMChannelInteractiveProtocol> _delegate;
}

+ (double)cellHeightWithRowData:(id)arg1 cellWidth:(double)arg2;
+ (double)cellHeightWithRowData:(id)arg1;
@property(nonatomic) __weak id <QMChannelInteractiveProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (id)imageWithColor:(id)arg1;
- (void)playChannel:(id)arg1 fromSong:(id)arg2;
- (void)playChannel:(id)arg1;
- (void)showAllRankingPage:(id)arg1;
- (void)showChannel:(id)arg1;
- (void)updateUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

