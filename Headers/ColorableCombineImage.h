//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface ColorableCombineImage : NSObject
{
    NSCache *_dicInMemoryImages;
}

+ (void)cleanMemoryCache;
+ (id)getImageWithName:(id)arg1;
+ (id)combineImage:(id)arg1 toImage:(id)arg2;
+ (id)sharedInstance;
@property(retain) NSCache *dicInMemoryImages; // @synthesize dicInMemoryImages=_dicInMemoryImages;
- (void).cxx_destruct;
- (id)combine_anchorButton;
- (id)combine_cell_need_pay;
- (id)combine_voice_input_try_again_hilighted;
- (id)combine_voice_input_try_again;
- (id)combine_voice_input_done_speak_hilighted;
- (id)combine_voice_input_done_speak;
- (id)combine_actionIconDownloaded_h_b;
- (id)combine_actionIconDownloaded_h;
- (id)combine_actionIconDownloaded_b;
- (id)combine_actionIconDownloaded;
- (id)combine_player_btn_downloaded_normal;
- (id)combine_player_btn_downloaded_highlight;
- (id)combine_actionIconDownloadedupdate_h_b;
- (id)combine_actionIconDownloadedupdate_h;
- (id)combine_actionIconDownloadedupdate_b;
- (id)combine_actionIconDownloadedupdate;
- (id)getCombineImage:(id)arg1 withImage:(id)arg2;
- (id)_getImageWithName:(id)arg1;
- (id)init;

@end
