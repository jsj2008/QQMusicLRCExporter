//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber;

@interface WaxTestObject : NSObject
{
    _Bool _initByLua;
    _Bool _isRetVoidMethodWithVoidParam;
    float _floatProperty;
    NSDictionary *_dictProperty;
    NSNumber *_numberProperty;
    struct CGRect _rectProperty;
}

+ (void)showAlertView:(id)arg1;
+ (id)retArrayClassMethodWithParam1:(double)arg1 param2:(double)arg2 param3:(double)arg3 param4:(double)arg4 param5:(double)arg5 param6:(double)arg6 param7:(double)arg7 param8:(double)arg8 param9:(double)arg9 param10:(double)arg10;
+ (id)objectWithObject:(id)arg1;
@property(nonatomic) _Bool isRetVoidMethodWithVoidParam; // @synthesize isRetVoidMethodWithVoidParam=_isRetVoidMethodWithVoidParam;
@property(nonatomic) _Bool initByLua; // @synthesize initByLua=_initByLua;
@property(retain, nonatomic) NSNumber *numberProperty; // @synthesize numberProperty=_numberProperty;
@property(retain, nonatomic) NSDictionary *dictProperty; // @synthesize dictProperty=_dictProperty;
@property(nonatomic) struct CGRect rectProperty; // @synthesize rectProperty=_rectProperty;
@property(nonatomic) float floatProperty; // @synthesize floatProperty=_floatProperty;
- (void).cxx_destruct;
- (_Bool)_underlineMethod_:(_Bool)arg1;
- (void)showInstanceAlertView:(id)arg1;
- (id)retArrayMethodWithParam1:(double)arg1 param2:(double)arg2 param3:(double)arg3 param4:(double)arg4 param5:(double)arg5 param6:(double)arg6 param7:(double)arg7 param8:(double)arg8 param9:(double)arg9 param10:(double)arg10;
- (void)blockParamMethod:(CDUnknownBlockType)arg1;
- (struct CGRect)retCGRectMethodWithCGRect:(struct CGRect)arg1;
- (id)retDicWithDict:(id)arg1;
- (id)retNumberSumMethod:(id)arg1 andB:(id)arg2;
- (float)retFloatSumMethod:(float)arg1 andB:(float)arg2;
- (id)retWaxTestObjectWithNumber:(id)arg1 andDic:(id)arg2 andCGRect:(struct CGRect)arg3 andFloat:(float)arg4;
- (void)retVoidMethodWithVoidParam;
- (id)callOCInit;
- (id)initForLua;
- (id)init;

@end
