/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VKMapModelDelegate <NSObject>
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)mapModel:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByPixelOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
@end

