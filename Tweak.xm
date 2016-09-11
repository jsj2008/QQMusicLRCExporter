#import "QQMusicDumper.h"
%group Hooks
%hook SongInfo
- (BOOL)playable:(BOOL)arg1 checkQPlay:(BOOL)arg2 checkCopyright:(BOOL)arg3{
	NSLog(@"SongInfo----playable:checkQPlay:checkCopyright:");
	return YES;
}
- (BOOL)isCreateRadioEnable{
	return YES;
}
- (BOOL)isAutoSaveEnable{
	return YES;
}
- (BOOL)isDownloadEnable{
	return YES;
}
- (BOOL)isShareEnable{
	return YES;
}
- (BOOL)isPlayEnable{
	return YES;
}
- (BOOL)isAddToEnable{
	return YES;
}
- (BOOL)isAddToLoveEnable{
	return YES;
}
%end
/*
%hook LyricManager
+ (id)getYInyiLyricFilePath:(id)arg1{
	id ret=%orig;
	NSLog(@"[LyricManager getYInyiLyricFilePath:%@]\n%@",arg1,ret);

	return ret;
}
+ (id)getTranslateLyricFilePath:(id)arg1{
	id ret=%orig;
	NSLog(@"[LyricManager getTranslateLyricFilePath:%@]\n%@",arg1,ret);

	return ret;
}
%end
*/
%end

%ctor{
%init(Hooks);
[QQMusicDumper Dump];


}