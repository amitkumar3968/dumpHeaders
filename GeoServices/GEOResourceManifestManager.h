/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOResourceManifestServerProxyDelegate.h"

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, NSDictionary, NSHashTable, NSLock, NSMutableArray;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate>
{
    id <GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    NSMutableArray *_pendingRegionalResourceLoads;
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSLock *_pendingRegionalResourceLoadsLock;
}

+ (id)sharedManager;
+ (void)setCallerWillStartServer;
+ (void)setHiDPI:(BOOL)arg1;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)disableServerConnection;
@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (void)forceUpdate;
- (void)refreshActiveTileGroup;
- (void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)activeTileGroupIdentifier;
- (void)getResourceManifestWithHandler:(id)arg1;
- (BOOL)hasResourceManifest;
- (id)detailedDescription;
- (oneway void)serverProxyDidFinishLoadingForList:(id)arg1;
- (oneway void)serverProxyDidReceiveError:(id)arg1 forList:(id)arg2;
- (oneway void)serverProxyDidReceiveResourceNames:(id)arg1 attributions:(id)arg2 forKey:(struct _GEOTileKey)arg3 fromList:(id)arg4;
- (oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(id)arg2;
- (void)cancelRegionalResourcesRequest:(id)arg1;
- (void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2 progress:(id)arg3 finished:(void)arg4 error:(id)arg5;
- (void)loadRegionalResourcesForKeys:(id)arg1 progress:(id)arg2 finished:(void)arg3 error:(id)arg4;
- (id)_listenerForTileKeys:(id)arg1 acquireLock:(BOOL)arg2;
- (id)pathForResourceWithName:(id)arg1;
- (void)_buildResourceNamesToPaths;
- (id)allResourceNames;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey *)arg1;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey *)arg1 useStatusCodes:(char *)arg2;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;
@property(readonly, nonatomic) BOOL hasActiveTileGroup;
- (unsigned int)mapMatchingZoomLevel;
- (int)mapMatchingTileSetStyle;
- (void)removeServerProxyObserver:(id)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)closeServerConnection;
- (void)openServerConnection;
- (id)authToken;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (void)dealloc;
- (id)init;

@end

