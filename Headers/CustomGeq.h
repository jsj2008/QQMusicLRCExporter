//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DCAGeqPreset, NSMutableArray, NSString;

@interface CustomGeq : NSObject
{
    NSString *_name;
    DCAGeqPreset *_geqPreset;
    long long _bass;
    long long _mid;
    long long _treb;
    NSMutableArray *_geqBands;
}

@property(retain, nonatomic) NSMutableArray *geqBands; // @synthesize geqBands=_geqBands;
@property(nonatomic) long long treb; // @synthesize treb=_treb;
@property(nonatomic) long long mid; // @synthesize mid=_mid;
@property(nonatomic) long long bass; // @synthesize bass=_bass;
@property(retain, nonatomic) DCAGeqPreset *geqPreset; // @synthesize geqPreset=_geqPreset;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getGeqPreset;
- (id)initWithName:(id)arg1 GeqBands:(id)arg2 bass:(long long)arg3 mid:(long long)arg4 treb:(long long)arg5;

@end

