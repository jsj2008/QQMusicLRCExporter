//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QQJSWebViewPluginEngine : NSObject
{
    NSMutableDictionary *_pluginConfigs;
    NSMutableDictionary *_initialPluginsClass;
    NSMutableDictionary *_pluginInstances;
}

+ (id)getInstance;
@property(readonly, nonatomic) NSMutableDictionary *pluginInstances; // @synthesize pluginInstances=_pluginInstances;
@property(readonly, nonatomic) NSMutableDictionary *initialPluginsClass; // @synthesize initialPluginsClass=_initialPluginsClass;
@property(readonly, nonatomic) NSMutableDictionary *pluginConfigs; // @synthesize pluginConfigs=_pluginConfigs;
- (void).cxx_destruct;
- (id)getWebView:(id)arg1;
- (_Bool)configContains:(id)arg1 withMethod:(id)arg2;
- (id)getWebviewKey:(id)arg1;
- (Class)pluginClassFor:(id)arg1;
- (id)emptyInstances;
- (id)instantiatePluginInstanceClassNamed:(id)arg1 forWebview:(id)arg2;
- (id)pluginInstanceClassNamed:(id)arg1 forWebview:(id)arg2;
- (id)instanceForModule:(id)arg1 andMethod:(id)arg2 andWebview:(id)arg3;
- (_Bool)dispatchModule:(id)arg1 andMethod:(id)arg2 withQuery:(id)arg3 withCallback:(id)arg4 fromWebview:(id)arg5;
- (_Bool)handleNotificationRequest:(id)arg1;
- (_Bool)handleOpenUrlRequest:(id)arg1;
- (_Bool)handleSchemaRequest:(id)arg1 fromWebview:(id)arg2;
- (_Bool)isValidUrl:(id)arg1;
- (_Bool)triggerEvent:(id)arg1 params:(id)arg2 mode:(int)arg3 fromWebview:(id)arg4;
- (_Bool)removeEventObserver:(id)arg1 inWebview:(id)arg2;
- (_Bool)addEventObserver:(id)arg1 inWebview:(id)arg2;
- (void)handleWebviewDestory:(id)arg1;
- (void)handleWebviewInit:(id)arg1;
- (id)init;

@end

