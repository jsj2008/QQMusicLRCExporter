//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WBBaseMediaObject, WBImageObject;

@interface WBMessageObject : NSObject
{
    NSString *text;
    WBImageObject *imageObject;
    WBBaseMediaObject *mediaObject;
}

+ (id)messageWithDictionary:(id)arg1;
+ (id)dictionaryWithMessage:(id)arg1;
+ (id)message;
@property(retain, nonatomic) WBBaseMediaObject *mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) WBImageObject *imageObject; // @synthesize imageObject;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)validate;

@end
