//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BitmapHelper : NSObject
{
}

+ (struct CGContext *)newBitmapContextFromImageRef:(struct CGImage *)arg1;
+ (char *)convertUIImageToBitmap:(id)arg1 bitmapDataLength:(unsigned long long *)arg2 bitmapWidth:(unsigned long long *)arg3 bitmapHeight:(unsigned long long *)arg4;
+ (id)convertViewToUIImage:(id)arg1;
+ (_Bool)isRetina;

@end

