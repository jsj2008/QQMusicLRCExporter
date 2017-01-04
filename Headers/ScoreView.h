//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, UIImage;

@interface ScoreView : UIView
{
    unsigned long long _imageViewCount;
    _Bool _canScore;
    NSNumber *_score;
    UIImage *_emptyImage;
    UIImage *_halfImage;
    UIImage *_fullImage;
}

@property(nonatomic) _Bool canScore; // @synthesize canScore=_canScore;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) UIImage *halfImage; // @synthesize halfImage=_halfImage;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (void)onSelfTapClicked:(id)arg1;
- (unsigned long long)calculateScore:(double)arg1;
- (void)resetImage;
- (void)loadImageViews;
- (id)initWithFrame:(struct CGRect)arg1 withImageViewCount:(unsigned long long)arg2 canScore:(_Bool)arg3;

@end
