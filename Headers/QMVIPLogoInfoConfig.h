//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, QMVIPLogoInfo;

@interface QMVIPLogoInfoConfig : NSObject
{
    _Bool _isClickedLogo;
    _Bool _isShouldShowRedPoint;
    NSDate *_lastDismissDate;
    NSMutableArray *_operateTypeArray;
    unsigned long long _lastDunType;
    QMVIPLogoInfo *_lastGetVIPLogoInfo;
}

@property(retain, nonatomic) QMVIPLogoInfo *lastGetVIPLogoInfo; // @synthesize lastGetVIPLogoInfo=_lastGetVIPLogoInfo;
@property(nonatomic) _Bool isShouldShowRedPoint; // @synthesize isShouldShowRedPoint=_isShouldShowRedPoint;
@property(nonatomic) _Bool isClickedLogo; // @synthesize isClickedLogo=_isClickedLogo;
@property(nonatomic) unsigned long long lastDunType; // @synthesize lastDunType=_lastDunType;
@property(retain, nonatomic) NSMutableArray *operateTypeArray; // @synthesize operateTypeArray=_operateTypeArray;
@property(retain, nonatomic) NSDate *lastDismissDate; // @synthesize lastDismissDate=_lastDismissDate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

