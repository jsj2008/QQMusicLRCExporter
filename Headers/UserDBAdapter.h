//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SongDBAdapter.h"

@interface UserDBAdapter : SongDBAdapter
{
}

+ (id)shareUserDBAdapter;
- (void)saveFolderCountToDB:(id)arg1;
- (void)changeFakeSongId:(id)arg1 fromCloudFolder:(id)arg2;
- (void)changeFolderId:(unsigned long long)arg1 toFolderId:(unsigned long long)arg2 FolderType:(int)arg3 forUser:(long long)arg4;
- (long long)getMaxFavoriteSongAddTime:(unsigned long long)arg1 folderId:(int)arg2;
- (_Bool)isSongInFolder:(id)arg1 FolderInfo:(id)arg2;
- (unsigned long long)getExistFileSongsCount:(id)arg1 uin:(unsigned long long)arg2;
- (unsigned long long)getSongsCount:(id)arg1 uin:(unsigned long long)arg2;
- (id)getSongs:(id)arg1 OrderBy:(id)arg2;
- (id)getSongsByFolder:(id)arg1 AndWhere:(id)arg2 OrderBy:(id)arg3;
- (id)getAllSongsByOldFolder:(id)arg1 AndWhere:(id)arg2 OrderBy:(id)arg3;
- (id)getNewFolderByUser:(unsigned long long)arg1 FolderId:(int)arg2 Tid:(long long)arg3 FolderType:(int)arg4;
- (id)getFolderByUser:(unsigned long long)arg1 FolderId:(int)arg2 FolderType:(int)arg3;
- (id)getFoldersByUser:(unsigned long long)arg1 OrderBy:(id)arg2;
- (_Bool)insertFolder:(id)arg1;
- (_Bool)updateSongPlayCount:(id)arg1;
- (_Bool)updateFolder:(id)arg1 colunmInfos:(id)arg2;
- (_Bool)updateFolder:(id)arg1;
- (_Bool)updateFolder:(id)arg1 Song:(id)arg2 colunmInfos:(id)arg3 extraWhere:(id)arg4;
- (_Bool)updateFolder:(id)arg1 Songs:(id)arg2 colunmInfos:(id)arg3 extraWhere:(id)arg4;
- (_Bool)insertFolder:(id)arg1 Song:(id)arg2 ExpInfo:(id)arg3;
- (void)insertFolder:(id)arg1 SongWithExpInfos:(id)arg2;
- (void)insertFolderByFolderSongs:(id)arg1 FolderSongs:(id)arg2;
- (void)insertFolderByFolderSongs_DB13:(id)arg1 FolderSongs:(id)arg2;
- (void)deleteFolder:(id)arg1 Songs:(id)arg2;
- (void)deleteFolder2:(id)arg1 SongWithExpInfos:(id)arg2;
- (void)deleteFolderByFolderSongs:(id)arg1 folderSongs:(id)arg2;
- (_Bool)isExistDB:(id)arg1 Folder:(id)arg2;
- (_Bool)insertDB:(id)arg1 Folder:(id)arg2 Song:(id)arg3 ExpInfo:(id)arg4;
- (_Bool)deleteDB:(id)arg1 Folder:(id)arg2 SongId:(unsigned long long)arg3 Type:(int)arg4;
- (_Bool)clearFolder:(id)arg1;
- (_Bool)updateUinToDeletedBySeq:(int)arg1;
- (_Bool)deleteFolderBySeq:(int)arg1 deleteWaitSynSongs:(_Bool)arg2;
- (_Bool)deleteFolderBySeq:(int)arg1;
- (_Bool)deleteLocalByUin:(unsigned long long)arg1 Folder:(int)arg2 deleteWaitSynSongs:(_Bool)arg3;
- (_Bool)deleteLocalByUin:(unsigned long long)arg1 Folder:(int)arg2;
- (_Bool)createTable:(id)arg1 newFolderTableName:(id)arg2 newFolderSongTableName:(id)arg3;
- (_Bool)createTable:(id)arg1 folderTableName:(id)arg2 folderSongTableName:(id)arg3;
- (void)deleteUnusedSong:(id)arg1;
- (_Bool)deleteFolder:(id)arg1 SongId:(unsigned long long)arg2 SongType:(int)arg3;
- (_Bool)isDB:(id)arg1 UsingSongId:(unsigned long long)arg2 SongType:(int)arg3;
- (_Bool)testNewfolderSongTable;
- (_Bool)testNewFolderTable;
- (_Bool)testSongTable;
- (void)rebuildDB;
- (_Bool)isDBTestSuccess;

@end
