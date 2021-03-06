//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMBulletGiftQuantitySelectControlDelegate-Protocol.h"
#import "QMBulletGiftSelectViewDelegate-Protocol.h"
#import "QMBulletSendGiftPluginTouchBaseViewDelegate-Protocol.h"

@class NSString, QMBulletGiftQuantitySelectControl, QMBulletGiftSelectView;
@protocol QMBulletSendGiftPluginDelegate;

@interface QMBulletSendGiftPlugin : UIView <QMBulletSendGiftPluginTouchBaseViewDelegate, QMBulletGiftSelectViewDelegate, QMBulletGiftQuantitySelectControlDelegate>
{
    id <QMBulletSendGiftPluginDelegate> _delegate;
    QMBulletGiftSelectView *_bulletGiftSelectView;
    QMBulletGiftQuantitySelectControl *_quantitySelectCtrl;
    NSString *_bulletSongMid;
    unsigned long long _bulletSongId;
}

@property(nonatomic) unsigned long long bulletSongId; // @synthesize bulletSongId=_bulletSongId;
@property(retain, nonatomic) NSString *bulletSongMid; // @synthesize bulletSongMid=_bulletSongMid;
@property(retain, nonatomic) QMBulletGiftQuantitySelectControl *quantitySelectCtrl; // @synthesize quantitySelectCtrl=_quantitySelectCtrl;
@property(retain, nonatomic) QMBulletGiftSelectView *bulletGiftSelectView; // @synthesize bulletGiftSelectView=_bulletGiftSelectView;
@property(nonatomic) __weak id <QMBulletSendGiftPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickSelectControl:(id)arg1 withOptionValue:(long long)arg2;
- (void)canCloseSelectControl;
- (void)didClickSendBulletGift:(long long)arg1 andQuantity:(long long)arg2;
- (void)showQuantitySelectControlAtFrame:(struct CGRect)arg1 withMaxQuantity:(long long)arg2;
- (void)gotoBuyMoreMoneyWithUrl:(id)arg1;
- (void)shouldRefreshGiftList;
- (void)touchBaseViewEnd;
- (void)onNotifyAddBulletGift:(id)arg1;
- (void)onNotifyGetBulletGiftList:(id)arg1;
- (void)showOrHiddenBulletGiftSelectView:(_Bool)arg1;
- (void)getBulletGiftListWithSongMid:(id)arg1 orSongId:(unsigned long long)arg2;
- (void)closePlugin;
- (void)showPluginWithSongMid:(id)arg1 orSongId:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

