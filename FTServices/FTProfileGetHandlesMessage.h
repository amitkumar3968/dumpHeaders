/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <FTServices/FTProfileMessage.h>

#import "NSCopying.h"

@class NSArray;

@interface FTProfileGetHandlesMessage : FTProfileMessage <NSCopying>
{
    NSArray *_responseHandles;
}

@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

