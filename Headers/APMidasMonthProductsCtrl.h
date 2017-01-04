//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface APMidasMonthProductsCtrl : APMidasBaseViewCtrl <UITextFieldDelegate>
{
    _Bool isCanChange;
    long long maxNum;
    long long minNum;
    UILabel *tipsLabel;
    UILabel *amountLabel;
    UIView *monthViews;
    UITextField *numInputTf;
    UIButton *choosedBtn;
    UIImageView *resIv;
}

@property(retain, nonatomic) UIImageView *resIv; // @synthesize resIv;
@property(retain, nonatomic) UIButton *choosedBtn; // @synthesize choosedBtn;
@property(retain, nonatomic) UITextField *numInputTf; // @synthesize numInputTf;
@property(nonatomic) __weak UIView *monthViews; // @synthesize monthViews;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel;
- (void).cxx_destruct;
- (void)updateAmountLabel:(id)arg1;
- (void)numChange;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (id)getCurrentCount:(id)arg1;
- (void)onSubmit:(id)arg1;
- (void)createInputTextField:(id)arg1;
- (void)choose:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)monthViewsSetting;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
