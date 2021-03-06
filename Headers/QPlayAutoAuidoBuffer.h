//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QPlayAutoAuidoBuffer : NSObject
{
    unsigned int _bufferSize;
    unsigned int _filledBytes;
    _Bool _isEnqueued;
    char *_audioData;
}

- (_Bool)Clear;
- (_Bool)EnqueueBuffer;
- (_Bool)FillData:(id)arg1;
- (unsigned int)getAudioData:(char **)arg1;
- (unsigned int)BufferSize;
- (unsigned int)RemainLength;
- (unsigned int)FilledBytes;
- (_Bool)Reset;
- (void)dealloc;
- (id)initWithBufferSize:(long long)arg1;

@end

