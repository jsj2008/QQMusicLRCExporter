//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  4 2017 14:06:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, ProxyIpAddresses;

@interface ProxyIpAddressesManager : NSObject
{
    _Bool _modified;
    _Bool _isDnsSuccess;
    _Bool _isServerIpRefreshing;
    _Bool _isServerIpCGISuccess;
    NSString *_networkStatusName;
    ProxyIpAddresses *_proxyIpAddresses;
    long long _lastRefreshDNSTime;
    long long _refreshDNSCount;
    long long _refreshServerIpFailedCount;
    long long _backupIpTesting;
    long long _backupIpTestCount;
}

@property long long backupIpTestCount; // @synthesize backupIpTestCount=_backupIpTestCount;
@property long long backupIpTesting; // @synthesize backupIpTesting=_backupIpTesting;
@property _Bool isServerIpCGISuccess; // @synthesize isServerIpCGISuccess=_isServerIpCGISuccess;
@property _Bool isServerIpRefreshing; // @synthesize isServerIpRefreshing=_isServerIpRefreshing;
@property long long refreshServerIpFailedCount; // @synthesize refreshServerIpFailedCount=_refreshServerIpFailedCount;
@property _Bool isDnsSuccess; // @synthesize isDnsSuccess=_isDnsSuccess;
@property long long refreshDNSCount; // @synthesize refreshDNSCount=_refreshDNSCount;
@property long long lastRefreshDNSTime; // @synthesize lastRefreshDNSTime=_lastRefreshDNSTime;
@property _Bool modified; // @synthesize modified=_modified;
@property(retain) ProxyIpAddresses *proxyIpAddresses; // @synthesize proxyIpAddresses=_proxyIpAddresses;
@property(retain) NSString *networkStatusName; // @synthesize networkStatusName=_networkStatusName;
- (void).cxx_destruct;
- (id)getIPWithHostName:(id)arg1;
- (void)setIp:(id)arg1 score:(long long)arg2 eIpFrom:(long long)arg3;
- (void)addIpsToScore:(id)arg1 eIpFrom:(long long)arg2;
- (long long)defaultScoreByIpFrom:(long long)arg1;
- (void)addIps:(id)arg1 toDomain:(id)arg2;
- (id)ipListByDomainName:(id)arg1;
- (void)testIpConnection:(id)arg1 eIpFrom:(long long)arg2;
- (_Bool)isIpConnectionOK:(id)arg1;
- (_Bool)isConnectionTestDataMatch:(id)arg1;
- (void)backgroundResolveDNSIp;
- (void)backgroundTestBackupIp;
- (id)parseIpFromServer:(id)arg1 protocolError:(long long *)arg2;
- (void)fetchIpFromServer;
- (void)asyncRefreshIpList:(id)arg1;
- (long long)scoreDeltaByProtocolError:(long long)arg1;
- (id)orderIpAddress:(id)arg1 byScore:(id)arg2;
- (id)getBestIpAddressFromList:(id)arg1 ipAddress2Score:(id)arg2;
- (void)feedbackIp:(id)arg1 eProtocolError:(long long)arg2;
- (id)getBestIpAddressList;
- (id)cloneProxyIpAddress;
- (void)saveToLocalFile;
- (id)getLocalFilePath;
- (id)randomShAccIp;
- (id)randomSzAccIp;
- (id)randomAccIp;
- (id)randomIpFromArray:(id)arg1;
- (id)defaultShAccIps;
- (id)defaultSzAccIps;
- (id)defaultAccIps;
- (void)removeUnusedScore:(id)arg1;
- (id)setFromArrayFirstAndSecond:(id)arg1;
- (void)clearLastLauchedData:(id)arg1;
- (id)initWithNetworkStatusName:(id)arg1;

@end

