//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QLJumperScript : NSObject
{
}

+ (id)varAtScript:(id)arg1 VarDict:(map_94930aea *)arg2 forKey:(id)arg3 IsReplace:(_Bool)arg4;
+ (void)runOneLineScript:(id)arg1 VarDict:(map_94930aea *)arg2 ReturnValue:(id *)arg3;
+ (void)skipFalseLineScript:(id)arg1 VarDict:(map_94930aea *)arg2 ReturnValue:(id *)arg3 Iterator:(unsigned long long *)arg4 Count:(unsigned long long)arg5;
+ (void)runTrueLineScript:(id)arg1 VarDict:(map_94930aea *)arg2 ReturnValue:(id *)arg3 Iterator:(unsigned long long *)arg4 Count:(unsigned long long)arg5;
+ (id)runCodeBlock:(id)arg1 VarDict:(map_94930aea *)arg2;
+ (id)run:(id)arg1 externalVarDict:(id)arg2;

@end
