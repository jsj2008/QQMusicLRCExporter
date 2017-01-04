//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ChannelCreator, NSAttributedString, NSString;

@interface MusicCircleActionInfo : NSObject
{
    int _type;
    int _userType;
    int _serverFeedType;
    int _serverFeedSubType;
    ChannelCreator *_owner;
    ChannelCreator *_replayCommentUser;
    long long _time;
    NSString *_msg;
    NSAttributedString *_attributeString;
    NSString *_pic;
    NSString *_feedId;
    long long _singerId;
    NSString *_commentID;
    unsigned long long _contentID;
}

+ (id)attributedMessageString:(id)arg1;
+ (id)translateFromJsonData:(id)arg1;
@property(nonatomic) int serverFeedSubType; // @synthesize serverFeedSubType=_serverFeedSubType;
@property(nonatomic) int serverFeedType; // @synthesize serverFeedType=_serverFeedType;
@property(nonatomic) unsigned long long contentID; // @synthesize contentID=_contentID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(nonatomic) long long singerId; // @synthesize singerId=_singerId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSAttributedString *attributeString; // @synthesize attributeString=_attributeString;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) ChannelCreator *replayCommentUser; // @synthesize replayCommentUser=_replayCommentUser;
@property(retain, nonatomic) ChannelCreator *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)imageFileName:(id)arg1;
- (id)picFileName;
- (id)oppicFileName;
- (id)description;

@end
