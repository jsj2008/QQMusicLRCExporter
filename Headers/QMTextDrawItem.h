//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMDrawItem.h"

@class NSString, UIColor, UIFont;

@interface QMTextDrawItem : QMDrawItem
{
    NSString *_str;
    UIFont *_font;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *str; // @synthesize str=_str;
- (void).cxx_destruct;
- (void)draw;
- (id)initWithStr:(id)arg1 rect:(struct CGRect)arg2 font:(id)arg3 color:(id)arg4;

@end

