//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelV4Cell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIPageControl, UIScrollView;

@interface ChannelV4CategoryThemeTypeCell : ChannelV4Cell <UIScrollViewDelegate>
{
    NSMutableArray *_themeViews;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
}

+ (double)cellHeightWithRowData:(id)arg1;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *themeViews; // @synthesize themeViews=_themeViews;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)makeGroupsForCategoryItems:(id)arg1;
- (void)updateUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
