include $(THEOS)/makefiles/common.mk

TWEAK_NAME = QQMusicLRCExporter
QQMusicLRCExporter_FILES = Tweak.xm SQLHelper.m QQMusicDumper.m DLLRCParser.m
QQMusicLRCExporter_LIBRARIES=sqlite3
include $(THEOS_MAKE_PATH)/tweak.mk


