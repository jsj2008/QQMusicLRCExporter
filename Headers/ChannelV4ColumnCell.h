//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelV4Cell.h"

@class UIButton;

@interface ChannelV4ColumnCell : ChannelV4Cell
{
    UIButton *_topLeftImageButton;
    UIButton *_topRightImageButton;
    UIButton *_BigImageButton;
}

+ (double)cellHeightWithRowData:(id)arg1;
@property(retain, nonatomic) UIButton *BigImageButton; // @synthesize BigImageButton=_BigImageButton;
@property(retain, nonatomic) UIButton *topRightImageButton; // @synthesize topRightImageButton=_topRightImageButton;
@property(retain, nonatomic) UIButton *topLeftImageButton; // @synthesize topLeftImageButton=_topLeftImageButton;
- (void).cxx_destruct;
- (void)showChannelWithItemIndex:(long long)arg1;
- (void)onBigImageButtonClicked;
- (void)onTopRightImageButtonClicked;
- (void)onTopLeftImageButtonClicked;
- (id)imageUrlForItem:(id)arg1;
- (void)setUrlImageForButton:(id)arg1 withItemIndex:(long long)arg2;
- (void)updateUI;
- (id)columnData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
