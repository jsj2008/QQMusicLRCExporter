//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMBaseModel.h"

@class NSArray, ProfileCreator;

@interface ProfileDataItem : QMBaseModel
{
    ProfileCreator *_creator;
    NSArray *_cards;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) ProfileCreator *creator; // @synthesize creator=_creator;
- (void).cxx_destruct;

@end

