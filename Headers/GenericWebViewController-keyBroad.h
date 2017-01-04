//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericWebViewController.h"

#import "CommentInputViewDelegate-Protocol.h"

@class NSString;

@interface GenericWebViewController (keyBroad) <CommentInputViewDelegate>
- (void)sendButtonClick:(id)arg1;
- (void)onTextEditDoneWithContent:(id)arg1 withSorce:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)keyboardWillShowOrHide:(id)arg1;
- (_Bool)checkMessageInputViewText;
- (void)reSetCommentInputViewUI:(id)arg1;
- (void)sendComment:(id)arg1;
- (struct CGSize)getContentSize:(id)arg1;
- (void)updateTextViewFrame:(id)arg1;
- (void)removeObseverForKeyboardNotification;
- (void)registerForKeyboardNotification;
- (void)turnOffMessageInputView;
- (void)addMessageInputView:(id)arg1;
- (void)handleTextView:(id)arg1 MClientResponseObject:(id)arg2;
- (void)handleTextView:(id)arg1 responseCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
