/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTIDSMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSNumber, NSString;

@interface FTRegistrationMessage : FTIDSMessage <NSCopying>
{
    NSData *_validationData;
    NSArray *_responseBindings;
    NSString *_hardwareVersion;
    NSString *_osVersion;
    NSArray *_capabilities;
    NSString *_softwareVersion;
    NSString *_protocolVersion;
    NSString *_deviceName;
    NSNumber *_responseNextHBI;
}

@property(copy) NSNumber *responseNextHBI; // @synthesize responseNextHBI=_responseNextHBI;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy) NSArray *responseBindings; // @synthesize responseBindings=_responseBindings;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)nonStandardMessageHeadersForOutgoingPush;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

