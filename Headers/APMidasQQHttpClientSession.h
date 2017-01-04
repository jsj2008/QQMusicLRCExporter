//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMidasAFHTTPRequestOperation.h"

@class NSArray, NSDate, NSError, NSFileHandle, NSMutableArray, NSMutableData, NSObject, NSRecursiveLock, NSString, NSURL, QQHttpStatisInfo, UIImage;

@interface APMidasQQHttpClientSession : APMidasAFHTTPRequestOperation
{
    _Bool _shouldReportEvent;
    _Bool _mergeDuplicateUrlBlock;
    _Bool _allowResumeForFileDownloads;
    int _resType;
    QQHttpStatisInfo *_statisInfo;
    NSString *_seq;
    NSArray *_bizs;
    NSString *_dataSavePath;
    unsigned long long _retryCount;
    NSArray *_ipList;
    NSURL *_orignURL;
    long long _cachePolicy;
    NSMutableArray *_succBlocks;
    NSMutableArray *_failBlocks;
    NSDate *_sessionStartTime;
    NSString *_redirectURLStr;
    NSString *_willSendURLStr;
    long long _attemptCount;
    CDUnknownBlockType _headerResponse;
    UIImage *_responseImage;
    NSObject *_responseJSON;
    NSError *_JSONError;
    NSError *_preProcessError;
    NSRecursiveLock *_lock;
    unsigned long long _partialDownloadSize;
    NSMutableData *_receivedDataBuffer;
    NSFileHandle *_fileHandle;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _eventReportHandler;
    NSString *_tempFilePath;
}

+ (id)checkURL:(id)arg1;
+ (id)sessionWithRequest:(id)arg1 bussiness:(id)arg2 resource:(int)arg3 mergeBlocks:(_Bool)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)sessionWithRequest:(id)arg1 bussiness:(id)arg2 resource:(int)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (id)sessionWithURL:(id)arg1 bussiness:(id)arg2 resource:(int)arg3 mergeBlocks:(_Bool)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
+ (id)sessionWithURL:(id)arg1 bussiness:(id)arg2 resource:(int)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(copy, nonatomic) CDUnknownBlockType eventReportHandler; // @synthesize eventReportHandler=_eventReportHandler;
@property(copy, nonatomic) CDUnknownBlockType processBlock; // @synthesize processBlock=_processBlock;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSMutableData *receivedDataBuffer; // @synthesize receivedDataBuffer=_receivedDataBuffer;
@property(nonatomic) unsigned long long partialDownloadSize; // @synthesize partialDownloadSize=_partialDownloadSize;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSError *preProcessError; // @synthesize preProcessError=_preProcessError;
@property(retain, nonatomic) NSError *JSONError; // @synthesize JSONError=_JSONError;
@property(retain, nonatomic) NSObject *responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain, nonatomic) UIImage *responseImage; // @synthesize responseImage=_responseImage;
@property(copy, nonatomic) CDUnknownBlockType headerResponse; // @synthesize headerResponse=_headerResponse;
@property(nonatomic) _Bool allowResumeForFileDownloads; // @synthesize allowResumeForFileDownloads=_allowResumeForFileDownloads;
@property(nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(copy, nonatomic) NSString *willSendURLStr; // @synthesize willSendURLStr=_willSendURLStr;
@property(copy, nonatomic) NSString *redirectURLStr; // @synthesize redirectURLStr=_redirectURLStr;
@property(readonly, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) NSMutableArray *failBlocks; // @synthesize failBlocks=_failBlocks;
@property(retain, nonatomic) NSMutableArray *succBlocks; // @synthesize succBlocks=_succBlocks;
@property(nonatomic) _Bool mergeDuplicateUrlBlock; // @synthesize mergeDuplicateUrlBlock=_mergeDuplicateUrlBlock;
@property(nonatomic) long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(retain, nonatomic) NSURL *orignURL; // @synthesize orignURL=_orignURL;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList=_ipList;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *dataSavePath; // @synthesize dataSavePath=_dataSavePath;
@property(retain, nonatomic) NSArray *bizs; // @synthesize bizs=_bizs;
@property(nonatomic) int resType; // @synthesize resType=_resType;
@property(retain, nonatomic) NSString *seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool shouldReportEvent; // @synthesize shouldReportEvent=_shouldReportEvent;
@property(retain, nonatomic) QQHttpStatisInfo *statisInfo; // @synthesize statisInfo=_statisInfo;
- (void).cxx_destruct;
- (void)reSetRetryCount:(unsigned long long)arg1;
- (void)start;
- (_Bool)setupRequestHeaderAndTempFile;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)parseRangeInfo:(id)arg1;
- (_Bool)allowContentRangeRequest;
- (id)tempFileFolder;
- (id)tempFileDownloadPathFromUrl:(id)arg1;
- (id)dataCachePath;
- (_Bool)shouldWriteDataToCacheFile;
- (unsigned long long)fileSizeForPath:(id)arg1;
- (id)freeDiskSpace;
- (id)keyForURL:(id)arg1;
- (id)error;
- (void)dealloc;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 resource:(int)arg3;
- (void)setPollingIpArray:(id)arg1;
- (void)setRedirectResponseBlock:(CDUnknownBlockType)arg1;
- (void)setHeaderResponseBlock:(CDUnknownBlockType)arg1;
- (void)setUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setPreProcessBlock:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1 bussiness:(id)arg2 resource:(int)arg3;

@end
