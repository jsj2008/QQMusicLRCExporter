//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

@interface GetQQAssetProtocol : ProtocolBaseJason
{
    int _FinalStep;
    int _requestType;
    unsigned long long _fromUin;
    NSString *_fromKey;
}

@property(retain, nonatomic) NSString *fromKey; // @synthesize fromKey=_fromKey;
@property(nonatomic) unsigned long long fromUin; // @synthesize fromUin=_fromUin;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) int FinalStep; // @synthesize FinalStep=_FinalStep;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)initWithFromUin:(unsigned long long)arg1 andFromKey:(id)arg2;

@end

