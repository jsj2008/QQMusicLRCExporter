//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SpeedRecorder : NSObject
{
    NSMutableDictionary *_dic;
}

@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void).cxx_destruct;
- (double)_calcNextSpeed:(id)arg1;
- (double)guessNextSpeed;
- (void)addSpeed:(double)arg1;
- (id)init;

@end

