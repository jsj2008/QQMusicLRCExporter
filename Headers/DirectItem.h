//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SongInfo;

@interface DirectItem : NSObject
{
    _Bool _showFlag;
    _Bool _buluoFlag;
    int _directReachType;
    unsigned long long _id_;
    NSString *_maindiscription;
    NSString *_subDiscription;
    NSString *_jumpURL;
    NSString *_img;
    unsigned long long _singerUin;
    long long _singerType;
    SongInfo *_song;
}

@property(retain, nonatomic) SongInfo *song; // @synthesize song=_song;
@property(nonatomic) long long singerType; // @synthesize singerType=_singerType;
@property(nonatomic) unsigned long long singerUin; // @synthesize singerUin=_singerUin;
@property(nonatomic) _Bool buluoFlag; // @synthesize buluoFlag=_buluoFlag;
@property(nonatomic) _Bool showFlag; // @synthesize showFlag=_showFlag;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(retain, nonatomic) NSString *subDiscription; // @synthesize subDiscription=_subDiscription;
@property(retain, nonatomic) NSString *maindiscription; // @synthesize maindiscription=_maindiscription;
@property(nonatomic) unsigned long long id_; // @synthesize id_=_id_;
@property(nonatomic) int directReachType; // @synthesize directReachType=_directReachType;
- (void).cxx_destruct;
- (id)getResType;

@end
