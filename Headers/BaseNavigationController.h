//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HookNavigationController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface BaseNavigationController : HookNavigationController <UIGestureRecognizerDelegate>
{
    _Bool _canDragBack;
}

@property(nonatomic) _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)screenEdgePanGestureRecognizer;
- (id)initWithRootViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
