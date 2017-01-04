//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface QMXMLDictionaryParser : NSObject <NSXMLParserDelegate>
{
    NSMutableDictionary *root;
    NSMutableArray *stack;
    NSMutableString *text;
}

+ (id)xmlStringForNode:(id)arg1 withNodeName:(id)arg2;
+ (id)dictionaryWithXMLFile:(id)arg1;
+ (id)dictionaryWithXMLData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack;
@property(retain, nonatomic) NSMutableDictionary *root; // @synthesize root;
@property(retain, nonatomic) NSMutableString *text; // @synthesize text;
- (void).cxx_destruct;
- (void)parser:(id)arg1 foundComment:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (id)nameForNode:(id)arg1 inDictionary:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)addText:(id)arg1;
- (void)endText;
@property(readonly, nonatomic) NSMutableDictionary *top;
- (id)initWithXMLData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
