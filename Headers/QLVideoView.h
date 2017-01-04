//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QLPlayerLayerView;

@interface QLVideoView : UIView
{
    QLPlayerLayerView *playLayerView0;
    QLPlayerLayerView *playLayerView1;
    long long _playerIndex;
}

@property long long playerIndex; // @synthesize playerIndex=_playerIndex;
@property(retain, nonatomic) QLPlayerLayerView *playLayerView1; // @synthesize playLayerView1;
@property(retain, nonatomic) QLPlayerLayerView *playLayerView0; // @synthesize playLayerView0;
- (void).cxx_destruct;
- (void)switchPlayerViewWithPlayer:(long long)arg1 withPlayer:(id)arg2;
- (void)switchPlayer1WithPlayer:(id)arg1;
- (void)switchPlayer0WithPlayer:(id)arg1;
- (void)resetPlayerOfPlayerView;
- (_Bool)changePlayerWithIndex:(long long)arg1 withSysVersionIs43Later:(_Bool)arg2 withPlayer:(id)arg3 withAirplayEffect:(_Bool)arg4;
- (void)changePlayerviewPlayer:(id)arg1;
- (void)changePlayerViewFitStyle:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)layerClass;
- (void)resetPlayerViewSizeStyle;

@end
