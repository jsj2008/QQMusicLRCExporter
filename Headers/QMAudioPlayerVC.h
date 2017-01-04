//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

#import "AudioPlayManagerDelegate-Protocol.h"
#import "BEActionSheetForLandscapeDelegate-Protocol.h"
#import "CPDAdViewDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "LyricChangeDelegate-Protocol.h"
#import "ProcessViewDelegate-Protocol.h"
#import "QMCustomPlayingViewDelegate-Protocol.h"
#import "QMPlayingViewDelegate-Protocol.h"
#import "RadioCreatingDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ADSongItem, CPDAdView, CreatingRadioVC, GetAllBubbleLists, GetbulletComment, ImageWithSongID, MVPreviewInfo, MusicBulletGiftDisplayInfo, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, NewPlayingListNormalVC, NewPlayingListRadioVC, PlayList, QMCustomPlayerView, QMPlayingQPlayTable, QMPlayingView, SongInfo, UIButton, UIControl, UIImage, UILockScreenCoverAlbumView, UIView;

@interface QMAudioPlayerVC : SkinViewController <ImageManagerDelegate, CPDAdViewDelegate, BEActionSheetForLandscapeDelegate, QMCustomPlayingViewDelegate, AudioPlayManagerDelegate, UIAlertViewDelegate, UIScrollViewDelegate, ProcessViewDelegate, LyricChangeDelegate, RadioCreatingDelegate, QMPlayingViewDelegate>
{
    _Bool _isShowedLyric;
    ImageWithSongID *_imageObject;
    double _progress;
    _Bool _canotShowPlayingList;
    int lastPageIndex;
    _Bool _isTopViewController;
    _Bool _isShowFromList;
    _Bool _playNextSongMode;
    _Bool _isPlayFormToday;
    _Bool _isPlayingViewAnimating;
    _Bool _needUpdateAlbumImageOnPlayingViewOpen;
    _Bool _hasDisplayBulletComment;
    _Bool _isSwitchingSongs;
    _Bool _firstRequestBulletComment;
    _Bool _isRequestingServerForBulletComment;
    _Bool _firstRequestBulletGiftDisplayInfo;
    _Bool _isRequestingServerForBulletGiftDisplayInfo;
    _Bool _isSeekNow;
    _Bool _didLoadCommercialAd;
    _Bool _didLoadSingerAd;
    _Bool _bCanRotate;
    _Bool _hasGuessReasonTips;
    _Bool _isShowCPDAdView;
    _Bool _shouldUpdateBulletCommentCount;
    _Bool _isShareSongButtonClick;
    int countToUpdateSliderAndCurPlayTime;
    int intervalToUpdateSliderAndCurPlayTime;
    QMPlayingView *_playingView;
    CreatingRadioVC *_CRVC;
    PlayList *_playList;
    long long _currentImageSpec;
    NewPlayingListNormalVC *_playListNewVC;
    QMPlayingQPlayTable *_qplayTableView;
    UIButton *_showMoreplayOPViewBtn;
    UIButton *_hidePlayingViewBtn;
    UIImage *_currentDisplayAlbumImage;
    UIImage *_lyricImage;
    SongInfo *_curPlaySong;
    NSString *_prePlaySongMid;
    NSMutableDictionary *_nowPlayingInfoDic;
    SongInfo *_lastAddToLoveSong;
    NSMutableArray *_radioSongDeleteList;
    NewPlayingListRadioVC *_radioPlayListNewVC;
    UIImage *_stayUpdateImage;
    UILockScreenCoverAlbumView *_lockScreen;
    NSMutableDictionary *_tempAddCommentDic;
    NSMutableDictionary *_normalBulletDic;
    NSMutableDictionary *_vipBulletDic;
    NSMutableDictionary *_bulletGiftDic;
    NSMutableArray *_bulletGiftTopUserArray;
    NSNumber *_previousOffsetKey;
    NSNumber *_previousGiftDisplayInfoOffsetKey;
    GetbulletComment *_getBulletCommentObj;
    MusicBulletGiftDisplayInfo *_bulletGiftDisplayInfo;
    NSNumber *_previousVipOffsetKey;
    NSNumber *_firstOffsetKey;
    NSNumber *_reStartOffsetKey;
    NSMutableDictionary *_tempVipBulletCommentDic;
    unsigned long long _totalBulletCommentCount;
    unsigned long long _pieceBulletCommentCount;
    GetAllBubbleLists *_getAllBubbleListObj;
    double _angle;
    UIView *_shadeView;
    double _currentProgress;
    double _seekProgress;
    NSTimer *_seekTimer;
    ADSongItem *_curAdSongItem;
    UIView *_currentAlbumView;
    CPDAdView *_currentADView;
    long long _toInterfaceOrientation;
    UIControl *_bigImageView;
    MVPreviewInfo *_mvPreviewInfo;
    long long _offsetOfClickBulletCommentBtn;
    long long _offsetOfClickBulletGiftBtn;
    QMCustomPlayerView *_customPlayerView;
    struct CGRect _pageHeaderViewFrame;
    struct CGRect _headerViewFrame;
    struct CGRect _albumViewFrame;
    struct CGRect _footViewFrame;
    struct CGRect _miniPlayerAlbumViewFrame;
    struct CGRect _cpdViewFrame;
}

@property(retain, nonatomic) QMCustomPlayerView *customPlayerView; // @synthesize customPlayerView=_customPlayerView;
@property(nonatomic) _Bool isShareSongButtonClick; // @synthesize isShareSongButtonClick=_isShareSongButtonClick;
@property(nonatomic) long long offsetOfClickBulletGiftBtn; // @synthesize offsetOfClickBulletGiftBtn=_offsetOfClickBulletGiftBtn;
@property(nonatomic) long long offsetOfClickBulletCommentBtn; // @synthesize offsetOfClickBulletCommentBtn=_offsetOfClickBulletCommentBtn;
@property(nonatomic) _Bool shouldUpdateBulletCommentCount; // @synthesize shouldUpdateBulletCommentCount=_shouldUpdateBulletCommentCount;
@property(retain, nonatomic) MVPreviewInfo *mvPreviewInfo; // @synthesize mvPreviewInfo=_mvPreviewInfo;
@property(nonatomic) _Bool isShowCPDAdView; // @synthesize isShowCPDAdView=_isShowCPDAdView;
@property(nonatomic) _Bool hasGuessReasonTips; // @synthesize hasGuessReasonTips=_hasGuessReasonTips;
@property(retain, nonatomic) UIControl *bigImageView; // @synthesize bigImageView=_bigImageView;
@property(nonatomic) _Bool bCanRotate; // @synthesize bCanRotate=_bCanRotate;
@property(nonatomic) long long toInterfaceOrientation; // @synthesize toInterfaceOrientation=_toInterfaceOrientation;
@property(nonatomic) _Bool didLoadSingerAd; // @synthesize didLoadSingerAd=_didLoadSingerAd;
@property(nonatomic) _Bool didLoadCommercialAd; // @synthesize didLoadCommercialAd=_didLoadCommercialAd;
@property(retain, nonatomic) CPDAdView *currentADView; // @synthesize currentADView=_currentADView;
@property(retain, nonatomic) UIView *currentAlbumView; // @synthesize currentAlbumView=_currentAlbumView;
@property(retain, nonatomic) ADSongItem *curAdSongItem; // @synthesize curAdSongItem=_curAdSongItem;
@property(nonatomic) _Bool isSeekNow; // @synthesize isSeekNow=_isSeekNow;
@property(retain, nonatomic) NSTimer *seekTimer; // @synthesize seekTimer=_seekTimer;
@property(nonatomic) double seekProgress; // @synthesize seekProgress=_seekProgress;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) struct CGRect cpdViewFrame; // @synthesize cpdViewFrame=_cpdViewFrame;
@property(retain, nonatomic) UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect miniPlayerAlbumViewFrame; // @synthesize miniPlayerAlbumViewFrame=_miniPlayerAlbumViewFrame;
@property(nonatomic) struct CGRect footViewFrame; // @synthesize footViewFrame=_footViewFrame;
@property(nonatomic) struct CGRect albumViewFrame; // @synthesize albumViewFrame=_albumViewFrame;
@property(nonatomic) struct CGRect headerViewFrame; // @synthesize headerViewFrame=_headerViewFrame;
@property(nonatomic) struct CGRect pageHeaderViewFrame; // @synthesize pageHeaderViewFrame=_pageHeaderViewFrame;
@property(retain, nonatomic) GetAllBubbleLists *getAllBubbleListObj; // @synthesize getAllBubbleListObj=_getAllBubbleListObj;
@property(nonatomic) unsigned long long pieceBulletCommentCount; // @synthesize pieceBulletCommentCount=_pieceBulletCommentCount;
@property(nonatomic) unsigned long long totalBulletCommentCount; // @synthesize totalBulletCommentCount=_totalBulletCommentCount;
@property(nonatomic) _Bool isRequestingServerForBulletGiftDisplayInfo; // @synthesize isRequestingServerForBulletGiftDisplayInfo=_isRequestingServerForBulletGiftDisplayInfo;
@property(nonatomic) _Bool firstRequestBulletGiftDisplayInfo; // @synthesize firstRequestBulletGiftDisplayInfo=_firstRequestBulletGiftDisplayInfo;
@property(nonatomic) _Bool isRequestingServerForBulletComment; // @synthesize isRequestingServerForBulletComment=_isRequestingServerForBulletComment;
@property(nonatomic) _Bool firstRequestBulletComment; // @synthesize firstRequestBulletComment=_firstRequestBulletComment;
@property(retain, nonatomic) NSMutableDictionary *tempVipBulletCommentDic; // @synthesize tempVipBulletCommentDic=_tempVipBulletCommentDic;
@property(retain, nonatomic) NSNumber *reStartOffsetKey; // @synthesize reStartOffsetKey=_reStartOffsetKey;
@property(retain, nonatomic) NSNumber *firstOffsetKey; // @synthesize firstOffsetKey=_firstOffsetKey;
@property(retain, nonatomic) NSNumber *previousVipOffsetKey; // @synthesize previousVipOffsetKey=_previousVipOffsetKey;
@property(nonatomic) _Bool isSwitchingSongs; // @synthesize isSwitchingSongs=_isSwitchingSongs;
@property(nonatomic) _Bool hasDisplayBulletComment; // @synthesize hasDisplayBulletComment=_hasDisplayBulletComment;
@property(retain, nonatomic) MusicBulletGiftDisplayInfo *bulletGiftDisplayInfo; // @synthesize bulletGiftDisplayInfo=_bulletGiftDisplayInfo;
@property(retain, nonatomic) GetbulletComment *getBulletCommentObj; // @synthesize getBulletCommentObj=_getBulletCommentObj;
@property(retain, nonatomic) NSNumber *previousGiftDisplayInfoOffsetKey; // @synthesize previousGiftDisplayInfoOffsetKey=_previousGiftDisplayInfoOffsetKey;
@property(retain, nonatomic) NSNumber *previousOffsetKey; // @synthesize previousOffsetKey=_previousOffsetKey;
@property(retain, nonatomic) NSMutableArray *bulletGiftTopUserArray; // @synthesize bulletGiftTopUserArray=_bulletGiftTopUserArray;
@property(retain, nonatomic) NSMutableDictionary *bulletGiftDic; // @synthesize bulletGiftDic=_bulletGiftDic;
@property(retain, nonatomic) NSMutableDictionary *vipBulletDic; // @synthesize vipBulletDic=_vipBulletDic;
@property(retain, nonatomic) NSMutableDictionary *normalBulletDic; // @synthesize normalBulletDic=_normalBulletDic;
@property(retain, nonatomic) NSMutableDictionary *tempAddCommentDic; // @synthesize tempAddCommentDic=_tempAddCommentDic;
@property(retain, nonatomic) UILockScreenCoverAlbumView *lockScreen; // @synthesize lockScreen=_lockScreen;
@property(nonatomic) _Bool needUpdateAlbumImageOnPlayingViewOpen; // @synthesize needUpdateAlbumImageOnPlayingViewOpen=_needUpdateAlbumImageOnPlayingViewOpen;
@property(retain, nonatomic) UIImage *stayUpdateImage; // @synthesize stayUpdateImage=_stayUpdateImage;
@property(nonatomic) _Bool isPlayingViewAnimating; // @synthesize isPlayingViewAnimating=_isPlayingViewAnimating;
@property(retain, nonatomic) NewPlayingListRadioVC *radioPlayListNewVC; // @synthesize radioPlayListNewVC=_radioPlayListNewVC;
@property(retain, nonatomic) NSMutableArray *radioSongDeleteList; // @synthesize radioSongDeleteList=_radioSongDeleteList;
@property(retain, nonatomic) SongInfo *lastAddToLoveSong; // @synthesize lastAddToLoveSong=_lastAddToLoveSong;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingInfoDic; // @synthesize nowPlayingInfoDic=_nowPlayingInfoDic;
@property(retain, nonatomic) NSString *prePlaySongMid; // @synthesize prePlaySongMid=_prePlaySongMid;
@property(retain, nonatomic) SongInfo *curPlaySong; // @synthesize curPlaySong=_curPlaySong;
@property(retain, nonatomic) UIImage *lyricImage; // @synthesize lyricImage=_lyricImage;
@property(retain, nonatomic) UIImage *currentDisplayAlbumImage; // @synthesize currentDisplayAlbumImage=_currentDisplayAlbumImage;
@property(retain, nonatomic) UIButton *hidePlayingViewBtn; // @synthesize hidePlayingViewBtn=_hidePlayingViewBtn;
@property(retain, nonatomic) UIButton *showMoreplayOPViewBtn; // @synthesize showMoreplayOPViewBtn=_showMoreplayOPViewBtn;
@property(retain, nonatomic) QMPlayingQPlayTable *qplayTableView; // @synthesize qplayTableView=_qplayTableView;
@property(nonatomic) _Bool isPlayFormToday; // @synthesize isPlayFormToday=_isPlayFormToday;
@property(retain, nonatomic) NewPlayingListNormalVC *playListNewVC; // @synthesize playListNewVC=_playListNewVC;
@property(nonatomic) long long currentImageSpec; // @synthesize currentImageSpec=_currentImageSpec;
@property(nonatomic) _Bool playNextSongMode; // @synthesize playNextSongMode=_playNextSongMode;
@property(nonatomic) _Bool isShowFromList; // @synthesize isShowFromList=_isShowFromList;
@property(nonatomic) _Bool isTopViewController; // @synthesize isTopViewController=_isTopViewController;
@property(retain, nonatomic) PlayList *playList; // @synthesize playList=_playList;
@property(retain, nonatomic) CreatingRadioVC *CRVC; // @synthesize CRVC=_CRVC;
@property(retain, nonatomic) QMPlayingView *playingView; // @synthesize playingView=_playingView;
@property(nonatomic) int intervalToUpdateSliderAndCurPlayTime; // @synthesize intervalToUpdateSliderAndCurPlayTime;
@property(nonatomic) int countToUpdateSliderAndCurPlayTime; // @synthesize countToUpdateSliderAndCurPlayTime;
- (void).cxx_destruct;
- (void)hidePresentedVC;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)reLayoutTo:(int)arg1;
- (void)reLayout:(long long)arg1 appWindMode:(int)arg2;
- (void)reLayout:(long long)arg1;
- (void)showAlertViewWhenNoWifi;
- (_Bool)loveBtnClicked;
- (_Bool)shareActionSheetBtnClicked;
- (_Bool)playerActionSheetBtnClicked;
- (_Bool)backBtnClicked;
- (_Bool)playNextBtnLongPressed;
- (_Bool)playPreBtnLongPressed;
- (_Bool)playNextBtnClicked;
- (_Bool)playPreBtnClicked;
- (_Bool)playOrPauseBtnClicked;
- (void)playingActionSheetToExpose;
- (void)onNotifyUserLanguageChanged:(id)arg1;
- (void)onNotifyAddBulletGift:(id)arg1;
- (void)onNotifyGetBulletGiftList:(id)arg1;
- (void)onNotifyVipPurchaseSuccess:(id)arg1;
- (void)onNotifyGetAllBubbleList:(id)arg1;
- (void)onNotifyFavorBulletComment:(id)arg1;
- (void)onNotifyAddBulletComment:(id)arg1;
- (void)onNotifyGetBulletCommentTotalCount:(id)arg1;
- (void)prepareVipBulletCommmentDicAndSendFirstOneWithStartKey:(id)arg1;
- (void)updateBulletGiftTopUserRankInfo;
- (void)updateBulletGiftRankInfo:(id)arg1;
- (void)onNotifyGetBulletGiftDisplayInfo:(id)arg1;
- (void)onNotifyGetBulletCommentList:(id)arg1;
- (void)didFinishReturnMiniPlayerAnimationForRankUserList;
- (void)didSelectGiftShowOffRankUserList;
- (void)jumpToBuyMoreStar:(id)arg1;
- (void)resortGiftShowOffViewWithRankUser:(id)arg1;
- (void)refreshGiftList;
- (void)refreshBubbleList;
- (void)showFluencyModeAlertViewForSlowDevice;
- (void)showLocalAlertViewWithConfig:(id)arg1;
- (void)doChinaUnicomAction:(id)arg1;
- (void)showAlertViewIntroWithBubbleInfo:(id)arg1;
- (void)showAlertViewWithBubbleInfoExpried;
- (void)showAlertViewWithBubbleInfo:(id)arg1;
- (void)clearBulletCommentInfoWhenSwtichingSongs;
- (void)favorTheComment:(id)arg1 passback:(id)arg2 andCommentType:(int)arg3;
- (void)addBulletGift:(long long)arg1 Quantity:(unsigned long long)arg2 withPassback:(id)arg3;
- (void)addBulletComment:(id)arg1 BubbleId:(unsigned long long)arg2 withPassback:(id)arg3;
- (void)updateBulletCommentCount;
- (void)getBulletCommentListWithStartOffset:(long long)arg1;
- (void)getBulletGiftDisplayInfoWithStartOffset:(long long)arg1;
- (void)willShowOrHideBulletGiftSelectView:(_Bool)arg1;
- (void)succeedToFavorCommentWihtLoginOK:(id)arg1;
- (unsigned long long)currentSongBulletCommentCount;
- (void)succeedToSendGiftWihtLoginOK;
- (void)succeedToSendCommentWihtLoginOK;
- (void)didSeekedToNewTime:(double)arg1;
- (void)checkIfAbleFavorComment:(id)arg1;
- (void)checkIfAbleSendingGift;
- (void)checkIfAbleSendingComment;
- (void)showorHideBulletComment:(_Bool)arg1;
- (void)cpdAdViewClicked:(id)arg1 adItem:(id)arg2;
- (void)hideCPDAdViewAnimated:(id)arg1;
- (void)showCPDAdView:(id)arg1;
- (void)cancelPreviousShowCPDAdView;
- (void)resetAlbumImage;
- (void)showMVPreview:(id)arg1 startTime:(unsigned long long)arg2 duration:(unsigned long long)arg3;
- (void)removeAD;
- (id)createCPDViewForMVPreview:(id)arg1;
- (id)createCPDViewForAd:(id)arg1 image:(id)arg2;
- (void)showCPDView:(id)arg1 startTime:(unsigned long long)arg2 duration:(unsigned long long)arg3;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)showMVPreviewWithInfo:(id)arg1;
- (void)loadCPDAd;
- (void)openLandscapeModel;
- (void)recoverStatusBar;
- (void)hideViewForLandscapeModel;
- (void)updateAlbumMode;
- (_Bool)canRotate;
- (void)forceToPortraitModel;
- (void)forceToLandscapeModel;
- (void)updateProgressInfo;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)hideNonStoppedBannerTips;
- (void)showNonStoppedBannerTips:(id)arg1 WithIcon:(long long)arg2;
- (void)resetPlaybackRateIfChanged;
- (void)setPlayingNextSongQueue:(_Bool)arg1;
- (void)songQueryBackToPlayingVC:(id)arg1;
- (_Bool)canGentureToPopView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)resetNavbar;
- (void)onRadioListButtonClicked:(id)arg1;
- (void)radioListButtonClose;
- (void)updateRadioPlayingView:(_Bool)arg1;
- (_Bool)canShowChorusLabelTip;
- (id)getCurPlayingRadioItem;
- (void)deleteSongFromPlaylist;
- (void)commonRadioLoadSuccess;
- (void)radioCreatedFailed;
- (void)radioCreatedSuccess;
- (void)createSingleRadio;
- (void)onColorStyleChanged;
- (id)trimAlbumImage:(id)arg1;
- (void)handleTrashCanAction;
- (void)systemVolumeChanged:(id)arg1;
- (struct CGSize)imageSizeForProcessView:(id)arg1 position:(int)arg2;
- (id)imageNameForProcessView:(id)arg1 position:(int)arg2;
- (_Bool)isLyricVisiable;
- (void)setPlaying:(_Bool)arg1;
- (void)changeHeaderViewIfPersonalRadio:(_Bool)arg1;
- (void)showTranslateLyricAlertView;
- (void)showShareLyricAlert;
- (void)addLyricStat;
- (void)fourceToGetLyric;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onNotifyDeletedSongFrom201:(id)arg1;
- (void)noNotifyLoginSuccess:(id)arg1;
- (void)onNotifyLogout:(id)arg1;
- (void)onNotifyPlayModeChanged:(id)arg1;
- (void)onNotifySongsChangedLoveState:(id)arg1;
- (id)getAllVCType;
- (int)vcType;
- (void)loginOKCall;
- (void)setIsShowedLyric:(_Bool)arg1;
- (void)updateIsMyFavorite:(id)arg1;
- (void)updateStopPlay;
- (void)hideWaitNetInfo;
- (void)showRadioSongFetchLoadingTips;
- (void)updateWaitNetInfo;
- (void)updatePlayStateChange:(unsigned long long)arg1 isLocalFile:(_Bool)arg2;
- (void)fadeOutArtWorkAfterDelay;
- (void)deleteLoveSong;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delayCheckAlertView;
- (void)onFetchSingleRadioDataFailed:(id)arg1;
- (void)onNotifyNetStateChange:(id)arg1;
- (void)updateDownLoadBtn;
- (void)updateButtonStates;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToLocol:(id)arg1;
- (void)onSmallImageClicked:(id)arg1;
- (void)onTouchUpInsideSmallImage:(id)arg1;
- (void)updateAlbumImageViewWithAnimation:(id)arg1;
- (void)reCoverAfterAnimationStop;
- (void)reCoverBeforeAnimationStart;
- (void)valuesForFrames;
- (struct CGPoint)getCenterByRect:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showPlayingViewAnimation;
- (void)returnMiniPlayerAnimation:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)updateSecondaryAlbumImageAndBackgroundImage:(id)arg1;
- (void)updateAlbumInfo:(id)arg1;
- (void)hideGuesslikeTips;
- (void)updateGuessLikeReason;
- (void)updatePlayingIndexInLocal;
- (void)onNextTrackCommandAction;
- (void)onPreviousTrackCommandAction;
- (void)onPauseCommandAction;
- (void)onPlayCommandAction;
- (void)updateMusicInfo:(id)arg1 PlayList:(id)arg2 autoPlay:(_Bool)arg3;
- (void)updateWaitingSongInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onLyricChangeWithTextArray:(id)arg1;
- (void)onLyricLongPress:(long long)arg1;
- (void)showSingerNameInMiniBar;
- (void)onLyricDidShowLastLyric:(long long)arg1;
- (void)onLyricMoveToNext:(id)arg1 lineNum:(int)arg2;
- (void)onNotifyLockScreenLightUp:(id)arg1;
- (void)onNotifyLockScreenLyricDisplayChange:(id)arg1;
- (void)cleanBulletGiftDataAndViewElements;
- (void)showBulletGiftDisplayInfoAtTime:(double)arg1 duration:(double)arg2;
- (_Bool)isForbiddenToSendBulletGift;
- (void)showBulletCommentAtTime:(double)arg1 duration:(double)arg2;
- (void)updateTime:(double)arg1 duration:(double)arg2 loading:(double)arg3 buffer:(double)arg4 starting:(double)arg5;
- (void)updateLockScreenProgressInfo:(double)arg1;
- (void)updateCurSongDurationAtLauch:(double)arg1;
- (void)switchOffQPlayModeSinceDeviceLost;
- (void)updateQPlayUI;
- (void)updateAirPlayUI;
- (void)setNowPlaying:(id)arg1;
- (void)updateLyricData:(id)arg1 State:(int)arg2;
- (void)freshHqView;
- (void)refreshRateButton;
- (void)hiddenDefaultImageView;
- (void)updateAlbumRelateInfo:(id)arg1;
- (void)updateBlurForAlbumImage;
- (void)updateAlbumImageView:(id)arg1;
- (void)reloadSkin;
- (void)blurAlbumImageByTentBlur:(id)arg1;
- (void)blurAlbumImageByGauss:(id)arg1;
- (_Bool)writeImage:(id)arg1 toFileAtPath:(id)arg2;
- (id)_getLockScreenArtwork:(int)arg1 forceCreateNewAlbumImage:(_Bool)arg2 forPlayingDic:(id)arg3;
- (id)_createNowPlayingDictionary:(id)arg1 artworkType:(int)arg2 forceCreateNewAlbumImage:(_Bool)arg3;
- (double)_currentPlaybackRate;
- (void)showBannerTipsOrAlertWhenNoWifiAndIsTips:(_Bool)arg1;
- (void)restoreAlbumImage;
- (void)showLyricWithAnimate;
- (_Bool)showContinuousBannerTips;
- (void)showRegSongString:(id)arg1;
- (void)onNotifyCheckFlowPackFinishWhenDownload:(id)arg1;
- (void)playMV;
- (void)showPosterEditView:(long long)arg1;
- (void)showPosterRecommend;
- (_Bool)isHasPosterRecommend;
- (void)actionSheet:(id)arg1 actionSheetButtonClickedAtIndex:(long long)arg2;
- (void)_deleteSongs:(id)arg1 FromFolder:(id)arg2;
- (void)tryPlaySongWhenDeleted:(unsigned long long)arg1;
- (void)deleteSong:(id)arg1;
- (void)_deleteCurrentSong;
- (void)_clearLastSong;
- (void)actionSheet:(id)arg1 sheetButtonDidShowAtIndex:(long long)arg2;
- (void)jumpToShareVC:(id)arg1;
- (void)onNotifySoundEffectUpdated:(id)arg1;
- (void)showActionSheet:(id)arg1;
- (_Bool)_shouldShowDeleteButton;
- (void)actionSheetWillHide:(id)arg1;
- (void)onNotifyClearAllSongs:(id)arg1;
- (void)onNotifySongFileAdded:(id)arg1;
- (void)onNotifySongFileDelete:(id)arg1;
- (void)showKSongAction:(id)arg1;
- (void)addToFavariteFolder:(id)arg1;
- (void)addAnimateToButtons:(double)arg1;
- (void)actionCommentBtnTapped:(id)arg1;
- (void)actionShareCanBtnTapped:(id)arg1;
- (void)backToPortraitModel;
- (void)kSongCanBtnTapped:(id)arg1;
- (void)draggingViewOffsetPoint:(struct CGPoint)arg1;
- (void)showAlbum;
- (void)handleGestureRecognizer:(id)arg1;
- (void)handleTranshCanSingleRadio;
- (void)handleTranshCanGuessYouLikeRadio;
- (void)removeCurrentAndPlayNextRadioSong;
- (void)trashCanBtnTapped:(id)arg1;
- (void)handleTrashCanBtnTapped;
- (void)playNextSong:(id)arg1;
- (void)updateQPlaySong:(id)arg1;
- (void)playPreSong:(id)arg1;
- (_Bool)playOrPauseSong:(id)arg1;
- (void)clearPlayingInfo;
- (void)changePlayMode:(id)arg1;
- (void)changePlayListMode:(id)arg1;
- (void)updatePlayModeChange;
- (void)delayAddSystemVolumeObserver;
- (void)speakerVolumeChanged:(id)arg1;
- (void)addToMyLoveOnline:(id)arg1;
- (void)downLoadSong:(id)arg1;
- (void)showSingerView;
- (void)showQPlayDeviceTableView;
- (void)pushVC:(id)arg1;
- (void)setQPlayButtonSelected:(_Bool)arg1;
- (void)setVolumeSilder:(float)arg1;
- (void)updateByApplicationState:(long long)arg1;
- (void)hidePlayListView;
- (void)playingListClose;
- (void)recoverPlayMode;
- (void)onPlayingListButtonClicked:(id)arg1;
- (void)showPlayingList;
- (void)initPlayingListVC;
- (void)showPlayList:(id)arg1;
- (void)initRadioPlayingListVC;
- (_Bool)isMvPreviewBtnClicked:(struct CGPoint)arg1;
- (void)showOrHideplayOPViewByGesture:(struct CGPoint)arg1;
- (void)showOrHideplayOPView;
- (void)showMorePlayOPView:(id)arg1;
- (_Bool)isShowedPlayOPView;
- (void)changeSkin:(id)arg1;
- (struct CGRect)reFrame;
- (_Bool)hasNavLine;
- (id)captureImage;
- (void)addPlayingView;
- (void)viewDidLoad;
- (void)closeBulletRecommendModel;
- (void)exclusiveAction:(id)arg1;
- (void)HqBtnAction:(id)arg1;
- (void)superSoundBtnAction:(id)arg1;
- (void)loadView;
- (void)setProgressBySeek:(double)arg1;
- (id)getBackImageSelectName;
- (id)getBackImageName;
- (void)navRefresh;
- (long long)statusBarStyle;
- (void)refreshPlayingTitle:(id)arg1;
- (void)navRefreshWithStatusBar:(_Bool)arg1;
- (int)getCurrentSongAssetsType;
- (_Bool)canBecomeFirstResponder;
- (_Bool)_needSetStatusBarWhileDisappar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)longPressBack:(id)arg1;
- (void)back:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
