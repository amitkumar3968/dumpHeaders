/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBRequest.h"

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest
{
    NSMutableArray *_directionsFeedbackCollections;
    NSMutableArray *_mapsUsageFeedbackCollections;
    NSMutableArray *_placeSearchFeedbackCollections;
    NSMutableArray *_transitAppLaunchFeedbackCollections;
    NSMutableArray *_usageCollections;
}

@property(retain, nonatomic) NSMutableArray *mapsUsageFeedbackCollections; // @synthesize mapsUsageFeedbackCollections=_mapsUsageFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections; // @synthesize transitAppLaunchFeedbackCollections=_transitAppLaunchFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections; // @synthesize placeSearchFeedbackCollections=_placeSearchFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections; // @synthesize directionsFeedbackCollections=_directionsFeedbackCollections;
@property(retain, nonatomic) NSMutableArray *usageCollections; // @synthesize usageCollections=_usageCollections;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)mapsUsageFeedbackCollectionsCount;
- (void)addMapsUsageFeedbackCollection:(id)arg1;
- (void)clearMapsUsageFeedbackCollections;
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)transitAppLaunchFeedbackCollectionsCount;
- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;
- (void)clearTransitAppLaunchFeedbackCollections;
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)placeSearchFeedbackCollectionsCount;
- (void)addPlaceSearchFeedbackCollection:(id)arg1;
- (void)clearPlaceSearchFeedbackCollections;
- (id)directionsFeedbackCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)directionsFeedbackCollectionsCount;
- (void)addDirectionsFeedbackCollection:(id)arg1;
- (void)clearDirectionsFeedbackCollections;
- (id)usageCollectionAtIndex:(unsigned int)arg1;
- (unsigned int)usageCollectionsCount;
- (void)addUsageCollection:(id)arg1;
- (void)clearUsageCollections;
- (void)dealloc;

@end

