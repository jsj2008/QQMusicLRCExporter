//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HostIpTable : NSObject
{
    _Bool _hostIsIpFormat;
    int _httpResponseCode;
    NSString *_hostOriginal;
    NSString *_hostReplacedTo;
    NSString *_ip;
}

@property int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property _Bool hostIsIpFormat; // @synthesize hostIsIpFormat=_hostIsIpFormat;
@property(retain) NSString *ip; // @synthesize ip=_ip;
@property(retain) NSString *hostReplacedTo; // @synthesize hostReplacedTo=_hostReplacedTo;
@property(retain) NSString *hostOriginal; // @synthesize hostOriginal=_hostOriginal;
- (void).cxx_destruct;
- (id)description;

@end

