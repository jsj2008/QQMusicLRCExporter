//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class IndicatorScrollView;

@protocol IndicatorScrollViewDelegate <UIScrollViewDelegate>
- (long long)numberOfPageInScrollView:(IndicatorScrollView *)arg1;

@optional
- (void)pageScrollView:(IndicatorScrollView *)arg1 didTapPageAtIndex:(long long)arg2;
- (struct CGSize)sizeCellForScrollView:(IndicatorScrollView *)arg1;
@end

