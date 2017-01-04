//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField, UITextView;
@protocol InputDelegate;

@interface ComInputVC : SkinViewController <UITextFieldDelegate, UITextViewDelegate>
{
    _Bool _bLimit;
    _Bool _limitToOneLine;
    int _limitNum;
    NSString *_defaultTxt;
    id <InputDelegate> _delegate;
    NSString *_emptyErrorMsg;
    UITextField *_textField;
    UITextView *_textView;
    UIButton *_btnClear;
    UILabel *_labelCounter;
    struct CGSize _size;
}

@property(retain) UILabel *labelCounter; // @synthesize labelCounter=_labelCounter;
@property(retain) UIButton *btnClear; // @synthesize btnClear=_btnClear;
@property(retain) UITextView *textView; // @synthesize textView=_textView;
@property(retain) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) _Bool limitToOneLine; // @synthesize limitToOneLine=_limitToOneLine;
@property(retain, nonatomic) NSString *emptyErrorMsg; // @synthesize emptyErrorMsg=_emptyErrorMsg;
@property(nonatomic) int limitNum; // @synthesize limitNum=_limitNum;
@property(nonatomic) _Bool bLimit; // @synthesize bLimit=_bLimit;
@property(nonatomic) __weak id <InputDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *defaultTxt; // @synthesize defaultTxt=_defaultTxt;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onNotifyTextFieldDidChanged:(id)arg1;
- (void)onTextChanged;
- (void)setInputText:(id)arg1;
- (id)inputText;
- (_Bool)finishEdit;
- (void)_onTouchUpInsideClear:(id)arg1;
- (void)headerFinish:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTitle:(id)arg1 textSize:(struct CGSize)arg2 inputDelegate:(id)arg3 txtLimit:(_Bool)arg4 limitNum:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
