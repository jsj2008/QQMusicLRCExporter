//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SongInfo;
@protocol QPlayQueueDataSoucce;

@protocol QPlayQueueDataSoucce <NSObject>
- (SongInfo *)returnCurrentSong;
- (SongInfo *)songInTheDataSourceById:(unsigned long long)arg1;
- (SongInfo *)songInTheDataSource:(NSString *)arg1;
- (_Bool)isSameQDataSource:(id <QPlayQueueDataSoucce>)arg1;
- (NSArray *)qplayQueueSongs:(SongInfo *)arg1 queueCapability:(unsigned long long)arg2;
@end
