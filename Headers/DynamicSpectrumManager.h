//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MusicBand, NSArray, NSTimer;
@protocol DynamicSpectrumManagerDelegate, OS_dispatch_queue;

@interface DynamicSpectrumManager : NSObject
{
    _Bool _isStart;
    _Bool _isPause;
    id <DynamicSpectrumManagerDelegate> _delegate;
    MusicBand *_musicBand;
    unsigned long long _channel;
    unsigned long long _sampleRate;
    unsigned long long _bitDeepth;
    NSArray *_packets;
    long long _packetIndex;
    NSObject<OS_dispatch_queue> *_dsQueue;
    NSTimer *_updateTimer;
    double _timerInterval;
}

+ (id)sharedInstanceManager;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dsQueue; // @synthesize dsQueue=_dsQueue;
@property(nonatomic) long long packetIndex; // @synthesize packetIndex=_packetIndex;
@property(retain, nonatomic) NSArray *packets; // @synthesize packets=_packets;
@property(nonatomic) unsigned long long bitDeepth; // @synthesize bitDeepth=_bitDeepth;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned long long channel; // @synthesize channel=_channel;
@property(retain, nonatomic) MusicBand *musicBand; // @synthesize musicBand=_musicBand;
@property(nonatomic) __weak id <DynamicSpectrumManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)start;
- (void)setPlayPacketData:(const void *)arg1 withDataSize:(unsigned long long)arg2;
- (void)setAudioOutputDesc:(id)arg1;
- (id)init;
- (id)Convert24To16:(id)arg1;

@end
