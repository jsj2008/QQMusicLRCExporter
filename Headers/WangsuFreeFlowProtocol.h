//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class WangsuFreeFlowItem;

@interface WangsuFreeFlowProtocol : ProtocolBaseJason
{
    int _type;
    WangsuFreeFlowItem *_freeFlowItem;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) WangsuFreeFlowItem *freeFlowItem; // @synthesize freeFlowItem=_freeFlowItem;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (_Bool)isForbiddenFreeFlow;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end

