/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VKGlobeAdapterDelegate <NSObject>
- (void)globeAdapter:(id)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)globeAdapter:(id)arg1 setNeedsLayout:(BOOL)arg2;
- (void)globeAdapter:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)globeAdapter:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)globeAdapter:(id)arg1 willSelectLabelMarker:(id)arg2;
@end

