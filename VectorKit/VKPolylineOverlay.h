/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKOverlay.h"

@class GEOMapRegion, GEORoute, NSArray, NSMutableArray, VKTrafficSegmentsAlongRoute;

@interface VKPolylineOverlay : NSObject <VKOverlay>
{
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    GEORoute *_route;
    struct __CFSet *_observers;
    double _trafficTimeStamp;
    VKTrafficSegmentsAlongRoute *_trafficSegments;
}

@property(readonly, nonatomic) double trafficTimeStamp; // @synthesize trafficTimeStamp=_trafficTimeStamp;
@property(readonly, nonatomic) VKTrafficSegmentsAlongRoute *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) GEORoute *route; // @synthesize route=_route;
- (BOOL)resetTrafficWithRoute:(id)arg1 WithStep:(struct RouteCalibration *)arg2 trafficWalking:(struct TrafficWalking *)arg3 routeIndex:(int *)arg4;
- (void)updateTraffic;
- (void)calibrate:(struct RouteCalibration *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 forDistance:(unsigned int)arg4;
- (struct _NSRange)sectionRangeForBounds:(CDStruct_aca18c62)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_buildSectionsFromRoute:(id)arg1;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned int trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned int trafficColorsCount;
- (CDStruct_c3b9c2ee)coordinateAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) GEORoute *geoRoute;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithRoute:(id)arg1;

@end

