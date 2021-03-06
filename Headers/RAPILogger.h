//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IDLogAppender-Protocol.h"

@class NSDateFormatter, NSString, RAPIContext, RAPIDDFileLogger, RAPIDDLogFileManagerRAPI, RAPIDebugMenuController;

@interface RAPILogger : NSObject <IDLogAppender>
{
    RAPIDebugMenuController *_debugMenuController;
    RAPIContext *_rapiContext;
    NSString *_logDirectory;
    RAPIDDLogFileManagerRAPI *_logFileManager;
    RAPIDDFileLogger *_fileLogger;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_vehicleDateFormatter;
}

+ (void)logWithSource:(long long)arg1 formatString:(id)arg2 andArguments:(char *)arg3;
+ (void)logWithSource:(long long)arg1 formatString:(id)arg2;
+ (id)sharedLogger;
@property(retain) NSDateFormatter *vehicleDateFormatter; // @synthesize vehicleDateFormatter=_vehicleDateFormatter;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain) RAPIDDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
@property(retain) RAPIDDLogFileManagerRAPI *logFileManager; // @synthesize logFileManager=_logFileManager;
@property(retain) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
@property(retain) RAPIContext *rapiContext; // @synthesize rapiContext=_rapiContext;
@property(retain) RAPIDebugMenuController *debugMenuController; // @synthesize debugMenuController=_debugMenuController;
- (void).cxx_destruct;
- (void)appendLoggerEvent:(id)arg1;
- (void)logInternalSingleLine:(id)arg1 source:(long long)arg2;
- (void)logInternal:(id)arg1 source:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

