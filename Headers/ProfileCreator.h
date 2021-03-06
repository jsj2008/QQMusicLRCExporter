//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMBaseModel.h"

@class NSArray, NSString, ProfileBackPic, ProfileBgMusic, ProfileMedal;

@interface ProfileCreator : QMBaseModel
{
    _Bool _isFollow;
    _Bool _isLock;
    NSString *_nick;
    NSString *_headpicUrl;
    unsigned long long _uin;
    unsigned long long _type;
    unsigned long long _singerId;
    NSArray *_lvInfos;
    ProfileMedal *_medal;
    ProfileBackPic *_backPic;
    ProfileBgMusic *_bgMusic;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) ProfileBgMusic *bgMusic; // @synthesize bgMusic=_bgMusic;
@property(retain, nonatomic) ProfileBackPic *backPic; // @synthesize backPic=_backPic;
@property(retain, nonatomic) ProfileMedal *medal; // @synthesize medal=_medal;
@property(retain, nonatomic) NSArray *lvInfos; // @synthesize lvInfos=_lvInfos;
@property(nonatomic) _Bool isLock; // @synthesize isLock=_isLock;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) unsigned long long singerId; // @synthesize singerId=_singerId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *headpicUrl; // @synthesize headpicUrl=_headpicUrl;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;

@end

