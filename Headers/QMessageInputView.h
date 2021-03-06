//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;

@interface QMessageInputView : UIView <UITextViewDelegate>
{
    _Bool _enableProductionButton;
    _Bool _hasBubbleBtn;
    _Bool _bDisplayBubbleList;
    UITextView *_textView;
    UIImageView *_inputBarBgView;
    id _delegate;
    UIButton *_sendButton;
    UIButton *_bubbleSelectButton;
    UILabel *_placeHolderLabel;
    NSString *_placeHolderText;
    long long _limitCount;
    double _originWidth;
    double _previousWidth;
    UIImageView *_textViewBg;
    UIButton *_productionButton;
}

+ (double)maxHeight;
+ (double)maxLines;
+ (double)textViewLineHeight;
@property(retain, nonatomic) UIButton *productionButton; // @synthesize productionButton=_productionButton;
@property(retain, nonatomic) UIImageView *textViewBg; // @synthesize textViewBg=_textViewBg;
@property(nonatomic) double previousWidth; // @synthesize previousWidth=_previousWidth;
@property(nonatomic) double originWidth; // @synthesize originWidth=_originWidth;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(retain, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(nonatomic) _Bool bDisplayBubbleList; // @synthesize bDisplayBubbleList=_bDisplayBubbleList;
@property(nonatomic) _Bool hasBubbleBtn; // @synthesize hasBubbleBtn=_hasBubbleBtn;
@property(retain, nonatomic) UIButton *bubbleSelectButton; // @synthesize bubbleSelectButton=_bubbleSelectButton;
@property(nonatomic) _Bool enableProductionButton; // @synthesize enableProductionButton=_enableProductionButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *inputBarBgView; // @synthesize inputBarBgView=_inputBarBgView;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)stopBubbleButtonGuideAnimation;
- (void)startBubbleButtonGuideAnimation;
- (void)clickedBubbleSelectButton:(id)arg1;
- (void)updateBubbleSelectBtn;
- (void)sendMessage:(id)arg1;
- (void)setupSendButton;
- (void)setupTextViewWithFrame:(struct CGRect)arg1;
- (void)setupBubbleSelectButton:(struct CGRect)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 hasBubbleBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

