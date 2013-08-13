/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class APSConnection, NSData, NSObject<OS_dispatch_semaphore>;

@interface AADeviceInfo : NSObject
{
    APSConnection *_apsConnection;
    BOOL _tokenDone;
    NSData *_token;
    NSObject<OS_dispatch_semaphore> *_tokenSema;
}

+ (id)productVersion;
+ (id)userAgentHeader;
+ (id)clientInfoHeader;
+ (id)appleIDClientIdentifier;
+ (id)apnsToken;
+ (id)serialNumber;
+ (id)osVersion;
+ (id)udid;
+ (id)signatureWithDictionary:(id)arg1;
+ (id)infoDictionary;
- (void).cxx_destruct;
- (id)init;
- (id)appleIDClientIdentifier;
- (id)deviceClass;
- (id)apnsToken;
- (id)regionCode;
- (id)buildVersion;
- (id)osName;
- (id)productType;
- (id)productVersion;
- (id)wifiMacAddress;
- (id)serialNumber;
- (id)udid;
- (id)osVersion;
- (id)deviceInfoDictionary;

@end

