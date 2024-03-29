/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTiMessageMessage.h>

#import "NSCopying.h"

@class NSArray, NSData, NSString;

@interface FTiMessagePeerMessage : FTiMessageMessage <NSCopying>
{
    NSData *_targetToken;
    NSString *_targetPeerID;
    NSString *_sourcePeerID;
    NSData *_targetSessionToken;
    NSArray *_targetPeers;
    NSString *_messageID;
}

@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSArray *targetPeers; // @synthesize targetPeers=_targetPeers;
@property(copy) NSData *targetSessionToken; // @synthesize targetSessionToken=_targetSessionToken;
@property(copy) NSString *sourcePeerID; // @synthesize sourcePeerID=_sourcePeerID;
@property(copy) NSString *targetPeerID; // @synthesize targetPeerID=_targetPeerID;
@property(copy) NSData *targetToken; // @synthesize targetToken=_targetToken;
- (id)messageBody;
- (id)requiredKeys;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

