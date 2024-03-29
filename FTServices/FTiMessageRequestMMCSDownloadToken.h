/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTiMessageMessage.h>

#import "NSCopying.h"

@class NSData, NSString;

@interface FTiMessageRequestMMCSDownloadToken : FTiMessageMessage <NSCopying>
{
    NSString *_owner;
    NSString *_responseAuthToken;
    NSData *_signature;
    NSString *_responseRequestorID;
}

@property(copy) NSString *responseRequestorID; // @synthesize responseRequestorID=_responseRequestorID;
@property(copy) NSData *signature; // @synthesize signature=_signature;
@property(copy) NSString *responseAuthToken; // @synthesize responseAuthToken=_responseAuthToken;
@property(copy) NSString *owner; // @synthesize owner=_owner;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (int)responseCommand;
- (int)command;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

