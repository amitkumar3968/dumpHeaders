/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTFaceTimeMessage.h>

#import "NSCopying.h"

@class NSData, NSNumber, NSString;

@interface FTRelayCancelMessage : FTFaceTimeMessage <NSCopying>
{
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber *peerRelayPort; // @synthesize peerRelayPort=_peerRelayPort;
@property(copy) NSData *peerRelayIP; // @synthesize peerRelayIP=_peerRelayIP;
@property(copy) NSNumber *selfRelayPort; // @synthesize selfRelayPort=_selfRelayPort;
@property(copy) NSData *selfRelayIP; // @synthesize selfRelayIP=_selfRelayIP;
@property(copy) NSData *relayConnectionID; // @synthesize relayConnectionID=_relayConnectionID;
@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSNumber *relayType; // @synthesize relayType=_relayType;
@property(copy) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property(copy) NSString *peerID; // @synthesize peerID=_peerID;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

