//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "QMPosterCellDelegate-Protocol.h"

@class NSArray, NSString, QMPosterTableDelegate, UIButton, UILabel, UIView;
@protocol QMShareLyricListViewDelegate;

@interface QMPosterLyricTableView : UITableView <QMPosterCellDelegate>
{
    id <QMShareLyricListViewDelegate> _shareDelegate;
    NSArray *_arrayData;
    UILabel *_lblSongInfo;
    QMPosterTableDelegate *_tableDeleage;
    UIButton *_btnTranslateLyric;
    UIView *_errorView;
    UILabel *_lblMsg;
    UIButton *_btn;
}

@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UILabel *lblMsg; // @synthesize lblMsg=_lblMsg;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIButton *btnTranslateLyric; // @synthesize btnTranslateLyric=_btnTranslateLyric;
@property(retain, nonatomic) QMPosterTableDelegate *tableDeleage; // @synthesize tableDeleage=_tableDeleage;
@property(retain, nonatomic) UILabel *lblSongInfo; // @synthesize lblSongInfo=_lblSongInfo;
@property(retain, nonatomic) NSArray *arrayData; // @synthesize arrayData=_arrayData;
@property(nonatomic) __weak id <QMShareLyricListViewDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (void).cxx_destruct;
- (void)removeAllConnection;
- (void)qmScrollViewDidScroll:(id)arg1;
- (void)btnPressed:(id)arg1;
- (void)onTranslateLyricClick:(id)arg1;
- (void)btnReloadPressed:(id)arg1;
- (void)changeBtnTanslateLyricState:(unsigned long long)arg1 hideBtn:(_Bool)arg2;
- (void)qmPosterTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)showLoadingView;
- (void)showEmptyLyric;
- (void)showErrorView:(_Bool)arg1;
- (void)showDefaultLyricState;
- (id)qmtableHeaderView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
