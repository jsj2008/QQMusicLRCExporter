//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SyncUserFolderBase.h"

@class FolderInfo;

@interface SongListOrderProtocol : SyncUserFolderBase
{
    int _folderTS;
    unsigned long long _uin;
    FolderInfo *_folderInfo;
}

@property int folderTS; // @synthesize folderTS=_folderTS;
@property(retain) FolderInfo *folderInfo; // @synthesize folderInfo=_folderInfo;
@property unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)songTypeList:(id)arg1;
- (id)songIdList:(id)arg1;
- (_Bool)handleSyncProtocol:(id)arg1 protocolError:(id)arg2;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (_Bool)scanSyncContent;
- (int)cid;
- (id)initWithUin:(unsigned long long)arg1;

@end

