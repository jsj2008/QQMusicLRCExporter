//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSMutableDictionary;

@interface QQMusicApplication : UIApplication
{
    NSMutableDictionary *_remoteControlTimestamps;
}

- (void).cxx_destruct;
- (_Bool)validRemoteControlEvent:(long long)arg1;
- (void)sendEvent:(id)arg1;
- (void)_asyncHandlePlayEvent:(id)arg1;

@end

