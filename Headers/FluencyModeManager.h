//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FluencyModeManager : NSObject
{
}

+ (id)sharedInstance;
- (void)showEnterFluecyModeAlertView;
- (unsigned long long)autoOpenFluency;
- (unsigned long long)dataPrefetchFluency;
- (unsigned long long)albumRotateFluency;
- (unsigned long long)DTSFluency;
- (unsigned long long)animationFluency;
- (void)setFluency;
- (void)setAutoOpenPlayVCEnable:(_Bool)arg1;
- (_Bool)getAutoOpenPlayVCEnable;
- (void)setDataPrefetchEnable:(_Bool)arg1;
- (_Bool)getDataPrefetchEnable;
- (void)setAlbumCoverAutoRotateEnable:(_Bool)arg1;
- (_Bool)getAlbumCoverAutoRotateEnable;
- (void)setDTSEnable:(_Bool)arg1;
- (_Bool)getDTSEnable;
- (_Bool)showDTSSwitch;
- (void)setAnimationEnable:(_Bool)arg1;
- (_Bool)getAnimationEnable;
- (_Bool)enableFluencyMode;
- (id)init;

@end
