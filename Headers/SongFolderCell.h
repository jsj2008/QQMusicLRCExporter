//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComRootCell.h"

#import "ImageManagerDelegate-Protocol.h"

@class NSString;

@interface SongFolderCell : ComRootCell <ImageManagerDelegate>
{
    NSString *_imageFileName;
}

@property(retain, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
- (void).cxx_destruct;
- (int)qmCellType;
- (void)enableCell:(_Bool)arg1;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 Image:(id)arg2;
- (void)setLastRow:(_Bool)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

