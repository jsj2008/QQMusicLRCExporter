//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AudioTransBase, NSData, QAudioStreamBasicDescription, QAudioStreamPacketDescription;

@protocol AudioTransBaseDelegate <NSObject>
- (void)handleAudioTrans:(AudioTransBase *)arg1 PacketDesctiption:(QAudioStreamPacketDescription *)arg2 PacketData:(NSData *)arg3;
- (void)handleAudioTrans:(AudioTransBase *)arg1 Description:(QAudioStreamBasicDescription *)arg2;
@end
