//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSDictionary, NSString;

@interface QPlayAuthProtocol : ProtocolBaseJason
{
    _Bool authed;
    NSDictionary *authInfo;
    NSString *identifier;
}

@property(nonatomic) _Bool authed; // @synthesize authed;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(retain, nonatomic) NSDictionary *authInfo; // @synthesize authInfo;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (_Bool)canReportError;
- (int)cid;
- (id)init;

@end

