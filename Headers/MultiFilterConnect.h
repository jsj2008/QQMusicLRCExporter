//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@class NSMutableArray;

@interface MultiFilterConnect : MyCamGPUFilter
{
    NSMutableArray *arrays;
}

- (void).cxx_destruct;
- (void)setWidth:(int)arg1 andHeight:(int)arg2;
- (long long)filterCount;
- (void)addFilter:(id)arg1;
- (id)imageByFilteringImage:(id)arg1;
- (struct _Image *)internImageFromCurrentlyProcessedOutput;
- (char *)pixelFromCurrentlyProcessedOutput;
- (void)useNextFrameForImageCapture;
- (id)imageFromCurrentFramebuffer;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)arg1;
- (id)imageFromCurrentlyProcessedOutputWithOrientation:(long long)arg1;
- (void)setOutput:(int)arg1 forInput:(int)arg2 forIndex:(int)arg3;
- (void)setVertex:(const float *)arg1;
- (void)setTextureCoordinate:(const float *)arg1;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)removeAllTargets;
- (void)NewFilter;
- (id)init;

@end

