//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class DirectCluster, ListBase, NSArray, NSString;

@interface SearchRealtimeProtocol : ProtocolBaseJason
{
    _Bool _notNeedCorrect;
    _Bool _requsetYuyi;
    _Bool _noParseRealtimeResult;
    NSString *_searchString;
    NSArray *_smartResults;
    ListBase *_realtimeList;
    NSArray *_searchSmartDirects;
    DirectCluster *_searchCluster;
    NSString *_mvQuery;
}

@property(retain, nonatomic) NSString *mvQuery; // @synthesize mvQuery=_mvQuery;
@property(nonatomic) _Bool noParseRealtimeResult; // @synthesize noParseRealtimeResult=_noParseRealtimeResult;
@property(nonatomic) _Bool requsetYuyi; // @synthesize requsetYuyi=_requsetYuyi;
@property(nonatomic) _Bool notNeedCorrect; // @synthesize notNeedCorrect=_notNeedCorrect;
@property(retain, nonatomic) DirectCluster *searchCluster; // @synthesize searchCluster=_searchCluster;
@property(readonly, nonatomic) NSArray *searchSmartDirects; // @synthesize searchSmartDirects=_searchSmartDirects;
@property(retain, nonatomic) ListBase *realtimeList; // @synthesize realtimeList=_realtimeList;
@property(readonly, nonatomic) NSArray *smartResults; // @synthesize smartResults=_smartResults;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (id)parseJsonSmartDirects:(id)arg1;
- (void)onParseRealTimeJsonData:(id)arg1;
- (void)onPraseDNodeJsonData:(id)arg1;
- (void)onParseErrorCorrection:(id)arg1;
- (void)onParseTagList:(id)arg1;
- (void)parseDirectItemInfo:(id)arg1 from:(id)arg2;
- (void)parseDirectWithData:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (_Bool)needCheckDidSendRequest;
- (id)getUrl;
- (int)cid;

@end
