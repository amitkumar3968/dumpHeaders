/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <GeoServices/GEOTileSource.h>

@interface GEOResourcesTileSource : GEOTileSource
{
}

- (void)_download;
- (struct _GEOTileKey)tileKeyForX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)dataForKey:(const struct _GEOTileKey *)arg1;
- (int)maximumDownloadZoomLevel;
- (int)minimumDownloadZoomLevel;
- (int)zEquivalenceClass;
- (int)tileSize;

@end

