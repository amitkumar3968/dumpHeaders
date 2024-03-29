/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MPViewController.h"

#import "IUPortraitInfoOverlayDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "MPSwipableViewDelegate.h"

@class ADBannerView, IUPortraitInfoOverlay, MPAVItem, MPImageCacheRequest, MPReflectionImageView, MPSwipableView;

@interface IUNowPlayingAlbumFrontViewController : MPViewController <IUPortraitInfoOverlayDelegate, MCProfileConnectionObserver, MPSwipableViewDelegate>
{
    ADBannerView *_adView;
    MPReflectionImageView *_artworkView;
    MPSwipableView *_backstopView;
    MPImageCacheRequest *_currentImageRequest;
    float _filteredX;
    float _filteredZ;
    MPAVItem *_imageRequestPendingItem;
    BOOL _isInAppPurchaseAllowed;
    IUPortraitInfoOverlay *_overlayView;
    int _style;
}

+ (struct CGRect)frameForArtwork;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)_updateOverlayVisiblePartsForStyle;
- (void)_updateIsInAppPurchaseAllowedForProfileConnection:(id)arg1;
- (void)_updateArtworkForTime:(double)arg1;
- (void)_removeOverlayView;
- (id)_overlayView;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap;
- (void)_handleSwipeRight;
- (void)_addOverlayView:(id)arg1;
- (void)coverFlowWillTransitionOut:(BOOL)arg1;
- (void)coverFlowIsTransitioningOut:(BOOL)arg1;
- (id)coverFlowControllerInitialTransitionImage:(id)arg1;
- (void)coverFlowDidTransitionOut:(BOOL)arg1;
- (void)artworkWillZoomOut;
- (void)artworkWillZoomIn;
- (void)artworkDidZoomOut;
- (void)artworkDidZoomIn;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (void)infoOverlayDidFinishHiding:(id)arg1;
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)stopTicking;
- (void)startTicking;
- (void)setItem:(id)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (int)statusBarStyle;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

