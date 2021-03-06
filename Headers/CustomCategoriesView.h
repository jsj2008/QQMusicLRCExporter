//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ChannelV4Category, NSArray, NSMutableArray, UIImageView;
@protocol CustomCategoriesViewDelegate;

@interface CustomCategoriesView : UIView
{
    _Bool _canMutiSelect;
    ChannelV4Category *_selectedCategory;
    NSMutableArray *_selectedCategories;
    NSArray *_categories;
    double _rowHeight;
    id <CustomCategoriesViewDelegate> _delegate;
    unsigned long long _totalNum;
    unsigned long long _colums;
    unsigned long long _rows;
    UIImageView *_selectedImageView;
}

@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned long long colums; // @synthesize colums=_colums;
@property(nonatomic) unsigned long long totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) _Bool canMutiSelect; // @synthesize canMutiSelect=_canMutiSelect;
@property(nonatomic) __weak id <CustomCategoriesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSMutableArray *selectedCategories; // @synthesize selectedCategories=_selectedCategories;
@property(retain, nonatomic) ChannelV4Category *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
- (void).cxx_destruct;
- (void)refreshSelected;
- (unsigned long long)getIndexFromRow:(unsigned long long)arg1 andColum:(unsigned long long)arg2;
- (id)seperateLine:(struct CGRect)arg1;
- (void)onCategoryBtnClicked:(id)arg1;
- (void)setSelectedIMageFrameWithBtnFrame:(struct CGRect)arg1;
- (void)prepareView;
- (id)initWithFrame:(struct CGRect)arg1 andCategoriesTotalNum:(unsigned long long)arg2 andColums:(unsigned long long)arg3;
- (void)dealloc;

@end

