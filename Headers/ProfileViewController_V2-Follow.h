//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProfileViewController_V2.h"

#import "QMFollowOrCancelViewDelegate-Protocol.h"

@class NSString;

@interface ProfileViewController_V2 (Follow) <QMFollowOrCancelViewDelegate>
- (void)willBack;
- (void)onFollowOrCancelViewClicked:(id)arg1;
- (id)darenActioKey;
- (void)listenOrCancelListenSuccessCallback:(id)arg1;
- (void)onNotifyCreatorFollowActionDone:(id)arg1;
- (void)finishedTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

