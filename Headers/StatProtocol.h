//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSString;

@interface StatProtocol : ProtocolBaseJason
{
    NSString *stats;
    NSString *_filePath;
    NSString *_clientVersion;
    NSArray *_specialInfo;
}

@property(retain, nonatomic) NSArray *specialInfo; // @synthesize specialInfo=_specialInfo;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *stats; // @synthesize stats;
- (void).cxx_destruct;
- (id)getUrl;
- (id)createPostData:(id)arg1 SIDStr:(id)arg2;
- (_Bool)isAccessedWhileWifiOnly;
- (id)init;

@end

