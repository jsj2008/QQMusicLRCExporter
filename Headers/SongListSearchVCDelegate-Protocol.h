//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SongInfo, UIViewController;

@protocol SongListSearchVCDelegate

@optional
- (void)goOnlineSearchWithString:(NSString *)arg1;
- (void)didSelectSong:(SongInfo *)arg1 VC:(UIViewController *)arg2 assetsType:(int)arg3;
- (void)didheaderCancel:(id)arg1 VC:(UIViewController *)arg2;
@end

