//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FolderSongsTabVC.h"

@protocol TabScrollDelegate;

@interface FirstReleaseSongFolderViewController : FolderSongsTabVC
{
    _Bool _isLoadingFromNet;
    id <TabScrollDelegate> _tabDelegate;
}

@property(nonatomic) __weak id <TabScrollDelegate> tabDelegate; // @synthesize tabDelegate=_tabDelegate;
@property(nonatomic) _Bool isLoadingFromNet; // @synthesize isLoadingFromNet=_isLoadingFromNet;
- (void).cxx_destruct;
- (struct CGRect)reFrame;
- (id)_buildCommonClearView;
- (void)getData;

@end

