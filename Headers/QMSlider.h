//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@protocol QMSliderDelegate;

@interface QMSlider : UISlider
{
    id <QMSliderDelegate> _delegate;
    struct CGPoint _touchPt;
}

@property(nonatomic) struct CGPoint touchPt; // @synthesize touchPt=_touchPt;
@property(nonatomic) __weak id <QMSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (double)touchZoneHalfWidth;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

