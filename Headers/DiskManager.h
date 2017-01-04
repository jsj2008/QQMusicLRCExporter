//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DiskManager : NSObject
{
    _Bool _didShowMemoryLimitAlert;
}

+ (id)sharedDiskManager;
@property _Bool didShowMemoryLimitAlert; // @synthesize didShowMemoryLimitAlert=_didShowMemoryLimitAlert;
- (_Bool)canShowMemoryLimitAlert;
- (void)dealloc;
- (void)_statUsedSpace;
- (void)addUsedSpaceStatInfo;
- (_Bool)tooManyHotImages;
- (void)deleteHotImageCacheWhileLowDiskSpace;
- (void)_onNotifyCheckFirstPieceCacheFolderSizeFinish:(id)arg1;
- (void)checkFirstPieceCache;
- (_Bool)tooManyFirstPieces;
- (void)deleteFirstPieceCacheWhileLowDiskSpace;
- (unsigned long long)freeSpaceValueOfDisk;
- (_Bool)showWarningWhenDownloadingFor:(unsigned long long)arg1;
- (void)mainThreadShowAlert;
- (_Bool)hasEnoughDiskspaceOf:(unsigned long long)arg1;
- (void)showNoDiskSpaceWarningFor:(_Bool)arg1;
- (_Bool)canShowSpaceWarningAgain;

@end
