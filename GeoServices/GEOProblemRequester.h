/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface GEOProblemRequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    NSMapTable *_providers;
}

+ (id)sharedRequester;
- (Class)classForProviderID:(short)arg1;
- (void)registerProvider:(Class)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(id)arg2 networkActivity:(void)arg3 error:(id)arg4;
- (void)dealloc;
- (id)init;

@end

