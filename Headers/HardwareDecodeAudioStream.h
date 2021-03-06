//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioStreamBase.h"

@class NSMutableArray, NSMutableData, NSThread;

@interface HardwareDecodeAudioStream : AudioStreamBase
{
    struct OpaqueAudioFileStreamID *audioFileStream;
    struct QMAudioConverterSetting audioConverterSetting;
    struct OpaqueAudioConverter *audioConverter;
    NSThread *convertThread;
    NSMutableArray *outputDataArray;
    _Bool bParseHead;
    struct CMutex inputDataMutex;
    struct CMutex outputDataMutex;
    NSMutableData *writer;
    char *inputData;
    struct AudioStreamPacketDescription *inputDesc;
    NSMutableData *_tempData;
}

@property(retain, nonatomic) NSMutableData *tempData; // @synthesize tempData=_tempData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealWithDataFormat;
- (void)dealWithFormatList:(struct OpaqueAudioFileStreamID *)arg1;
- (void)convertRun;
- (void)adjustOSVersion;
- (int)QMAudioConverterCallback:(struct OpaqueAudioConverter *)arg1 packetCount:(unsigned int *)arg2 data:(struct AudioBufferList *)arg3 desc:(struct AudioStreamPacketDescription **)arg4;
- (int)getRemainDataLength;
- (int)getMaxAudioQueueBufferSize;
- (double)calcAveragePacketSize;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned int)arg2 ioFlags:(unsigned int *)arg3;
- (_Bool)seekAudioStream:(double)arg1 realTime:(double *)arg2 realBytes:(long long *)arg3 ioFlag:(unsigned int *)arg4;
- (_Bool)parseAudioStreamWithData:(id)arg1 Flags:(int)arg2;
- (void)destroy;
- (_Bool)createAudioStream:(unsigned int)arg1;

@end

