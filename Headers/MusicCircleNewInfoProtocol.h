//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class MusicCircleNewInfo;

@interface MusicCircleNewInfoProtocol : ProtocolBaseJason
{
    MusicCircleNewInfo *_musicCirlceNewInfo;
}

@property(retain, nonatomic) MusicCircleNewInfo *musicCirlceNewInfo; // @synthesize musicCirlceNewInfo=_musicCirlceNewInfo;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end
