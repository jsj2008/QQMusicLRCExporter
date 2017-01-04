//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComCollectionCell.h"

@class UIImageView, UILabel;

@interface MyMusicMusicNumCollectionCell : ComCollectionCell
{
    _Bool _hideTitle;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImage;
    UIImageView *_arrow;
    UIImageView *_redPoint;
}

@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)subTitleLabel;
- (void)updateSubTitle:(id)arg1;
- (void)updateRedPoint:(_Bool)arg1;
- (void)updateData:(id)arg1;

@end
