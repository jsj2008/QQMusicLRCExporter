//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SquareFocusScrollViewDataSource-Protocol.h"
#import "SquareFocusScrollViewDelegate-Protocol.h"
#import "SquareFocusViewDelagete-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIButton, UIScrollView;
@protocol SquareFocusScrollViewDataSource, SquareFocusScrollViewDelegate;

@interface SquareFocusScrollView : UIView <UIScrollViewDelegate, SquareFocusScrollViewDataSource, SquareFocusScrollViewDelegate, SquareFocusViewDelagete>
{
    long long _currentPage;
    _Bool _currentViewActive;
    _Bool _scrollByTimer;
    _Bool _cycledScroll;
    id <SquareFocusScrollViewDataSource> _dataSource;
    id <SquareFocusScrollViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_bannerArray;
    UIView *_scrollContainerView;
    UIView *_blankView;
    NSTimer *_autoScrollTimer;
    UIButton *_interactedBtn;
}

@property(retain, nonatomic) UIButton *interactedBtn; // @synthesize interactedBtn=_interactedBtn;
@property(retain, nonatomic) NSTimer *autoScrollTimer; // @synthesize autoScrollTimer=_autoScrollTimer;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UIView *scrollContainerView; // @synthesize scrollContainerView=_scrollContainerView;
@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool cycledScroll; // @synthesize cycledScroll=_cycledScroll;
@property(nonatomic) __weak id <SquareFocusScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SquareFocusScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)getFolderChannelItemWithPage:(int)arg1;
- (id)getBannerChannelItemWithPage:(int)arg1;
- (void)doClickPlayingChannel:(id)arg1;
- (void)doClickChannelImageButton:(id)arg1;
- (void)SquareFocusScrollView:(id)arg1 paintView:(id)arg2 atPage:(long long)arg3;
- (long long)numberOfPagesForFocusScrollView:(id)arg1;
- (void)_moveViewsWithOffset:(double)arg1;
- (double)_pageForCurrentScrollOffset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)_numberOfpages;
- (long long)_tagOfViewAtPage:(long long)arg1;
- (struct CGRect)_frameOfViewAtPage:(long long)arg1;
- (_Bool)_isValidPage:(long long)arg1;
- (id)_viewForPage:(long long)arg1;
- (void)_autoScrollFocusView;
- (void)stopAutoScroll;
- (void)setCurrentViewActive:(_Bool)arg1;
- (void)startAutoScroll;
- (void)_singlePressEvent;
- (void)reloadViewAtPage:(long long)arg1;
- (void)reloadPageViewsWithDataArray:(id)arg1;
- (void)reloadViews;
- (id)initWithFrame:(struct CGRect)arg1 withPageControl:(_Bool)arg2 showTopInverseImage:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 withPageControl:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
