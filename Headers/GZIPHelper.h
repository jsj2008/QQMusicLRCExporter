//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GZIPHelper : NSObject
{
}

+ (int)compressDataFromSource:(struct __sFILE *)arg1 toDestination:(struct __sFILE *)arg2;
+ (int)compressDataFromFile:(id)arg1 toFile:(id)arg2;
+ (id)compressData:(id)arg1;
+ (int)uncompressZippedDataFromSource:(struct __sFILE *)arg1 toDestination:(struct __sFILE *)arg2;
+ (int)uncompressZippedDataFromFile:(id)arg1 toFile:(id)arg2;
+ (id)uncompressZippedData:(id)arg1;

@end
