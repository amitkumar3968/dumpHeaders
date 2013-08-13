/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableSet, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator;

@interface SLDServer : NSObject
{
    NSMutableSet *_services;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
- (void).cxx_destruct;
- (void)serviceDidRemoveSession:(id)arg1;
- (void)serviceDidAddSession:(id)arg1;
- (void)addService:(id)arg1;
- (id)init;

@end

