#import "QQMusicDumper.h"
%group Hooks
%hook SongInfo
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

%end

%ctor{
%init(Hooks);
[QQMusicDumper Dump];


}