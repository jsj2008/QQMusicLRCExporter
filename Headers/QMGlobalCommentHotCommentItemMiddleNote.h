//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QMGlobalCommentHotCommentItemMiddleNote : NSObject
{
    unsigned long long _replyerUin;
    NSString *_replyerNick;
    unsigned long long _beReplyedUin;
    NSString *_beReplyedNick;
    NSString *_commentId;
    NSString *_commentContent;
}

+ (id)translateQMGlobalCommentHotCommentItemMiddleNoteFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *beReplyedNick; // @synthesize beReplyedNick=_beReplyedNick;
@property(nonatomic) unsigned long long beReplyedUin; // @synthesize beReplyedUin=_beReplyedUin;
@property(retain, nonatomic) NSString *replyerNick; // @synthesize replyerNick=_replyerNick;
@property(nonatomic) unsigned long long replyerUin; // @synthesize replyerUin=_replyerUin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

