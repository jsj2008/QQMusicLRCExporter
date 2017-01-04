//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RAPIConfiguration : NSObject
{
    _Bool _logToConsole;
    _Bool _logToCallback;
    _Bool _logToCallbackIncludesTimestamp;
    _Bool _logToFile;
    _Bool _presentLockScreenViewControllerAutomatically;
    _Bool _supportsID5;
    unsigned long long _logLevel;
    long long _previewMode;
}

@property long long previewMode; // @synthesize previewMode=_previewMode;
@property _Bool supportsID5; // @synthesize supportsID5=_supportsID5;
@property unsigned long long logLevel; // @synthesize logLevel=_logLevel;
@property _Bool presentLockScreenViewControllerAutomatically; // @synthesize presentLockScreenViewControllerAutomatically=_presentLockScreenViewControllerAutomatically;
@property _Bool logToFile; // @synthesize logToFile=_logToFile;
@property _Bool logToCallbackIncludesTimestamp; // @synthesize logToCallbackIncludesTimestamp=_logToCallbackIncludesTimestamp;
@property _Bool logToCallback; // @synthesize logToCallback=_logToCallback;
@property _Bool logToConsole; // @synthesize logToConsole=_logToConsole;
- (id)init;

@end
