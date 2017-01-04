//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

@interface RadioReportProtocol : ProtocolBaseJason
{
    unsigned long long _song_ID;
    long long _operateType;
    double _listenTime;
    NSString *_callBackString;
    long long _operateSource;
    NSString *_rec_reason;
}

@property(retain, nonatomic) NSString *rec_reason; // @synthesize rec_reason=_rec_reason;
@property(nonatomic) long long operateSource; // @synthesize operateSource=_operateSource;
@property(retain, nonatomic) NSString *callBackString; // @synthesize callBackString=_callBackString;
@property(nonatomic) double listenTime; // @synthesize listenTime=_listenTime;
@property(nonatomic) long long operateType; // @synthesize operateType=_operateType;
@property(nonatomic) unsigned long long song_ID; // @synthesize song_ID=_song_ID;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end
