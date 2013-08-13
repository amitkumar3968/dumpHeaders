/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBRequest.h"

@class GEOLocation, GEOMapRegion, GEORouteAttributes, NSData, NSMutableArray;

@interface GEODirectionsRequest : PBRequest
{
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    unsigned int _maxRouteCount;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    unsigned int _timeSinceLastRerouteRequest;
    NSMutableArray *_waypoints;
    struct {
        unsigned int departureTime:1;
        unsigned int maxRouteCount:1;
        unsigned int timeSinceLastRerouteRequest:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) int departureTime; // @synthesize departureTime=_departureTime;
@property(retain, nonatomic) NSData *originalRouteZilchPoints; // @synthesize originalRouteZilchPoints=_originalRouteZilchPoints;
@property(retain, nonatomic) NSData *originalRouteID; // @synthesize originalRouteID=_originalRouteID;
@property(retain, nonatomic) GEOMapRegion *currentMapRegion; // @synthesize currentMapRegion=_currentMapRegion;
@property(retain, nonatomic) GEOLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
@property(retain, nonatomic) NSMutableArray *waypoints; // @synthesize waypoints=_waypoints;
@property(retain, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) BOOL hasDepartureTime;
@property(nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property(nonatomic) unsigned int timeSinceLastRerouteRequest; // @synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest;
@property(readonly, nonatomic) BOOL hasOriginalRouteZilchPoints;
@property(readonly, nonatomic) BOOL hasOriginalRouteID;
@property(readonly, nonatomic) BOOL hasCurrentMapRegion;
@property(readonly, nonatomic) BOOL hasCurrentUserLocation;
@property(nonatomic) BOOL hasMaxRouteCount;
@property(nonatomic) unsigned int maxRouteCount; // @synthesize maxRouteCount=_maxRouteCount;
- (id)waypointAtIndex:(unsigned int)arg1;
- (unsigned int)waypointsCount;
- (void)addWaypoint:(id)arg1;
- (void)clearWaypoints;
@property(readonly, nonatomic) BOOL hasRouteAttributes;
- (void)dealloc;

@end

