//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface ContentMsgProtocol : ProtocolBaseJason
{
    NSString *_songPayUrl;
    long long _limit;
    NSMutableDictionary *_msgMutableDic;
    NSMutableArray *_temptToLogin;
    NSMutableArray *_guessLikeMsgs;
    NSMutableDictionary *_downloadMsgs;
    NSMutableArray *_alertViewMutableArray;
    NSMutableDictionary *_configsDic;
    NSMutableDictionary *_IAPDic;
}

@property(retain, nonatomic) NSMutableDictionary *IAPDic; // @synthesize IAPDic=_IAPDic;
@property(retain, nonatomic) NSMutableDictionary *configsDic; // @synthesize configsDic=_configsDic;
@property(retain, nonatomic) NSMutableArray *alertViewMutableArray; // @synthesize alertViewMutableArray=_alertViewMutableArray;
@property(retain) NSMutableDictionary *downloadMsgs; // @synthesize downloadMsgs=_downloadMsgs;
@property(retain) NSMutableArray *guessLikeMsgs; // @synthesize guessLikeMsgs=_guessLikeMsgs;
@property(retain) NSMutableArray *temptToLogin; // @synthesize temptToLogin=_temptToLogin;
@property(retain, nonatomic) NSMutableDictionary *msgMutableDic; // @synthesize msgMutableDic=_msgMutableDic;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *songPayUrl; // @synthesize songPayUrl=_songPayUrl;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (id)getAlertViewMutableArray;
- (id)getGuessLikeMsgs;
- (id)getTemptToLogin;
- (id)getIAPDic;
- (id)getDownloadMsgs;
@property(readonly, nonatomic) __weak NSDictionary *msgDic;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)init;

@end
