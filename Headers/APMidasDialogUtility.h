//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APMidasDialogUtility : NSObject
{
}

+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 confirmBtnTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showAlert:(id)arg1 msg:(id)arg2 cancelBtnTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)showAlertMsgAndExit:(id)arg1 innerCode:(id)arg2;
+ (void)showAlertView:(id)arg1 detail:(id)arg2 delegate:(id)arg3;
+ (void)showAlertView:(id)arg1 detail:(id)arg2;
+ (void)showAlertController:(id)arg1 detail:(id)arg2;

@end

