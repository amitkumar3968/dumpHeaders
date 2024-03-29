/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKMapViewDelegate.h"

@class NSMutableArray, PLAnnotationPen, PLPlaces, UIButton;

@interface PLPlacesMapViewDelegate : NSObject <MKMapViewDelegate>
{
    BOOL _didFirstAdjustment;
    UIButton *_moreDetailsButton;
    PLPlaces *_places;
    NSMutableArray *_delegatePlaces;
    unsigned int _activeDeletes;
    unsigned int _activeSplits;
    PLAnnotationPen *_pendingAdds;
    CDStruct_feeb6407 _previousRegion;
    float _previousZoomLevel;
    id <PlacesMapViewDelegateDetailsDelegate> _detailsDelegate;
}

- (void)_flushAnnotation:(id)arg1 fromMap:(id)arg2;
- (void)_setupMapViewCenteredOnAllPlaces:(id)arg1;
- (void)_updateVisibleAnnotationsAfterUpdatingMapView:(id)arg1;
- (void)_updatePlaces:(id)arg1 inMapView:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)_updateAnnotationsInMapView:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)_borderedPosterImageFromImage:(id)arg1 withSize:(struct CGSize)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)updateMapView:(id)arg1 WithAddedAssets:(id)arg2 deletedAssets:(id)arg3 updatedAssets:(id)arg4;
- (void)fullResetOfMapView:(id)arg1;
- (void)setDetailsDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithPlaces:(id)arg1;
- (BOOL)_displaysAlbumPosterOnLeft;
- (BOOL)_displayMoreDetailsButton;
- (id)_createAnnotationViewWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

