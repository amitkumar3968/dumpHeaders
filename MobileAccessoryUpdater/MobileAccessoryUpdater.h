/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MobileAccessoryUpdater : NSObject
{
    id <MobileAccessoryUpdaterDelegate> _delegate;
    NSString *_bundleIdentifier;
    NSString *_clientIdentifier;
    char *_cClientIdentifier;
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_sessionQueue;
    struct dispatch_queue_s *_callbackQueue;
    NSString *_activeFilter;
    int _notifyToken;
}

- (void)dealloc;
- (void)unregister;
- (BOOL)setLastRemoteFindDate:(id)arg1;
- (void)performNextStepWithOptions:(id)arg1;
- (void)performStep:(id)arg1 withOptions:(id)arg2;
- (const char *)getActiveDeviceClassCString;
- (id)getActiveDeviceClass;
- (BOOL)setActiveDeviceClass:(id)arg1;
- (id)queryNextStep:(id *)arg1;
- (BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3;
- (BOOL)doesOperationCodeRequireFilter:(int)arg1;
- (int)getOperationCodeFromName:(id)arg1;
- (void)handleInboundEvent:(void *)arg1;
- (BOOL)createSession;
- (BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2;
- (void)createConnection;
- (BOOL)registerForBSDNotifications;
- (id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end

