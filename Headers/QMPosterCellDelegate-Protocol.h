//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, ShareLyricItem, UIScrollView, UITableView;

@protocol QMPosterCellDelegate <NSObject>

@optional
- (void)qmPosterTableLoadMore;
- (void)qmScrollViewDidScroll:(UIScrollView *)arg1;
- (void)qmPosterTableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)qmPosterTableViewDidSelect:(NSString *)arg1 item:(ShareLyricItem *)arg2;
@end

