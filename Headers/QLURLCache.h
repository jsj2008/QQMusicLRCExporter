//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol QLASIHTTPDelegate;

@interface QLURLCache : NSObject
{
    id <QLASIHTTPDelegate> delegate;
}

- (void)useDataFromCache:(id)arg1;
- (_Bool)loadRequestFromCache:(id)arg1;
- (void)setURLCacheDelegate:(id)arg1;

@end
