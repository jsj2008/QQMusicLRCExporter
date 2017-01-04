//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TADHTTPResponse-Protocol.h"

@class NSMutableData;

@interface TADHttpDataResponse : NSObject <TADHTTPResponse>
{
    unsigned long long offset;
    NSMutableData *_data;
    unsigned long long _contentLength;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)writeStepLog:(id)arg1;
- (_Bool)isAllDataSended;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)appendData:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentLength:(unsigned long long)arg2 range:(struct _NSRange)arg3;

@end
