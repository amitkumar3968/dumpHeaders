/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTiMessagePeerMessage.h>

#import "NSCopying.h"

@class NSData;

@interface FTiMessageGenericMessage : FTiMessagePeerMessage <NSCopying>
{
    NSData *_data;
}

@property(copy) NSData *data; // @synthesize data=_data;
- (id)messageBody;
- (id)requiredKeys;
- (int)command;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

