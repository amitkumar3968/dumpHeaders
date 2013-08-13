/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadGraph : NSObject
{
    NSMutableSet *_tiles;
    NSMutableSet *_duplicateTiles;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableArray *_junctions;
    NSMutableArray *_intersections;
    BOOL _offRouteJunctionsValid;
    CDStruct_aca18c62 _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
}

@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (id).cxx_construct;
- (id)_nextIntersectionForRoad:(id)arg1;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (id)_junctionForRoadEdge:(const CDStruct_b4689c16 *)arg1 atA:(BOOL)arg2 routeOffset:(CDStruct_3f2a7a20)arg3 tile:(id)arg4;
- (id)junctionForRoad:(id)arg1 nearJunction:(BOOL)arg2 crossTileEdge:(BOOL)arg3;
- (void)setTiles:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithJunctions:(id)arg1;
- (void)_findOffRouteJunctions;
- (id)offRouteGraphJunctionsForViewTransform:(const struct ViewTransform *)arg1 labelContext:(struct LabelContext *)arg2 maxJunctions:(unsigned int)arg3;
- (void)_updateIntersectionsForDepth:(unsigned int)arg1;
- (id)junctionListForDepth:(unsigned int)arg1;
- (unsigned int)countReadyJunctionLists;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (void)addPolylineEdge:(id)arg1 atA:(BOOL)arg2 tile:(id)arg3 junctionList:(id)arg4;

@end

