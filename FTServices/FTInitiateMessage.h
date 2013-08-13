/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTFaceTimeMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying>
{
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSArray *_peers;
    NSString *_aliasUserID;
    NSData *_aliasSignature;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

@property(copy) NSDictionary *regionInformation; // @synthesize regionInformation=_regionInformation;
@property(copy) NSArray *canonicalizedPeers; // @synthesize canonicalizedPeers=_canonicalizedPeers;
@property(copy) NSData *aliasSignature; // @synthesize aliasSignature=_aliasSignature;
@property(copy) NSString *aliasUserID; // @synthesize aliasUserID=_aliasUserID;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
@property(copy) NSData *selfNatIP; // @synthesize selfNatIP=_selfNatIP;
@property(copy) NSNumber *selfNATType; // @synthesize selfNATType=_selfNATType;
@property(copy) NSData *selfPushToken; // @synthesize selfPushToken=_selfPushToken;
@property(copy) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
