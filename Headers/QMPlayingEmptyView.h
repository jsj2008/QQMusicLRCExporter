//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BETouchView;

@interface QMPlayingEmptyView : UIView
{
    BETouchView *_noplayTouchView;
}

@property(retain, nonatomic) BETouchView *noplayTouchView; // @synthesize noplayTouchView=_noplayTouchView;
- (void).cxx_destruct;
- (void)onColorStyleChanged;
- (void)touchToReturn;
- (void)createNoPlayingView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
