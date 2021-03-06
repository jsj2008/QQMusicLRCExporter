//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSMutableArray, NSString;

@interface FolderInfo : ClusterInfo
{
    int seq;
    unsigned long long folder_QQ;
    int folder_ID;
    unsigned long long tid;
    unsigned long long folder_TimeTag;
    int folder_Count;
    int folder_offline_Count;
    BOOL folder_Update;
    int folder_Op;
    _Bool editable;
    unsigned long long folder_create_Time;
    int folder_synType;
    int folder_order;
    NSMutableArray *folderSongs;
    NSString *folder_oldName;
    int eFolderSongStatus;
    _Bool folder_AutoSyn;
    int folder_type;
    int _folder_subType;
    int _folder_Buy;
    NSString *folder_from;
    unsigned long long folder_fromqq;
    NSString *folder_fromIcon;
    NSString *folder_Icon;
    NSString *folderDesc;
    NSString *folderTagIds;
    NSString *folderTagNames;
    NSString *_folder_Buypage;
    double _folder_Price;
    NSString *_folder_BuyUrl;
    NSString *_strCommentUrl;
    NSString *_md5OfSongs;
}

+ (id)getAutoSavedFolder;
+ (id)md5OfSongs:(id)arg1;
+ (void)addXmlNode:(struct _xmlNode *)arg1 FolderInfo:(id)arg2 IncludeName:(_Bool)arg3;
+ (unsigned long long)firstSongInfoInFolderSongs:(id)arg1 songInfo:(id)arg2;
+ (_Bool)isUserOnlineFolderByUin:(unsigned long long)arg1 folderId:(int)arg2 foldType:(int)arg3;
+ (_Bool)isUserLocalFolderByUin:(unsigned long long)arg1 folderId:(int)arg2 foldType:(int)arg3;
+ (_Bool)isUserFolderByUin:(unsigned long long)arg1 folderId:(int)arg2 foldType:(int)arg3;
+ (_Bool)isTaoFolderByUin:(unsigned long long)arg1 folderId:(int)arg2 foldType:(int)arg3;
+ (_Bool)isSystemFolderByUin:(unsigned long long)arg1 folderId:(int)arg2 foldType:(int)arg3;
+ (id)getKeyByUin:(unsigned long long)arg1 FolderId:(int)arg2 FolderType:(int)arg3 Tid:(unsigned long long)arg4;
+ (id)getKey:(id)arg1;
@property(retain) NSString *md5OfSongs; // @synthesize md5OfSongs=_md5OfSongs;
@property(retain) NSString *strCommentUrl; // @synthesize strCommentUrl=_strCommentUrl;
@property(retain) NSString *folder_BuyUrl; // @synthesize folder_BuyUrl=_folder_BuyUrl;
@property double folder_Price; // @synthesize folder_Price=_folder_Price;
@property(retain) NSString *folder_Buypage; // @synthesize folder_Buypage=_folder_Buypage;
@property int folder_Buy; // @synthesize folder_Buy=_folder_Buy;
@property int folder_subType; // @synthesize folder_subType=_folder_subType;
@property(retain) NSString *folderTagNames; // @synthesize folderTagNames;
@property(retain) NSString *folderTagIds; // @synthesize folderTagIds;
@property(retain) NSString *folderDesc; // @synthesize folderDesc;
@property(retain) NSString *folder_fromIcon; // @synthesize folder_fromIcon;
@property unsigned long long folder_fromqq; // @synthesize folder_fromqq;
@property int folder_type; // @synthesize folder_type;
@property(retain) NSString *folder_from; // @synthesize folder_from;
@property(retain) NSString *folder_oldName; // @synthesize folder_oldName;
@property int eFolderSongStatus; // @synthesize eFolderSongStatus;
@property(retain) NSMutableArray *folderSongs; // @synthesize folderSongs;
@property int folder_order; // @synthesize folder_order;
@property int folder_synType; // @synthesize folder_synType;
@property unsigned long long folder_create_Time; // @synthesize folder_create_Time;
@property _Bool folder_AutoSyn; // @synthesize folder_AutoSyn;
@property _Bool editable; // @synthesize editable;
@property int folder_Op; // @synthesize folder_Op;
@property BOOL folder_Update; // @synthesize folder_Update;
@property int folder_offline_Count; // @synthesize folder_offline_Count;
@property int folder_Count; // @synthesize folder_Count;
@property unsigned long long folder_TimeTag; // @synthesize folder_TimeTag;
@property unsigned long long tid; // @synthesize tid;
@property int folder_ID; // @synthesize folder_ID;
@property(readonly) unsigned long long folder_QQ; // @synthesize folder_QQ;
@property int seq; // @synthesize seq;
- (void).cxx_destruct;
- (_Bool)needSynOrder;
- (id)cloneFolderSongs;
- (_Bool)isLoveFolderOfCurrentUser;
- (_Bool)isLoveFolderOfUin:(unsigned long long)arg1;
- (_Bool)isAutoSavedFolder;
- (_Bool)isAutoSavingFolder;
- (_Bool)isRecentPlayFolder;
- (_Bool)isDownloadedFolder;
- (_Bool)isDownloadingFolder;
- (_Bool)isUserOnlineFolder;
- (_Bool)isUserLocalFolder;
- (_Bool)isForbitByCreator;
- (_Bool)isDeletedByCreator;
- (_Bool)isTaoFolder;
- (_Bool)isUserFolder;
- (_Bool)isSystemFolder;
- (long long)compareByOrder:(id)arg1;
- (void)setFolderIcon:(id)arg1 preferLocalPath:(_Bool)arg2;
@property(readonly) NSString *folder_Icon; // @synthesize folder_Icon;
- (long long)compareByCreateTime:(id)arg1;
- (long long)compareByFolderId:(id)arg1;
- (_Bool)isEqualContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)folder_Name;
- (void)setFolder_Name:(id)arg1;
- (id)getCreator;
- (id)translateToSongListItem;
- (void)internalInit;
- (id)initWithQQ:(unsigned long long)arg1 folderId:(int)arg2 FolderType:(int)arg3 Tid:(unsigned long long)arg4;
- (id)init;

@end

