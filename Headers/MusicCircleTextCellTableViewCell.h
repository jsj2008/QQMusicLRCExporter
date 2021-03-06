//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QQMusicCell.h"

@class MusicCircleFeed, NSString, UIImageView, UILabel, UIView;
@protocol MusicCircleTextCellTableViewCellDelegate;

@interface MusicCircleTextCellTableViewCell : QQMusicCell
{
    UIView *_zanBgView;
    UIImageView *_commentImageView;
    UILabel *_commentSumLabel;
    long long _textNumberValue;
    NSString *_textUnitValue;
    MusicCircleFeed *_feed;
    UIImageView *_zanButton;
    id <MusicCircleTextCellTableViewCellDelegate> _delegate;
    UIImageView *_zanSanjiaoView;
}

@property(retain, nonatomic) UIImageView *zanSanjiaoView; // @synthesize zanSanjiaoView=_zanSanjiaoView;
@property(nonatomic) __weak id <MusicCircleTextCellTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *zanButton; // @synthesize zanButton=_zanButton;
@property(retain, nonatomic) MusicCircleFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) NSString *textUnitValue; // @synthesize textUnitValue=_textUnitValue;
@property(nonatomic) long long textNumberValue; // @synthesize textNumberValue=_textNumberValue;
@property(retain, nonatomic) UILabel *commentSumLabel; // @synthesize commentSumLabel=_commentSumLabel;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UIView *zanBgView; // @synthesize zanBgView=_zanBgView;
- (void).cxx_destruct;
- (int)qmCellType;
- (void)doZanAction:(id)arg1;
- (void)setFeed:(id)arg1 title:(id)arg2 isZan:(_Bool)arg3;
- (void)updateDetailInfo:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

