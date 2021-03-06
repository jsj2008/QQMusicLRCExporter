//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIImage;

@interface DBImageColorPicker : NSObject
{
    UIImage *_image;
    long long _backgroundType;
    UIColor *_backgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initFromImage:(id)arg1 withBackgroundType:(long long)arg2;
- (id)init;

@end

