//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, SongInfo;

@interface MVPreviewProtocol : ProtocolBaseJason
{
    SongInfo *_song;
    NSArray *_mvImageUrls;
    unsigned long long _startTime;
    unsigned long long _duration;
}

@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *mvImageUrls; // @synthesize mvImageUrls=_mvImageUrls;
@property(retain, nonatomic) SongInfo *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (_Bool)canReportError;
- (int)cid;

@end
