//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QMDetectIPStack : NSObject
{
    unsigned int _currentIPStackType;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int currentIPStackType; // @synthesize currentIPStackType=_currentIPStackType;
- (unsigned int)detectIPStackType;
- (id)init;

@end
