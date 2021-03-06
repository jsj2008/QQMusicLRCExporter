//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "RecognizingAnimateView-Protocol.h"

@class NSString, NSTimer, QMLabel, RecognizingAnimateView;
@protocol RecognizingVC;

@interface RecognizingVC : SkinViewController <RecognizingAnimateView>
{
    _Bool _recognizing;
    id <RecognizingVC> _delegate;
    QMLabel *_firstLabel;
    QMLabel *_secondLabel;
    QMLabel *_timerLabel;
    NSTimer *_recognizingTickClock;
    RecognizingAnimateView *_recognizingAnimateView;
    double _startTime;
}

@property double startTime; // @synthesize startTime=_startTime;
@property _Bool recognizing; // @synthesize recognizing=_recognizing;
@property(retain) RecognizingAnimateView *recognizingAnimateView; // @synthesize recognizingAnimateView=_recognizingAnimateView;
@property(retain) NSTimer *recognizingTickClock; // @synthesize recognizingTickClock=_recognizingTickClock;
@property(retain) QMLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain) QMLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain) QMLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property __weak id <RecognizingVC> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateVolumn:(long long)arg1;
- (void)stopRecognize:(_Bool)arg1;
- (void)startRecognize;
- (void)recognizingAnimateView:(id)arg1 requestSwitchToRecognize:(_Bool)arg2;
- (void)updateTimeLabel;
- (void)cancelTimer;
- (void)dealloc;
- (double)topOfAnimateView;
- (double)topOfFirstLabel;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

