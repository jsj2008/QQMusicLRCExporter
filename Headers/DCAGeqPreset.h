//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DCAPBWExport.h"

@class NSArray, NSString;
@protocol DCAReaderWriterInterface;

@interface DCAGeqPreset : DCAPBWExport
{
    _Bool _readerWriterManagedByOwningContext;
    id <DCAReaderWriterInterface> _readerWriterInterface;
}

+ (_Bool)isValidGeqBandKey:(id)arg1;
+ (float)clampedInputGainInDb:(float)arg1;
+ (float)clampedGeqBandGainInDb:(float)arg1;
+ (float)inputGainbandGainDBFloatFromGainInt:(int)arg1;
+ (int)inputbandGainIntFromDBFloat:(float)arg1;
+ (float)bandGainDBFloatFromGainInt:(int)arg1;
+ (int)bandGainIntFromDBFloat:(float)arg1;
+ (id)getPresetFrom:(id)arg1;
+ (id)newPreset;
@property(nonatomic) _Bool readerWriterManagedByOwningContext; // @synthesize readerWriterManagedByOwningContext=_readerWriterManagedByOwningContext;
@property(nonatomic) __weak id <DCAReaderWriterInterface> readerWriterInterface; // @synthesize readerWriterInterface=_readerWriterInterface;
- (void).cxx_destruct;
- (void)performAsyncWriteTask:(CDUnknownBlockType)arg1 withTag:(id)arg2;
- (void)performSyncReadTask:(CDUnknownBlockType)arg1 withTag:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithBandValuesFromPreset:(id)arg1;
- (id)getDictionary;
- (void)applyToWorkspace;
- (void)applyToProcessingOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)init;
- (id)getInputGain;
- (void)setInputGain:(id)arg1;
- (id)getEnable;
- (void)setEnable:(id)arg1;
- (id)get9Band16KHz;
- (id)get8Band8KHz;
- (id)get7Band4KHz;
- (id)get6Band2KHz;
- (id)get5Band1KHz;
- (id)get4Band500Hz;
- (id)get3Band250Hz;
- (id)get2Band125Hz;
- (id)get1Band62Hz;
- (id)get0Band31Hz;
- (void)set9Band16KHz:(id)arg1;
- (void)set8Band8KHz:(id)arg1;
- (void)set7Band4KHz:(id)arg1;
- (void)set6Band2KHz:(id)arg1;
- (void)set5Band1KHz:(id)arg1;
- (void)set4Band500Hz:(id)arg1;
- (void)set3Band250Hz:(id)arg1;
- (void)set2Band125Hz:(id)arg1;
- (void)set1Band62Hz:(id)arg1;
- (void)set0Band31Hz:(id)arg1;
@property(retain) NSArray *geqBands;
- (id)getGeqBandGainArray;
- (id)getDbGainForInputGain;
- (void)setInputGainToGainInDb:(id)arg1;
- (id)getDbGainForGeqBand:(id)arg1;
- (void)setGeqBand:(id)arg1 toGainInDb:(id)arg2;
- (void)setGeqSetting_Internal:(id)arg1 value:(id)arg2;
- (id)getGeqSetting_Internal:(id)arg1;
- (void)setGeqSetting:(id)arg1 value:(id)arg2;
- (id)getGeqSetting:(id)arg1;
@property(retain) NSString *languagePack;
@property(retain) NSString *type;
@property(retain) NSString *name;
@property(retain) NSString *uuid;

@end

