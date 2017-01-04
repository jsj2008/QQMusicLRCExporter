//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray, NSMutableDictionary;

@interface QuerySongExtProtocol : ProtocolBaseJason
{
    _Bool _isQueryByZeroUin;
    int _assetsType;
    NSMutableDictionary *_dicSongId2QuerySongExtResult;
    NSArray *_songInfoKeys;
}

@property(nonatomic) _Bool isQueryByZeroUin; // @synthesize isQueryByZeroUin=_isQueryByZeroUin;
@property int assetsType; // @synthesize assetsType=_assetsType;
@property(readonly) NSArray *songInfoKeys; // @synthesize songInfoKeys=_songInfoKeys;
@property(retain) NSMutableDictionary *dicSongId2QuerySongExtResult; // @synthesize dicSongId2QuerySongExtResult=_dicSongId2QuerySongExtResult;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getSongIds;
- (void)startWorkWithFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)needAuth;
- (id)getUrl;
- (int)cid;
- (id)initWithSongInfoKeys:(id)arg1;

@end
