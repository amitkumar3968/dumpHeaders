/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface PLChangeNode : NSObject
{
    NSObject<OS_xpc_object> *_hubConnection;
    Class _changeHubClass;
    unsigned char _nodeUUID[16];
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
}

+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1;
+ (id)sharedNode;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1;
- (void)forceUserInterfaceReload;
- (BOOL)isEventOriginatingFromHere:(id)arg1;
- (void)processRemoteEvents:(id)arg1;
- (void)fetchNewEventsFromChangeHub;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (void)setupHubConnection;
- (void)sendEventToChangeHub:(id)arg1;
- (void)sendChangeHubEventForDidSaveNotification:(id)arg1;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)connectManagedObjectContext:(id)arg1;
- (void)distributeLocalEvent:(id)arg1;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2;
- (id)createXPCObjectFromDidSaveNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

