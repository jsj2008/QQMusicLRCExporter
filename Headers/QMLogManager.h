//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface QMLogManager : NSObject
{
    struct LogQueue *_logQueue;
    char *_permanentBuffer;
    unsigned long long _curPermanentBufLen;
    _Bool _hasWrittenBasicInfoAlready;
    char *_errorBuffer;
    unsigned long long _errorBufLen;
    char *_newLogBuffer;
    unsigned long long _newLogBufLen;
    _Bool _readLogFail;
    NSDate *_appLaunchDate;
    NSDate *_logStartDate;
    NSDate *_logEndDate;
    NSObject<OS_dispatch_queue> *_logSerialQueue;
}

+ (id)encodeQQKey:(id)arg1;
+ (id)getLogFileNameByStartDate:(id)arg1 lastWriteDate:(id)arg2 endDate:(id)arg3;
+ (id)getLogFileNameByStartDate:(id)arg1 endDate:(id)arg2;
+ (id)getLogDateFormat;
+ (id)shareNSDateFormatter;
+ (id)sharedQMLogManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logSerialQueue; // @synthesize logSerialQueue=_logSerialQueue;
@property(retain, nonatomic) NSDate *logEndDate; // @synthesize logEndDate=_logEndDate;
@property(retain, nonatomic) NSDate *logStartDate; // @synthesize logStartDate=_logStartDate;
@property(retain, nonatomic) NSDate *appLaunchDate; // @synthesize appLaunchDate=_appLaunchDate;
- (void).cxx_destruct;
- (id)getAllSortedDateRanges;
- (id)getAllSortedLogFilePaths;
- (id)convertDateRangeToFileName:(id)arg1;
- (id)convertFileNameToDateRange:(id)arg1;
- (id)encodeJailBrokenKey:(id)arg1;
- (id)encodeDeviceValue:(id)arg1;
- (id)encodeDeviceKey:(id)arg1;
- (id)encodeUUIDValue:(id)arg1;
- (id)encodeUUIDKey:(id)arg1;
- (id)encodeOSVersionValue:(id)arg1;
- (id)encodeOSVersionKey:(id)arg1;
- (id)encodeOSNameValue:(id)arg1;
- (id)encodeOSNameKey:(id)arg1;
- (long long)dirSizeAtDirPath:(const char *)arg1 isCalculateSubDir:(_Bool)arg2;
- (long long)fileSizeAtFilePath:(const char *)arg1;
- (_Bool)deleteCurrentLogBuffer;
- (id)getZipArchiveData:(long long)arg1 inFilePaths:(id)arg2;
- (id)createFileName;
- (void)addInfo:(id)arg1 ToZip:(id)arg2;
- (id)getZipedDirInfoFilePath;
- (id)getZipArchiveData:(long long)arg1 fromDate:(id)arg2;
- (id)getRecentZipArchiveData:(long long)arg1;
- (void)splitSingleLargeLogFileToPieces:(id)arg1;
- (void)splitAllLargeLogFileInToPieces;
- (long long)pieceSize;
- (id)getErrorLogData;
- (id)getPermanentLogData;
- (id)getBasicInfo;
- (id)getLogLevelStringFromEnum:(int)arg1;
- (id)getLogDirPath;
- (unsigned long long)getCurrentLogDataLength;
- (void)innerSaveLogToFileNeedAsync:(_Bool)arg1;
- (void)saveSynchronouslyToFile;
- (void)saveLogAsynchronouslyToFile;
- (void)saveLogToFileAndIsAsync:(_Bool)arg1;
- (void)_deleteUnrecentLogFiles;
- (void)_writeBuffer:(char *)arg1 withLength:(unsigned long long)arg2 withBaseData:(id)arg3 toFile:(id)arg4;
- (id)_readDataWithSeekPos:(int)arg1 fromFile:(id)arg2;
- (id)_isFileExist:(id)arg1 andName:(id)arg2;
- (id)getLastUpnpLogFilePath;
- (id)getUpnpLogFilePath;
- (void)_savePermanentLog;
- (void)_addPermanentLog:(const char *)arg1 withLength:(unsigned long long)arg2;
- (void)_addPermanentLog:(id)arg1;
- (id)_getPermanentLogFilePath;
- (id)getPermanentLogFilePath;
- (void)_saveErrorLog;
- (void)_addErrorLog:(const char *)arg1 withLength:(unsigned long long)arg2;
- (void)_addErrorLog:(id)arg1;
- (id)_getErrorLogFilePath;
- (id)getErrorLogFilePath;
- (id)getLogMessageStringFromMemBuffer;
- (id)gatherAllLogMessageFormAppLaunch;
- (id)getLogMessageDataFromMem;
- (void)_addNewLog:(id)arg1;
- (id)_getLogFilePath;
- (id)_getBisicData;
- (id)_getLogStrByDate:(id)arg1;
- (void)addNewLog:(id)arg1 withLevel:(int)arg2 withCategory:(id)arg3;
- (void)dealloc;
- (id)init;

@end

