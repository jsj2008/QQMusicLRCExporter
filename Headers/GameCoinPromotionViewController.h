//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGameCoinPromotionViewDatasource-Protocol.h"
#import "UIGameCoinPromotionViewDelegate-Protocol.h"

@class NSString, PayGoodsResovle, UIGameCoinPromotionView, UIImage;
@protocol GameCoinPromotionViewControllerDelegate;

@interface GameCoinPromotionViewController : UIViewController <UIGameCoinPromotionViewDelegate, UIGameCoinPromotionViewDatasource>
{
    UIGameCoinPromotionView *_promotionView;
    UIImage *_icon;
    long long _orientation;
    id <GameCoinPromotionViewControllerDelegate> _delegate;
    PayGoodsResovle *_goodsResolve;
}

+ (id)gameCoinPromotionControllerWithOrientation:(long long)arg1 gameCoinIcon:(id)arg2;
@property(retain, nonatomic) PayGoodsResovle *goodsResolve; // @synthesize goodsResolve=_goodsResolve;
@property(nonatomic) id <GameCoinPromotionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)gameProductModelAtIndex:(unsigned long long)arg1;
- (id)gameCoinIcon;
- (id)promotionMessege;
- (id)produceName;
- (unsigned long long)productCount;
- (void)onClose;
- (void)onRequestPay:(unsigned long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)update;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1 gameCoinIcon:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
