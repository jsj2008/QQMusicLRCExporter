//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface QLPlayCountReportCacheItem : NSObject <NSCoding>
{
    _Bool _isDlnaPlayed;
    short _networkAvailable;
    short _networkType;
    long long _reportType;
    long long _adPlayCountReported;
    long long _playStep;
    long long _adPlayStep;
    long long _playStatus;
    long long _triggerType;
    long long _geturlResult;
    long long _adRequestState;
    long long _adDuration;
    long long _adPlayDuration;
    long long _duration;
    long long _playDuration;
    long long _programType;
    NSString *_videoID;
    NSString *_coverID;
}

@property _Bool isDlnaPlayed; // @synthesize isDlnaPlayed=_isDlnaPlayed;
@property short networkType; // @synthesize networkType=_networkType;
@property short networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(copy) NSString *coverID; // @synthesize coverID=_coverID;
@property(copy) NSString *videoID; // @synthesize videoID=_videoID;
@property long long programType; // @synthesize programType=_programType;
@property long long playDuration; // @synthesize playDuration=_playDuration;
@property long long duration; // @synthesize duration=_duration;
@property long long adPlayDuration; // @synthesize adPlayDuration=_adPlayDuration;
@property long long adDuration; // @synthesize adDuration=_adDuration;
@property long long adRequestState; // @synthesize adRequestState=_adRequestState;
@property long long geturlResult; // @synthesize geturlResult=_geturlResult;
@property long long triggerType; // @synthesize triggerType=_triggerType;
@property long long playStatus; // @synthesize playStatus=_playStatus;
@property long long adPlayStep; // @synthesize adPlayStep=_adPlayStep;
@property long long playStep; // @synthesize playStep=_playStep;
@property long long adPlayCountReported; // @synthesize adPlayCountReported=_adPlayCountReported;
@property long long reportType; // @synthesize reportType=_reportType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

