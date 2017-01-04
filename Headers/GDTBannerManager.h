//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GDTBannerProtocolCallback-Protocol.h"
#import "GDTBannerViewDataSource-Protocol.h"
#import "GDTBannerViewDelegate-Protocol.h"
#import "GDTClickCallback-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"

@class GDTBannerProtocol, GDTBannerView, NSDate, NSHashTable, NSMutableArray, NSString, SkinViewController;

@interface GDTBannerManager : NSObject <GDTBannerViewDataSource, GDTBannerViewDelegate, GDTBannerProtocolCallback, GDTClickCallback, ProtocolHostDelegate, ImageManagerDelegate>
{
    _Bool leaved;
    _Bool _didRequestBanner;
    _Bool _bannerIsShown;
    int _adtype;
    NSString *_appkey;
    NSString *_posId;
    long long _adCount;
    unsigned long long _type;
    SkinViewController *_hostVC;
    NSMutableArray *_bannerItems;
    NSHashTable *_observers;
    GDTBannerProtocol *_bannerProtocol;
    GDTBannerView *_bannerView;
    NSDate *_leaveTime;
    NSDate *_entranceTime;
}

@property(retain, nonatomic) NSDate *entranceTime; // @synthesize entranceTime=_entranceTime;
@property(retain, nonatomic) NSDate *leaveTime; // @synthesize leaveTime=_leaveTime;
@property(retain, nonatomic) GDTBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) GDTBannerProtocol *bannerProtocol; // @synthesize bannerProtocol=_bannerProtocol;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *bannerItems; // @synthesize bannerItems=_bannerItems;
@property(nonatomic) _Bool bannerIsShown; // @synthesize bannerIsShown=_bannerIsShown;
@property(nonatomic) _Bool didRequestBanner; // @synthesize didRequestBanner=_didRequestBanner;
@property(nonatomic) __weak SkinViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) int adtype; // @synthesize adtype=_adtype;
@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(retain, nonatomic) NSString *posId; // @synthesize posId=_posId;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (void)cleanCachedData;
- (_Bool)bannerDataIsAvailable;
- (void)filterValidBanners;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)loadBannerImages;
- (void)loadGDTBannerFailed:(int)arg1 posId:(id)arg2 appKey:(id)arg3;
- (void)loadGDTBannerSuccessed:(id)arg1 posId:(id)arg2 appKey:(id)arg3;
- (void)userStateChanged;
- (void)_onNotifyColorStyleChanged:(id)arg1;
- (void)notifyObserverHideCurrentBanner;
- (void)notifyObserverShowCurrentBanner;
- (void)reportClickAction:(id)arg1;
- (void)onClickFail:(int)arg1;
- (void)onClickSuccess:(id)arg1 targetUrl:(id)arg2;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)startLoad;
- (_Bool)shouldLoadBannerData;
- (void)showGreenDiamondAlert;
- (void)gdtBannerViewShouldClose:(id)arg1 clickInfo:(id)arg2 item:(id)arg3;
- (void)gdtBannerViewTapped:(id)arg1 clickInfo:(id)arg2 targetUrl:(id)arg3 item:(id)arg4;
- (id)bannersForView:(id)arg1;
- (void)prepareBannerView;
- (_Bool)exposureCurrentShowingItem;
- (_Bool)shouldReloadBannerAfterTimePassBy;
- (void)leaveCurrentPage;
- (void)entranceCurrentPage;
- (void)removeBannerObserver:(id)arg1;
- (void)addBannerObserver:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
