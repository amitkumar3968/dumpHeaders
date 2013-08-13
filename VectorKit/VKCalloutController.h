/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"

@class UICalloutView, UIPopoverController, UIView<VKInteractiveMap>, _VKCalloutWrapperView;

__attribute__((visibility("hidden")))
@interface VKCalloutController : VKModelObject <VKMapLayer>
{
    id <VKCalloutControllerDelegate> _delegate;
    id <VKCalloutSource> _calloutSource;
    UIView<VKInteractiveMap> *_calloutContainerView;
    UIPopoverController *_popoverController;
    UICalloutView *_calloutView;
    Class _calloutViewClass;
    _VKCalloutWrapperView *_calloutWrapperView;
    id _accessoryTapHandler;
    id _hideCallback;
    id _nextLayoutBlock;
    struct CGPoint _anchorPoint;
}

@property(nonatomic) Class calloutViewClass; // @synthesize calloutViewClass=_calloutViewClass;
@property(nonatomic) UIView<VKInteractiveMap> *calloutContainerView; // @synthesize calloutContainerView=_calloutContainerView;
@property(readonly, nonatomic) id <VKCalloutSource> calloutSource; // @synthesize calloutSource=_calloutSource;
@property(nonatomic) id <VKCalloutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (void)showCalloutWithSource:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3 accessoryTapHandler:(id)arg4 hideCallback:(void)arg5;
- (void)showCalloutWithSource:(id)arg1 animated:(BOOL)arg2 accessoryTapHandler:(id)arg3 hideCallback:(void)arg4;
- (void)_showCalloutAnimated:(BOOL)arg1 avoid:(struct CGRect)arg2 afterPan:(BOOL)arg3 additionalInsets:(struct UIEdgeInsets)arg4;
- (void)updateCalloutAnimated:(BOOL)arg1;
- (void)replaceSourceWithSource:(id)arg1;
- (struct CGPoint)_calloutAnchorPoint;
- (BOOL)isCalloutExpanded;
- (id)_calloutWrapperView;
- (id)calloutPopoverController;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)mapLayerPosition;

@end
