//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, UIImageView, UITapGestureRecognizer;
@protocol IndicatorScrollViewDataSource, IndicatorScrollViewDelegate;

@interface IndicatorScrollView : UIScrollView
{
    float _leftRightOffset;
    double _padding;
    UIImageView *_backgroundView;
    long long _selectedIndex;
    NSArray *_visibleCell;
    NSMutableSet *_cacheCells;
    NSMutableDictionary *_visibleCellsMap;
    double _pageViewWidth;
    id <IndicatorScrollViewDataSource> _dataSource;
    id <IndicatorScrollViewDelegate> _indicatorDelegate;
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_viewsInPage;
    long long _numberOfCell;
    struct CGSize _cellSize;
}

@property(nonatomic) long long numberOfCell; // @synthesize numberOfCell=_numberOfCell;
@property(retain, nonatomic) NSMutableArray *viewsInPage; // @synthesize viewsInPage=_viewsInPage;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <IndicatorScrollViewDelegate> indicatorDelegate; // @synthesize indicatorDelegate=_indicatorDelegate;
@property(nonatomic) __weak id <IndicatorScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double pageViewWidth; // @synthesize pageViewWidth=_pageViewWidth;
@property(retain, nonatomic) NSMutableDictionary *visibleCellsMap; // @synthesize visibleCellsMap=_visibleCellsMap;
@property(retain, nonatomic) NSMutableSet *cacheCells; // @synthesize cacheCells=_cacheCells;
@property(retain, nonatomic) NSArray *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) float leftRightOffset; // @synthesize leftRightOffset=_leftRightOffset;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)scrollTo:(long long)arg1;
- (id)viewForRowAtIndex:(long long)arg1;
- (void)reloadData;
- (void)initializeValue;
- (id)initWithFrame:(struct CGRect)arg1;

@end
