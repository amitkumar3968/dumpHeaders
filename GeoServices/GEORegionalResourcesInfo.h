/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOResources, GEOTileGroup, NSSet;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesInfo : NSObject
{
    GEOTileGroup *_tileGroup;
    GEOResources *_resources;
    NSSet *_nodes;
}

- (id)attributionsForKey:(struct _GEOTileKey *)arg1;
- (void)findResourcesForTileKeys:(id)arg1 visitor:(id)arg2;
- (void)_createNodes;
- (void)dealloc;
- (id)initWithTileGroup:(id)arg1 inResourceManifest:(id)arg2;

@end
