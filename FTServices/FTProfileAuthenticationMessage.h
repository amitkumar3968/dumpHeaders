/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTProfileMessage.h>

#import "NSCopying.h"

@class NSString;

@interface FTProfileAuthenticationMessage : FTProfileMessage <NSCopying>
{
    NSString *_username;
    NSString *_password;
    NSString *_responseProfileID;
    NSString *_responseAuthToken;
}

@property(copy) NSString *responseAuthorizationToken; // @synthesize responseAuthorizationToken=_responseAuthToken;
@property(copy) NSString *responseProfileID; // @synthesize responseProfileID=_responseProfileID;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)payloadCanBeLogged;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

