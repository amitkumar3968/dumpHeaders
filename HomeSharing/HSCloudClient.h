/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class HSConnectionConfiguration, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface HSCloudClient : NSObject
{
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;
    id _updateInProgressChangedHandler;
}

@property(copy, nonatomic) id updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;
- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)_sendConfigurationToDaemon;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)uploadItemProperties;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)resignActive;
- (void)resetConfiguration:(id)arg1;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryID:(unsigned long long)arg1;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1;
- (void)isExpiredWithCompletionHandler:(id)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(id)arg1;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)updateSagaLibraryWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)becomeActive;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

