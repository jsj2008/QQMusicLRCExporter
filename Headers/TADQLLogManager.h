//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TADQLLogManager : NSObject
{
    NSMutableDictionary *_mediaLogDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mediaLogDic; // @synthesize mediaLogDic=_mediaLogDic;
- (void).cxx_destruct;
- (void)clearMediaLogForRequestID:(id)arg1;
- (id)mediaLogForRequestID:(id)arg1;

@end

