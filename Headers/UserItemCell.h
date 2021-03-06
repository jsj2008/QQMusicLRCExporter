//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComRootCell.h"

#import "ImageManagerDelegate-Protocol.h"

@class NSString, ProfileHeadIcon, UIImageView;

@interface UserItemCell : ComRootCell <ImageManagerDelegate>
{
    _Bool _hasMask;
    ProfileHeadIcon *_headIcon;
    UIImageView *_greenIcon;
}

+ (id)cellClickShowControlerByCreator:(id)arg1;
+ (id)cellClickShowControler:(id)arg1;
@property(nonatomic) _Bool hasMask; // @synthesize hasMask=_hasMask;
@property(retain, nonatomic) UIImageView *greenIcon; // @synthesize greenIcon=_greenIcon;
@property(retain, nonatomic) ProfileHeadIcon *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (int)qmCellType;
- (void)setImageByInfo:(id)arg1 placeholderImage:(id)arg2;
- (void)setVip:(_Bool)arg1;
- (void)changeCellStyle:(int)arg1;
- (id)bottomLine;
- (id)topLine;
- (void)addGreenIcon;
- (void)addHeadIcon;
- (void)addBottomLine;
- (void)addTopLine;
- (void)adjustLabels;
- (void)initStyles;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

