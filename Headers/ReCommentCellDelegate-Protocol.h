//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ChannelCreator, FeedCommentInfo, MusicCircleFeed;

@protocol ReCommentCellDelegate <NSObject>
- (void)showDeleteActionSheet:(FeedCommentInfo *)arg1 feedInfo:(MusicCircleFeed *)arg2;
- (void)reCommentActionStart:(FeedCommentInfo *)arg1 feed:(MusicCircleFeed *)arg2 withSender:(id)arg3;
- (void)creatorViewDidClick:(ChannelCreator *)arg1;
@end
