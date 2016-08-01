#import "QQMusicDumper.h"
/*%group DebugHooks
%hook SongInfo
- (id)initWithSongType:(int)arg1 songID:(long long)arg2{
	id ret=%orig;
	NSLog(@"[SongInfo initWithSongType:%i songID:%lli ]\n%@",arg1,arg2,ret);
	return ret;
}
%end
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

%end

*/
%ctor{
//%init(DebugHooks);
[QQMusicDumper Dump];


}