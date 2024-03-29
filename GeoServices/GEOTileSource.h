/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList, GEOTileKeyMap, NSMutableArray;

@interface GEOTileSource : NSObject
{
    GEOTileKeyMap *_callbackMap;
    GEOTileKeyList *_downloadQueue;
    struct __CFRunLoopObserver *_observer;
    BOOL _observing;
    struct {
        double x;
        double y;
    } _downloadSortPoint;
    NSMutableArray *_downloadsInFlight;
    GEOTileKeyList *_failedTiles;
    BOOL _networkReachable;
    unsigned int _queueSize;
    BOOL _log;
}

+ (id)sharedSource;
@property(readonly, nonatomic) GEOTileKeyList *failedTiles; // @synthesize failedTiles=_failedTiles;
@property(nonatomic) CDStruct_c3b9c2ee sortPoint; // @synthesize sortPoint=_downloadSortPoint;
@property(readonly, nonatomic) unsigned int queueSize; // @synthesize queueSize=_queueSize;
- (id)detailedDescription;
- (void)_download;
- (void)forceDownload;
- (void)fetchDataForKey:(const struct _GEOTileKey *)arg1 callback:(id)arg2 allowNetwork:(BOOL)arg3;
- (struct _GEOTileKey)tileKeyForX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)dataForKey:(const struct _GEOTileKey *)arg1;
- (BOOL)canDownloadKey:(const struct _GEOTileKey *)arg1;
- (void)_resetFailedTileList;
- (void)_reachabilityChanged:(id)arg1;
- (void)dealloc;
- (void)cancelAllFetches;
- (id)init;
@property(readonly, nonatomic) int maximumDownloadZoomLevel;
@property(readonly, nonatomic) int minimumDownloadZoomLevel;
@property(readonly, nonatomic) int zEquivalenceClass;
@property(readonly, nonatomic) int tileSize;
- (void)changeQueueSizeFrom:(unsigned int)arg1 to:(unsigned int)arg2;

@end

