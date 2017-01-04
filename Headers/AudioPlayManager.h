//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioSessionDelegate-Protocol.h"
#import "CBCentralManagerDelegate-Protocol.h"
#import "ImageManagerDelegate-Protocol.h"
#import "KSAudioPlayerDelegate-Protocol.h"
#import "LyricManagerDelegate-Protocol.h"
#import "ProtocolHostDelegate-Protocol.h"
#import "SongInfoFreshDelegate-Protocol.h"
#import "SongQueryCallBackDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AVAudioSessionRouteDescription, CBCentralManager, ListBase, LyricManager, NSString, NSTimer, PlayList, QMAudioPlayerVC, QMSongInfo, SingleHourglass, SongInfo, SpeedRecorder;
@protocol KSAudioPlayerProtocol, OS_dispatch_source;

@interface AudioPlayManager : NSObject <CBCentralManagerDelegate, KSAudioPlayerDelegate, ImageManagerDelegate, LyricManagerDelegate, AVAudioSessionDelegate, ProtocolHostDelegate, UIAlertViewDelegate, SongInfoFreshDelegate, SongQueryCallBackDelegate>
{
    QMAudioPlayerVC *playerUIViewController;
    SongInfo *currentSong;
    SongInfo *wantPlaySong;
    NSObject<OS_dispatch_source> *progressUpdateTimer;
    NSObject *timerLock;
    LyricManager *lyricManager;
    _Bool bDLNAPlay;
    _Bool bPlayLocalFile;
    PlayList *playlist;
    int playtype;
    _Bool bPauseCauseInterruption;
    _Bool bErrCaseByNet;
    _Bool bHeadsetChanedDuringInterruption;
    _Bool PluginInterruptionHappened;
    _Bool bError;
    _Bool _bManualCause;
    id keyWantUpdatedToPlayList;
    ListBase *listBaseWantUpdateToPlayList;
    _Bool bStop;
    SongInfo *checkedCacheSong;
    _Bool _hasClickedPlayForThisNetChange;
    _Bool _isAutoJumpToSpecifyIndex;
    NSString *strStatPlayTypeLine;
    _Bool bWantChangeSongRate;
    _Bool _isBluetoothOn;
    _Bool interrupted;
    _Bool _isManualTrigPlay;
    _Bool _isCanInitPlayingUI;
    _Bool _playingNextSongsQueue;
    _Bool _bShowPlayer;
    _Bool _isPlayPreSong;
    _Bool _isPlayingViewShow;
    _Bool _firstLoadPalyingView;
    _Bool _isFirstLoadPlayList;
    _Bool _interruptionTip;
    _Bool _isManuaTriggerPlayNextPreSong;
    _Bool _shouldCheckPersistConnection;
    _Bool _shouldAddedToRecentPlayList;
    _Bool _isSeekNow;
    _Bool _allowListenReport;
    _Bool _canGetFriendsShareInfo;
    _Bool _canShowFriendsShareInfo;
    _Bool _isConnectBluetooth;
    _Bool _isConnectHeadphone;
    _Bool _isRestoringList;
    _Bool _isAutoPlay;
    _Bool _hasRecoverPlayProgress;
    float _lastVolume;
    int _sliceSkipSongCount;
    int _playLowerSongRate;
    id <KSAudioPlayerProtocol> player;
    SingleHourglass *stuckedHourglass;
    double stuckedPosition;
    SongInfo *stuckedSong;
    SongInfo *waitingFingerPrintSong;
    AVAudioSessionRouteDescription *_curRoute;
    SpeedRecorder *_speedRecorder;
    ListBase *_nextSongsQueue;
    unsigned long long _songListInsertNextQueueIndex;
    double _volumeSliderChangeTime;
    long long _eSpecialListToShowPlayingView;
    NSTimer *_playRadioTimer;
    double _seekProgress;
    NSTimer *_seekTimer;
    CBCentralManager *_centralManager;
    double _playStartTime;
    double _getFriendsShareInfoStartTime;
    unsigned long long _playLowerSongRateCount;
    QMSongInfo *_qmSong;
    long long _maxAge;
    unsigned long long _lastPlayerStatus;
    struct SFlexInteger _refreshDataBeforePlayList;
    struct _NSRange _nextSongRange;
}

+ (_Bool)isPlayingSong:(id)arg1;
+ (id)sharedAudioPlayManager;
@property(nonatomic) unsigned long long lastPlayerStatus; // @synthesize lastPlayerStatus=_lastPlayerStatus;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) QMSongInfo *qmSong; // @synthesize qmSong=_qmSong;
@property(nonatomic) _Bool hasRecoverPlayProgress; // @synthesize hasRecoverPlayProgress=_hasRecoverPlayProgress;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) int playLowerSongRate; // @synthesize playLowerSongRate=_playLowerSongRate;
@property(nonatomic) unsigned long long playLowerSongRateCount; // @synthesize playLowerSongRateCount=_playLowerSongRateCount;
@property(nonatomic) _Bool isRestoringList; // @synthesize isRestoringList=_isRestoringList;
@property(nonatomic) _Bool isConnectHeadphone; // @synthesize isConnectHeadphone=_isConnectHeadphone;
@property(nonatomic) _Bool isConnectBluetooth; // @synthesize isConnectBluetooth=_isConnectBluetooth;
@property(nonatomic) _Bool canShowFriendsShareInfo; // @synthesize canShowFriendsShareInfo=_canShowFriendsShareInfo;
@property(nonatomic) double getFriendsShareInfoStartTime; // @synthesize getFriendsShareInfoStartTime=_getFriendsShareInfoStartTime;
@property(nonatomic) _Bool canGetFriendsShareInfo; // @synthesize canGetFriendsShareInfo=_canGetFriendsShareInfo;
@property(nonatomic) double playStartTime; // @synthesize playStartTime=_playStartTime;
@property(nonatomic) _Bool allowListenReport; // @synthesize allowListenReport=_allowListenReport;
@property(retain) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) _Bool isSeekNow; // @synthesize isSeekNow=_isSeekNow;
@property(retain, nonatomic) NSTimer *seekTimer; // @synthesize seekTimer=_seekTimer;
@property(nonatomic) double seekProgress; // @synthesize seekProgress=_seekProgress;
@property(retain, nonatomic) NSTimer *playRadioTimer; // @synthesize playRadioTimer=_playRadioTimer;
@property(nonatomic) _Bool shouldAddedToRecentPlayList; // @synthesize shouldAddedToRecentPlayList=_shouldAddedToRecentPlayList;
@property(nonatomic) _Bool shouldCheckPersistConnection; // @synthesize shouldCheckPersistConnection=_shouldCheckPersistConnection;
@property(nonatomic) int sliceSkipSongCount; // @synthesize sliceSkipSongCount=_sliceSkipSongCount;
@property(nonatomic) _Bool isManuaTriggerPlayNextPreSong; // @synthesize isManuaTriggerPlayNextPreSong=_isManuaTriggerPlayNextPreSong;
@property(nonatomic) struct SFlexInteger refreshDataBeforePlayList; // @synthesize refreshDataBeforePlayList=_refreshDataBeforePlayList;
@property(nonatomic) _Bool interruptionTip; // @synthesize interruptionTip=_interruptionTip;
@property(nonatomic) long long eSpecialListToShowPlayingView; // @synthesize eSpecialListToShowPlayingView=_eSpecialListToShowPlayingView;
@property(nonatomic) _Bool isFirstLoadPlayList; // @synthesize isFirstLoadPlayList=_isFirstLoadPlayList;
@property(nonatomic) _Bool firstLoadPalyingView; // @synthesize firstLoadPalyingView=_firstLoadPalyingView;
@property(nonatomic) _Bool isPlayingViewShow; // @synthesize isPlayingViewShow=_isPlayingViewShow;
@property(nonatomic) _Bool isPlayPreSong; // @synthesize isPlayPreSong=_isPlayPreSong;
@property(nonatomic) float lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) _Bool bShowPlayer; // @synthesize bShowPlayer=_bShowPlayer;
@property(nonatomic) double volumeSliderChangeTime; // @synthesize volumeSliderChangeTime=_volumeSliderChangeTime;
@property(nonatomic) struct _NSRange nextSongRange; // @synthesize nextSongRange=_nextSongRange;
@property(nonatomic) unsigned long long songListInsertNextQueueIndex; // @synthesize songListInsertNextQueueIndex=_songListInsertNextQueueIndex;
@property(nonatomic) _Bool playingNextSongsQueue; // @synthesize playingNextSongsQueue=_playingNextSongsQueue;
@property(retain, nonatomic) ListBase *nextSongsQueue; // @synthesize nextSongsQueue=_nextSongsQueue;
@property(readonly, nonatomic) SpeedRecorder *speedRecorder; // @synthesize speedRecorder=_speedRecorder;
@property(nonatomic) _Bool isCanInitPlayingUI; // @synthesize isCanInitPlayingUI=_isCanInitPlayingUI;
@property(nonatomic) _Bool isManualTrigPlay; // @synthesize isManualTrigPlay=_isManualTrigPlay;
@property(retain) AVAudioSessionRouteDescription *curRoute; // @synthesize curRoute=_curRoute;
@property(retain) ListBase *listBaseWantUpdateToPlayList; // @synthesize listBaseWantUpdateToPlayList;
@property(retain) id keyWantUpdatedToPlayList; // @synthesize keyWantUpdatedToPlayList;
@property(nonatomic) _Bool PluginInterruptionHappened; // @synthesize PluginInterruptionHappened;
@property(nonatomic) _Bool bPauseCauseInterruption; // @synthesize bPauseCauseInterruption;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted;
@property(retain, nonatomic) SongInfo *wantPlaySong; // @synthesize wantPlaySong;
@property(retain, nonatomic) NSString *strStatPlayTypeLine; // @synthesize strStatPlayTypeLine;
@property(retain, nonatomic) SongInfo *checkedCacheSong; // @synthesize checkedCacheSong;
@property(nonatomic) _Bool bManualCause; // @synthesize bManualCause=_bManualCause;
@property(copy, nonatomic) SongInfo *waitingFingerPrintSong; // @synthesize waitingFingerPrintSong;
@property(copy, nonatomic) SongInfo *stuckedSong; // @synthesize stuckedSong;
@property(nonatomic) double stuckedPosition; // @synthesize stuckedPosition;
@property(retain, nonatomic) SingleHourglass *stuckedHourglass; // @synthesize stuckedHourglass;
@property(nonatomic) _Bool bDLNAPlay; // @synthesize bDLNAPlay;
@property(readonly, nonatomic) PlayList *playlist; // @synthesize playlist;
@property(retain, nonatomic) id <KSAudioPlayerProtocol> player; // @synthesize player;
@property(retain, nonatomic) LyricManager *lyricManager; // @synthesize lyricManager;
@property(retain, nonatomic) QMAudioPlayerVC *playerUIViewController; // @synthesize playerUIViewController;
@property(retain, nonatomic) SongInfo *currentSong; // @synthesize currentSong;
- (void).cxx_destruct;
- (void)uploadLog;
- (id)generateTimeKey:(struct SFlexInteger)arg1 opTime:(long long)arg2;
- (void)reportPlayStatInfo:(id)arg1;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (_Bool)canUseSliceRange;
- (void)hiddenPlayingList;
- (_Bool)restorePlayProgressAfterLanuchFinish;
- (_Bool)bPaidSongExistInListBase:(id)arg1;
- (void)bFreshSongInfoCommplete:(id)arg1;
- (void)getMvPreviewInfo;
- (void)reportRadioOperate:(long long)arg1 song:(id)arg2 listTag:(int)arg3 radioItemId:(long long)arg4 playTime:(double)arg5 recReason:(id)arg6;
- (void)reportRadioOperate:(long long)arg1 song:(id)arg2;
- (void)reportRadioOperate:(long long)arg1;
- (void)showInterruptionBannerTips;
- (id)expInfoOfCurrentSong;
- (void)addSongsToPlayList:(id)arg1 atFront:(_Bool)arg2 assetsType:(int)arg3;
- (int)innerAddSongsToPlayList:(id)arg1 atFront:(_Bool)arg2 assetsType:(int)arg3;
- (_Bool)shouldShowPlahingViewWhilePlayNewList;
- (_Bool)isPlayingThisRadioItemID:(long long)arg1;
- (_Bool)isPlayingILikeRadio;
- (int)firstNotPlayedInILike:(id)arg1;
- (void)handleRadioProtocolBack:(id)arg1 protocolError:(id)arg2 block:(CDUnknownBlockType)arg3 showUI:(_Bool)arg4 from:(id)arg5 specialList:(long long)arg6;
- (void)handleRadioProtocolBack:(id)arg1 protocolError:(id)arg2 block:(CDUnknownBlockType)arg3 showUI:(_Bool)arg4 from:(id)arg5 specialList:(long long)arg6 fromsong:(id)arg7;
- (void)appleWatchPlayRadio:(long long)arg1 vcFrom:(id)arg2 showUI:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)playRadio:(long long)arg1 vcFrom:(id)arg2 showUI:(_Bool)arg3 block:(CDUnknownBlockType)arg4 specialListToShowPlayingView:(long long)arg5;
- (void)playRadio:(long long)arg1 vcFrom:(id)arg2 showUI:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)playRadio:(long long)arg1 vcFrom:(id)arg2 showUI:(_Bool)arg3 fromSong:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)playRadioTimerCome:(id)arg1;
- (void)startPlayRadioTimer:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 protocolError:(id)arg2;
- (void)queryFakeSongInfo:(id)arg1;
- (_Bool)isPlayingRadio;
- (long long)getListeningReportQuality;
- (int)getCurrentPlayingSongRateType;
- (id)stealNextSongsQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)restore2PreviousStatus:(id)arg1 withFilePath:(id)arg2 isAutoPlay:(_Bool)arg3;
- (_Bool)willLoadNewPlaylistFromLanchOptions:(id)arg1;
- (_Bool)safeRestore2PreviousStatus:(id)arg1 withFilePath:(id)arg2 isAutoPlay:(_Bool)arg3;
- (void)savePreviousPlayStatus;
- (void)informAudioPlayerUIReceivedSongFromFriends;
- (void)changeRadioPlayList;
- (void)changeRadioSongForRadioId:(long long)arg1;
- (void)audioPlayerReturn;
- (void)showAudioPlayerUI:(_Bool)arg1 isNeedToResetNavbar:(_Bool)arg2;
- (void)showAudioPlayerUI:(_Bool)arg1;
- (void)nowPlayingButtonPressed:(id)arg1;
- (void)initAudioPlayerUI;
- (void)initAudioPlayerUIWhenInit;
- (id)popNextSongInQueue;
- (_Bool)canAddNextSongsToQueue:(id)arg1 assetsType:(int)arg2;
- (void)playSongInNextSongQueue:(int)arg1;
- (_Bool)addNextSongsToQueue:(id)arg1 assetsType:(int)arg2;
- (_Bool)innerAddNextSongsToQueue:(id)arg1 assetsType:(int)arg2;
- (void)setListPlayMode:(int)arg1;
- (_Bool)canPlayFlacInQPlayMode;
- (_Bool)canPlay320Mp3InQPlayMode;
- (void)startUpdateProgressTimer;
- (void)stopUpdateProgressTimer;
- (_Bool)_canPlayNextWithDataSourceError:(int)arg1;
- (id)getMediaTrackInfo;
- (id)getPlayingLocalFilePath;
- (void)refreshAlbumOnChangeToPlaying;
- (_Bool)canCacheDataNoWifi;
- (_Bool)checkNoWifiAlertWhenUrlRetry;
- (void)doSomethingWhenNofityNoDataBeforeDataRetry;
- (_Bool)hasQPlaySupportedSongsinPlaylist;
- (void)tryToCheckWorkAndPlay;
- (void)reachabilityChanged:(id)arg1;
- (void)onNotifyDurationGeted:(id)arg1;
- (void)onNofityLogout:(id)arg1;
- (void)updatePlayingList:(id)arg1;
- (_Bool)researchLyricForSong:(id)arg1;
- (void)getLyricByFingerPrint:(id)arg1 manualCause:(_Bool)arg2;
- (int)getPlayingIndex;
- (id)getLiteralStrForPlayMode:(int)arg1;
- (id)getNextLiteralPlayMode;
- (id)getLiteralPlayMode;
- (int)getPlayMode;
- (void)setPlayMode:(int)arg1;
- (void)HeadsetUnplugged;
- (void)HeadsetPlugged;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)beginInterruption;
- (void)interruption:(id)arg1;
- (void)initQQMusicAudioSession;
- (_Bool)isPlayingMyMusicList;
- (void)checkLocalSongMid;
- (void)playNoPreInHistoryList:(_Bool)arg1;
- (void)playPreFromHistoryList:(id)arg1;
- (void)playPre:(_Bool)arg1;
- (void)playNext:(_Bool)arg1;
- (_Bool)_playNextSongQueue;
- (void)replaceQPlayQueue:(id)arg1;
- (void)replaceQPlayQueueSinceLastSong:(id)arg1;
- (void)updateQPlaySong:(id)arg1;
- (void)createPlayerForQPlay;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 clearErrorCount:(_Bool)arg4;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 autoPlay:(_Bool)arg4;
- (void)playRecognizeSong:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playAppleWatchList:(id)arg1 index:(int)arg2 listPlayMode:(int)arg3;
- (void)playMusicCircleFeedList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playWebBackPlayList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (_Bool)playList:(id)arg1 ItemClicked:(int)arg2 listPlayMode:(int)arg3 isNeedToResetNavBar:(_Bool)arg4;
- (_Bool)playList:(id)arg1 ItemClicked:(int)arg2 listPlayMode:(int)arg3;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 specialListToShowPlayingView:(long long)arg4;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 autoPlay:(_Bool)arg4 clearErrorCount:(_Bool)arg5;
- (id)filterListRemoveDisableSong:(id)arg1 Index:(int *)arg2;
- (void)firstLoadSongList;
- (void)_activeFirstPieceCacheManager:(id)arg1;
- (void)lyricManagerCallBack:(id)arg1 state:(int)arg2;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)onUnlockScreen:(id)arg1;
- (void)updateUI;
- (void)updateProgress:(id)arg1;
- (void)_cacheNextSong:(double)arg1 progress:(double)arg2;
- (void)_addToRecentPlayList:(_Bool)arg1;
- (void)addToRecentPlayList;
- (void)destroyAudioPlayer;
- (void)stopPlay;
- (_Bool)isRealBuffering;
- (_Bool)isRealPaused;
- (_Bool)isRealPlaying;
- (_Bool)isPlaying;
- (void)fadeVolumeWithDuration:(double)arg1;
- (void)resmuAddDAU;
- (void)checkNetStatusWithBlock:(CDUnknownBlockType)arg1;
- (void)pauseOrContinuePlayImmediately:(_Bool)arg1;
- (_Bool)isSeekNowByRemoteControl;
- (void)seekBackwardOrForwardByRemoteControl:(long long)arg1;
- (void)seekToNewPlayTimeFromSlider:(float)arg1;
- (void)seekToNewPlayTime:(float)arg1;
- (void)updateErrCaseFlg;
- (void)updateSongInfo:(id)arg1 autoPlay:(_Bool)arg2;
- (void)checkChacheAndOpenAndPlay:(_Bool)arg1;
- (void)autoJumpToSpecifyIndex:(id)arg1;
- (void)sethasClickedPlayForThisNetChange:(_Bool)arg1;
- (_Bool)hasClickedPlayForThisNetChange;
- (void)play:(unsigned long long)arg1;
- (void)play;
- (_Bool)handleContinuePlaySong;
- (void)checkUnUsedSong:(id)arg1 CacheSong:(id)arg2;
- (id)normalAudioPlayer;
- (double)cacheProgress;
- (double)duration;
- (double)curTime;
- (unsigned long long)playStatus;
- (void)setupNewPlayConfigure;
- (id)getAudioPlayer:(_Bool)arg1;
- (int)currentSongAssetsType;
- (int)getAssetsTypeBySong:(id)arg1;
- (void)open:(id)arg1 andPlay:(_Bool)arg2;
- (void)open:(id)arg1;
- (void)openAndPlay:(id)arg1;
- (void)deleteSongFromPlaylist:(id)arg1 finishCallBack:(CDUnknownBlockType)arg2;
- (void)prepareDeleteSong:(unsigned long long)arg1 blockForPlayingListEmpty:(CDUnknownBlockType)arg2 blockForPlayinglistNotEmpty:(CDUnknownBlockType)arg3;
- (int)getWantRate;
- (void)changeSongRateTo:(int)arg1;
- (void)songQueryCallBackWithSongArray:(id)arg1;
- (id)getAllSongsToPlay;
- (void)playSingleSong:(id)arg1;
- (_Bool)isQPlayMode;
- (void)setQPlayMode:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)playQueue:(id)arg1;
- (_Bool)getQPlayMode;
- (void)setQPlayMode:(_Bool)arg1;
- (float)getVolume;
- (void)setSpeakerVolume:(float)arg1 filter:(_Bool)arg2;
- (void)setVolume:(float)arg1 filter:(_Bool)arg2;
- (void)prePlayLyricFromLyricManager;
- (void)prePlayingViewPlayInfo:(_Bool)arg1;
- (void)updateCurrentAlbum;
- (void)prePlayInfo:(_Bool)arg1;
- (void)refreshMinibarData;
- (id)_getAlbumImageOnPrePlayInfo;
- (void)onNotifyForbidden:(id)arg1;
- (_Bool)isBluetoothOn;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)checkAudioRoute;
- (void)showBluetoothA2DPLostedAlertInMainThread:(id)arg1;
- (void)showBluetoothA2DPLostedAlert:(id)arg1;
- (void)onAudioRouteChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
