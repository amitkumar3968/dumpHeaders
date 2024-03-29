/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget.h"

@interface BBSystemStateProvider : NSObject <XPCProxyTarget>
{
    id _serverProxy;
}

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)noteChangeOfState:(unsigned int)arg1 newValue:(BOOL)arg2;
- (void)noteOccurrenceOfEvent:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

