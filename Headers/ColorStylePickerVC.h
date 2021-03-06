//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HookViewController.h"

#import "ColorStyleSliderDelegate-Protocol.h"

@class ColorStyleSlider, NSMutableArray, NSString, UIScrollView, UIView;
@protocol ColorStylePickerDelegate;

@interface ColorStylePickerVC : HookViewController <ColorStyleSliderDelegate>
{
    unsigned long long _preDefineColorount;
    UIScrollView *viewPredefineColor;
    NSMutableArray *subControlsOfPredefineView;
    UIView *viewCustomColor;
    ColorStyleSlider *sliderHue;
    ColorStyleSlider *sliderSaturation;
    id <ColorStylePickerDelegate> _delegate;
}

@property(nonatomic) __weak id <ColorStylePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *subControlsOfPredefineView; // @synthesize subControlsOfPredefineView;
@property(retain, nonatomic) ColorStyleSlider *sliderSaturation; // @synthesize sliderSaturation;
@property(retain, nonatomic) ColorStyleSlider *sliderHue; // @synthesize sliderHue;
@property(retain, nonatomic) UIView *viewCustomColor; // @synthesize viewCustomColor;
@property(retain, nonatomic) UIScrollView *viewPredefineColor; // @synthesize viewPredefineColor;
- (void).cxx_destruct;
- (double)getXOffsetByIndex:(int)arg1;
- (void)setColorStyle:(struct SColorStyle)arg1;
- (void)onTouchUpInsidePreDefineColorStyle:(id)arg1;
- (void)onTouchUpInsideSwitchToCustom:(id)arg1;
- (void)onTouchUpInsideSwitchToPreDefine:(id)arg1;
- (void)onValueChanged:(id)arg1 value:(unsigned long long)arg2;
- (id)createPreDefineButton:(unsigned long long)arg1;
- (id)createSwitchToCustomButton;
- (id)createCustomView;
- (id)createPreDefineView;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 preDefineColorCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

