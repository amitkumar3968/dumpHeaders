/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAlbumContainer.h"

@class MKMapView, NSMutableArray, NSString, PLPlace;

@interface PLPlaces : NSObject <PLAlbumContainer>
{
    NSMutableArray *_photosWithLocationInformation;
    NSMutableArray *_places;
    NSMutableArray *_unaffectedAnnotations;
    NSMutableArray *_deletedAnnotations;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationStarts;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationEnds;
    NSMutableArray *_addedAnnotations;
    NSMutableArray *_newlyVisibleAnnotations;
    NSMutableArray *_animationOnlyAnnotations;
    MKMapView *_mapView;
    PLPlace *_nullPlace;
}

- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *_typeDescription;
@property(readonly, nonatomic) NSString *_prettyDescription;
- (id)photoLibrary;
@property(readonly, nonatomic) int filter;
- (void)updateAlbumsOrderIfNeeded;
- (void)setNeedsReordering;
- (BOOL)needsReordering;
@property(readonly, nonatomic) id albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (BOOL)canEditAlbums;
- (int)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) unsigned int unreadAlbumsCount;
- (BOOL)hasAtLeastOneAlbum;
- (id)albums;
- (id)identifier;
- (CDStruct_90e2a262)_defaultRegionForNoPlacesData;
- (void)_loadPlacesData;
- (CDStruct_90e2a262)_placeRegionForPhoto:(id)arg1;
- (id)_placeForPhoto:(id)arg1 inPlaces:(id)arg2;
- (id)_findVisiblePhotosInRegion:(CDStruct_90e2a262)arg1 notInRegion:(CDStruct_90e2a262)arg2;
- (id)_findVisiblePhotosInRegion:(CDStruct_90e2a262)arg1;
- (void)_logPhotos:(id)arg1;
- (void)fullReset;
- (id)animationOnlyAnnotations;
- (id)newlyVIsibleAnnotations;
- (id)addedAnnotations;
- (id)annotationsToRemoveWhenAddAnimationStarts;
- (id)annotationsToRemoveWhenAddAnimationEnds;
- (id)deletedAnnotations;
- (id)unaffectedAnnotations;
- (id)places;
- (void)_createMapAnnotationsFromChanges:(id)arg1 toChanges:(id)arg2 intoPlaces:(id)arg3;
- (void)_createPlacesWithNewPhotos:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4;
- (void)_updateCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 fromOriginalRegion:(CDStruct_90e2a262)arg5 forNewRegion:(CDStruct_90e2a262)arg6;
- (void)_assetsWereAdded:(id)arg1 deleted:(id)arg2 updated:(id)arg3;
- (void)_splitCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 forNewRegion:(CDStruct_90e2a262)arg5;
- (void)_resetAnnotationBuckets;
- (void)updatePlacesFromRegion:(CDStruct_90e2a262)arg1 toRegion:(CDStruct_90e2a262)arg2 viaZoom:(BOOL)arg3;
- (void)updatePlacesWithAddedAssets:(id)arg1 deletedAssets:(id)arg2 updatedAssets:(id)arg3;
- (void)_partitionPhotos:(id)arg1 intoPlaces:(id)arg2 inRegion:(CDStruct_90e2a262)arg3;
- (void)setupPlacesForRegion:(CDStruct_90e2a262)arg1;
- (CDStruct_90e2a262)visibleMapRectangleForZoomedOutPins;
- (void)setMapView:(id)arg1;
- (void)dealloc;
- (id)initWithMapView:(id)arg1;
- (id)_newAnimationAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)_newPlaceForRegion:(CDStruct_90e2a262)arg1;

@end

