//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HVMPRightDefaultCell.h"

@interface HVMPRightVarietyEpisodeCell : HVMPRightDefaultCell
{
    _Bool _hideTopLine;
    _Bool _hideBottomLine;
}

+ (double)heightForTitle:(id)arg1 inWidth:(double)arg2;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) _Bool hideTopLine; // @synthesize hideTopLine=_hideTopLine;
- (void)setTitleSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
