//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChannelV4CellData.h"

@class DarenItem;

@interface ChannelV4CellDataForDaren : ChannelV4CellData
{
    DarenItem *_darenItem;
    int *_cellType;
    id _buttonActionTarget;
    SEL _buttonAction;
}

@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) __weak id buttonActionTarget; // @synthesize buttonActionTarget=_buttonActionTarget;
@property(nonatomic) int *cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) DarenItem *darenItem; // @synthesize darenItem=_darenItem;
- (void).cxx_destruct;
- (long long)type;

@end

