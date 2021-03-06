//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ChannelCreator, FolderInfo, ItemPicInfo, ListBase, NSArray, NSDictionary, NSString, UIImage;

@interface ChannelItem : NSObject <NSCoding, NSCopying>
{
    _Bool _canNotDelete;
    _Bool _isVipChannel;
    _Bool _isExpired;
    _Bool _isBrand;
    _Bool _needsLogin;
    _Bool _isLock;
    _Bool _isDujia;
    _Bool _isDjChannel;
    _Bool _bNeedPlaySong;
    _Bool _directplay;
    int _bDisplayComment;
    int _RaddioPlay;
    long long _itemId;
    long long _typeId;
    long long _orderId;
    long long _orderType;
    NSString *_title;
    NSString *_subtitle;
    NSString *_bigPicUrl;
    NSString *_picUrl;
    NSString *_smallPicUrl;
    long long _subNumber;
    NSString *_formattedSubNumberStr;
    NSString *_metroTitle;
    NSString *_metroPicUrl;
    NSString *_metroSmallPicUrl;
    ListBase *_songList;
    ListBase *_mvList;
    NSString *_jumpUrl;
    UIImage *_cacheImage;
    NSString *_singerName;
    NSString *_mvtitle;
    ChannelCreator *_creator;
    FolderInfo *_taogeFolderInfo;
    NSString *_badgeImageUrl;
    long long _dirId;
    long long _subId;
    NSString *_action;
    long long _index;
    NSString *_avatarUrl;
    NSString *_backPicUrl;
    NSString *_nickName;
    NSString *_albumMid;
    ItemPicInfo *_itemPicInfo;
    NSDictionary *_tjReportInfo;
    long long _subscript;
    long long _groupID;
    NSString *_mvId;
    long long _songNumber;
    long long _focusId;
    NSDictionary *_extensionData;
    NSString *_coverId;
    NSDictionary *_stateInfo;
    NSArray *_fAdClickUrls;
    NSArray *_fAdExposureUrls;
    NSString *_author;
    long long _playCount;
    unsigned long long _recReasonCode;
    NSString *_strRightCornerImageUrl;
    NSString *_daBangString;
    NSString *_rankingDate;
}

+ (id)convertToDic:(id)arg1;
+ (id)getActionByType:(unsigned long long)arg1;
+ (_Bool)isMVType:(unsigned long long)arg1;
+ (id)translateFromFolderInfo:(id)arg1;
+ (id)getCreatorFromeFolder:(id)arg1;
@property(retain, nonatomic) NSString *rankingDate; // @synthesize rankingDate=_rankingDate;
@property(retain, nonatomic) NSString *daBangString; // @synthesize daBangString=_daBangString;
@property(retain, nonatomic) NSString *strRightCornerImageUrl; // @synthesize strRightCornerImageUrl=_strRightCornerImageUrl;
@property(nonatomic) unsigned long long recReasonCode; // @synthesize recReasonCode=_recReasonCode;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSArray *fAdExposureUrls; // @synthesize fAdExposureUrls=_fAdExposureUrls;
@property(retain, nonatomic) NSArray *fAdClickUrls; // @synthesize fAdClickUrls=_fAdClickUrls;
@property(nonatomic) _Bool directplay; // @synthesize directplay=_directplay;
@property(nonatomic) int RaddioPlay; // @synthesize RaddioPlay=_RaddioPlay;
@property(retain, nonatomic) NSDictionary *stateInfo; // @synthesize stateInfo=_stateInfo;
@property(nonatomic) _Bool bNeedPlaySong; // @synthesize bNeedPlaySong=_bNeedPlaySong;
@property(nonatomic) int bDisplayComment; // @synthesize bDisplayComment=_bDisplayComment;
@property(retain, nonatomic) NSString *coverId; // @synthesize coverId=_coverId;
@property(retain, nonatomic) NSDictionary *extensionData; // @synthesize extensionData=_extensionData;
@property(nonatomic) _Bool isDjChannel; // @synthesize isDjChannel=_isDjChannel;
@property(nonatomic) _Bool isDujia; // @synthesize isDujia=_isDujia;
@property(nonatomic) _Bool isLock; // @synthesize isLock=_isLock;
@property(nonatomic) long long focusId; // @synthesize focusId=_focusId;
@property(nonatomic) long long songNumber; // @synthesize songNumber=_songNumber;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId=_mvId;
@property(nonatomic) long long groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long subscript; // @synthesize subscript=_subscript;
@property(retain, nonatomic) NSDictionary *tjReportInfo; // @synthesize tjReportInfo=_tjReportInfo;
@property(retain, nonatomic) ItemPicInfo *itemPicInfo; // @synthesize itemPicInfo=_itemPicInfo;
@property(retain, nonatomic) NSString *albumMid; // @synthesize albumMid=_albumMid;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *backPicUrl; // @synthesize backPicUrl=_backPicUrl;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) long long subId; // @synthesize subId=_subId;
@property(nonatomic) long long dirId; // @synthesize dirId=_dirId;
@property(retain, nonatomic) NSString *badgeImageUrl; // @synthesize badgeImageUrl=_badgeImageUrl;
@property(retain, nonatomic) FolderInfo *taogeFolderInfo; // @synthesize taogeFolderInfo=_taogeFolderInfo;
@property(nonatomic) _Bool needsLogin; // @synthesize needsLogin=_needsLogin;
@property(retain, nonatomic) ChannelCreator *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *mvtitle; // @synthesize mvtitle=_mvtitle;
@property(retain, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(retain) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) ListBase *mvList; // @synthesize mvList=_mvList;
@property(retain, nonatomic) ListBase *songList; // @synthesize songList=_songList;
@property(retain, nonatomic) NSString *metroSmallPicUrl; // @synthesize metroSmallPicUrl=_metroSmallPicUrl;
@property(retain, nonatomic) NSString *metroPicUrl; // @synthesize metroPicUrl=_metroPicUrl;
@property(retain, nonatomic) NSString *metroTitle; // @synthesize metroTitle=_metroTitle;
@property(nonatomic) _Bool isBrand; // @synthesize isBrand=_isBrand;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) _Bool isVipChannel; // @synthesize isVipChannel=_isVipChannel;
@property(nonatomic) _Bool canNotDelete; // @synthesize canNotDelete=_canNotDelete;
@property(retain, nonatomic) NSString *formattedSubNumberStr; // @synthesize formattedSubNumberStr=_formattedSubNumberStr;
@property(nonatomic) long long subNumber; // @synthesize subNumber=_subNumber;
@property(retain, nonatomic) NSString *smallPicUrl; // @synthesize smallPicUrl=_smallPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *bigPicUrl; // @synthesize bigPicUrl=_bigPicUrl;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long typeId; // @synthesize typeId=_typeId;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isCurrentPlaying;
- (_Bool)hasLongVoice;
- (_Bool)bCanPlay;
- (_Bool)needsShowListenerNum;
- (id)iconImage;
- (id)getList;
- (id)getKey;
- (id)metroImageUrl;
- (id)metroImageFileName;
- (id)smallImageFileName;
- (id)bigImageFileName;
- (id)imageUrl;
- (id)imageFileName;
- (_Bool)isEqualContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

