//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class UILabel;

@interface FriendListenHeaderCell : QQMusicCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)fontSize;
- (int)qmCellType;
- (_Bool)showArrow;
- (void)onNotifySkinSettingChange:(id)arg1;
- (void)updateTittle:(id)arg1 withSubTittle:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

