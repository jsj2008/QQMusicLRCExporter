//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QMEncryptFileHandle : NSObject
{
}

+ (_Bool)decryptFile:(id)arg1 toFile:(id)arg2;
+ (struct _NSRange)rangeOfHeaderInData:(id)arg1 isEncrypted:(_Bool)arg2;
+ (long long)maxEncryptLength;
+ (id)encryptedData:(id)arg1 withRange:(struct _NSRange)arg2;
+ (id)encryptDataHeaders;
+ (id)readData:(id)arg1;
+ (id)readDataToEndOfFile:(id)arg1;
+ (id)fileHandle:(id)arg1 readDataOfLength:(unsigned long long)arg2;
+ (id)encryptFileData:(id)arg1;
+ (void)fileHandle:(id)arg1 writeData:(id)arg2;

@end
