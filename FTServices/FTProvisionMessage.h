/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface FTProvisionMessage : FTMessage <NSCopying>
{
    NSString *_service;
    NSDictionary *_linkInfo;
    NSString *_realm;
    NSData *_csr;
    NSDictionary *_authenticationInfo;
    NSString *_userID;
    NSArray *_URIs;
    NSData *_responseCertificate;
    NSArray *_responseBindings;
    NSString *_protocolVersion;
}

@property(copy) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy) NSArray *responseBindings; // @synthesize responseBindings=_responseBindings;
@property(copy) NSData *responseCertificate; // @synthesize responseCertificate=_responseCertificate;
@property(copy) NSArray *URIs; // @synthesize URIs=_URIs;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSDictionary *authenticationInfo; // @synthesize authenticationInfo=_authenticationInfo;
@property(copy) NSData *csr; // @synthesize csr=_csr;
@property(copy) NSString *realm; // @synthesize realm=_realm;
@property(copy) NSDictionary *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(copy) NSString *service; // @synthesize service=_service;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

