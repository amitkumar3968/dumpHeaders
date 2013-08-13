/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSPersistentStoreCoordinator, NSString, SLDServer;

@interface SLDService : NSObject
{
    NSObject<OS_xpc_object> *_serviceConnection;
    NSMutableSet *_sessions;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    SLDServer *_server;
    NSObject<OS_dispatch_queue> *serviceQueue;
    id <SLDServiceDelegate> _delegate;
}

@property(retain) id <SLDServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue;
@property(retain) SLDServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (id)_managedObjectContext;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectModel;
- (id)_databasePath;
- (id)_appSupportPath;
- (void)removeSession:(id)arg1;
- (void)_setupSessionWithConnection:(id)arg1;
- (void)_configureXPC;
- (void)_tearDownXPC;
- (void)startAcceptingConnections;
@property(readonly) NSString *xpcServiceName; // @dynamic xpcServiceName;
- (id)initWithServer:(id)arg1 delegate:(id)arg2;

@end
