//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer, URLImageView;
@protocol SimilarRecSingerItemViewDelegate;

@interface SimilarRecSingerItemView : UIView
{
    id <SimilarRecSingerItemViewDelegate> _delegate;
    URLImageView *_coverImg;
    UILabel *_mainTitleLbl;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILabel *mainTitleLbl; // @synthesize mainTitleLbl=_mainTitleLbl;
@property(retain, nonatomic) URLImageView *coverImg; // @synthesize coverImg=_coverImg;
@property(nonatomic) __weak id <SimilarRecSingerItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchedItemViewInside:(id)arg1;
- (void)updateWithSingerInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
