//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol DLNAControllerDelegate, OS_dispatch_queue;

@interface DLNAController : NSObject
{
    _Bool bRedirected;
    _Bool bSearching;
    NSObject<OS_dispatch_queue> *myQueue;
    NSObject<OS_dispatch_queue> *myQueueForPositionInfo;
    _Bool _dlnaDisable;
    id <DLNAControllerDelegate> delegate;
    double _trackDuration;
    double _curPlayTime;
    unsigned long long _fileSize;
    NSString *_curTitle;
}

+ (_Bool)dlnaCtlExsist;
+ (id)sharedDLNAController;
@property(retain) NSString *curTitle; // @synthesize curTitle=_curTitle;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property _Bool dlnaDisable; // @synthesize dlnaDisable=_dlnaDisable;
@property id <DLNAControllerDelegate> delegate; // @synthesize delegate;
- (_Bool)stop;
- (_Bool)seek:(double)arg1;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)isPlaying;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)playOnThreadWithInfo:(id)arg1;
- (void)beginPlayDLNAWithUrl:(id)arg1;
- (void)playURL:(id)arg1 atRenderIndex:(long long)arg2 title:(id)arg3;
- (void)playURL:(id)arg1;
- (void)setRenderAtIndex:(long long)arg1;
- (void)searchUpdateTimer:(id)arg1;
- (void)searchReaders:(_Bool)arg1;
- (_Bool)needSearchRenders;
- (void)clearRenders;
- (void)resetCtlWithNetworkChaged;
@property(readonly) double trackDuration; // @synthesize trackDuration=_trackDuration;
@property(readonly) double curPlayTime; // @synthesize curPlayTime=_curPlayTime;
@property(readonly) NSString *curRenderName;
- (id)dispatchQueue;
- (void)didFindRendersMain:(id)arg1;
- (void)mainPlayStop:(id)arg1;
- (void)loseConnectionMain:(id)arg1;
- (void)mainPlayFailed:(id)arg1;
- (void)mainPlayDown:(id)arg1;
- (id)init;
- (void)dealloc;

@end

