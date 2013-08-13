/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VKGlobePointCache, VKMercatorTerrainHeightCache;

__attribute__((visibility("hidden")))
@interface VKAnchorContext : NSObject
{
    BOOL _isMercator;
    BOOL _isGeocentric;
    VKGlobePointCache *_globePointCache;
    VKMercatorTerrainHeightCache *_mercatorTerrainHeightCache;
}

@property(retain, nonatomic) VKMercatorTerrainHeightCache *mercatorTerrainHeightCache; // @synthesize mercatorTerrainHeightCache=_mercatorTerrainHeightCache;
@property(retain, nonatomic) VKGlobePointCache *globePointCache; // @synthesize globePointCache=_globePointCache;
@property(readonly, nonatomic) BOOL isGeocentric; // @synthesize isGeocentric=_isGeocentric;
@property(readonly, nonatomic) BOOL isMercator; // @synthesize isMercator=_isMercator;
- (void)removeHandle:(id)arg1;
- (void)clearTerrainHeightForAnchor:(id)arg1;
- (CDStruct_31142d93)mercatorTerrainPointForAnchor:(id)arg1;
- (CDStruct_31142d93)geocentricPointForAnchor:(id)arg1;
- (id)newAnchorAtCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)newAnchorAtCoordinate:(CDStruct_c3b9c2ee)arg1 followsTerrain:(BOOL)arg2;
- (id)newAnchorAtMercatorPoint:(CDStruct_31142d93)arg1;
- (void)dealloc;
- (id)initGeocentricWithCache:(id)arg1;
- (id)initMercator;
- (id)init;

@end

