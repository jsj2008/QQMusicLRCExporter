//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEActionSheetStyleiOS7.h"

@class NSArray, SongInfo;
@protocol BEActionSheetAdDelegate;

@interface BEActionSheetStyleAd : BEActionSheetStyleiOS7
{
    NSArray *_adInfoArray;
    SongInfo *_shareSongInfo;
    id <BEActionSheetAdDelegate> _adDelegate;
}

@property(nonatomic) __weak id <BEActionSheetAdDelegate> adDelegate; // @synthesize adDelegate=_adDelegate;
@property(retain, nonatomic) SongInfo *shareSongInfo; // @synthesize shareSongInfo=_shareSongInfo;
@property(retain, nonatomic) NSArray *adInfoArray; // @synthesize adInfoArray=_adInfoArray;
- (void).cxx_destruct;
- (void)adViewPressed:(id)arg1;
- (double)viewWidth;
- (int)getTotalLength;
- (void)onButtonClick:(id)arg1;
- (void)customTitleView;
- (id)buildAdViewAtIndex:(unsigned long long)arg1;
- (void)addContentView;

@end

