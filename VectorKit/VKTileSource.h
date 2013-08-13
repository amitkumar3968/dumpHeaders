/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GEOTileSourceClient.h"

@class GEOTileSource, NSError, VKStylesheet, VKTileKeyList, VKTileKeyMap, VKTilePool;

__attribute__((visibility("hidden")))
@interface VKTileSource : NSObject <GEOTileSourceClient>
{
    id <VKTileSourceClient> _client;
    GEOTileSource *_tileSource;
    VKTilePool *_tilePool;
    VKTileKeyMap *_pendingLoads;
    VKTileKeyList *_decoding;
    VKTileKeyList *_failedTiles;
    VKStylesheet *_stylesheet;
    int loadingTiles;
    NSError *_recentError;
}

@property(retain, nonatomic) VKStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) id <VKTileSourceClient> client; // @synthesize client=_client;
- (void)tileSource:(id)arg1 declinedToLoadTileKey:(const struct _GEOTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)tileSourceDidFinishWithNetwork:(id)arg1;
- (void)tileSourceWillGoToNetwork:(id)arg1;
- (void)tileSource:(id)arg1 didFetchData:(id)arg2 forKey:(const struct _GEOTileKey *)arg3;
- (void)_failedToLoadSourceKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)tileAvailabilityChanged:(id)arg1;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (id)tileForSourceKey:(const struct VKTileKey *)arg1 renderKey:(const struct VKTileKey *)arg2;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)_fetchedTile:(id)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)downloadKeyForSourceKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
@property(readonly, nonatomic) int maximumZoomLevel;
@property(readonly, nonatomic) BOOL maximumZoomLevelBoundsCamera;
@property(readonly, nonatomic) int minimumZoomLevel;
@property(readonly, nonatomic) BOOL minimumZoomLevelBoundsCamera;
@property(readonly, nonatomic) int zEquivalenceClass;
@property(readonly, nonatomic) GEOTileSource *tileSource;
- (Class)tileSourceClass;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
@property(readonly, nonatomic) int maximumDownloadZoomLevel;
@property(readonly, nonatomic) int minimumDownloadZoomLevel;
@property(readonly, nonatomic) int tileSize;
- (id)detailedDescription;
- (BOOL)mayUseNetwork;
- (void)foreachTileInPool:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (id)init;

@end

