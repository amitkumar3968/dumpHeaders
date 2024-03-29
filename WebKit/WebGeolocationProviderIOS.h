/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GeolocationUpdateListener.h"
#import "WebGeolocationProvider.h"

@class GeolocationCoreLocationDelegate, NSTimer, WebGeolocationPosition;

__attribute__((visibility("hidden")))
@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider, GeolocationUpdateListener>
{
    NSTimer *_sendLastPositionAsynchronouslyTimer;
    BOOL _isSuspended;
    WebGeolocationPosition *_lastPosition;
    BOOL _enableHighAccuracy;
    HashSet_2803207d _trackedWebViews;
    GeolocationCoreLocationDelegate *_geolocationCoreLocationDelegate;
    HashSet_2803207d _registeredWebViews;
    HashSet_2803207d _pendingInitialPositionWebView;
    HashSet_2803207d _warmUpWebViews;
    HashMap_842a3805 _webViewsWaitingForCoreLocationStart;
    BOOL _shouldResetOnResume;
}

+ (id)sharedGeolocationProvider;
@property(nonatomic) BOOL shouldResetOnResume; // @synthesize shouldResetOnResume=_shouldResetOnResume;
@property(readonly, nonatomic) HashMap_842a3805 webViewsWaitingForCoreLocationStart; // @synthesize webViewsWaitingForCoreLocationStart=_webViewsWaitingForCoreLocationStart;
@property(readonly, nonatomic) HashSet_2803207d warmUpWebViews; // @synthesize warmUpWebViews=_warmUpWebViews;
@property(readonly, nonatomic) HashSet_2803207d pendingInitialPositionWebView; // @synthesize pendingInitialPositionWebView=_pendingInitialPositionWebView;
@property(readonly, nonatomic) HashSet_2803207d registeredWebViews; // @synthesize registeredWebViews=_registeredWebViews;
@property(retain, nonatomic) GeolocationCoreLocationDelegate *geolocationCoreLocationDelegate; // @synthesize geolocationCoreLocationDelegate=_geolocationCoreLocationDelegate;
@property(readonly, nonatomic) HashSet_2803207d trackedWebViews; // @synthesize trackedWebViews=_trackedWebViews;
@property(nonatomic) BOOL enableHighAccuracy; // @synthesize enableHighAccuracy=_enableHighAccuracy;
@property(retain, nonatomic) WebGeolocationPosition *lastPosition; // @synthesize lastPosition=_lastPosition;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain, nonatomic) NSTimer *sendLastPositionAsynchronouslyTimer; // @synthesize sendLastPositionAsynchronouslyTimer=_sendLastPositionAsynchronouslyTimer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)handlePendingInitialPosition:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)geolocationDelegateUnableToStart;
- (void)geolocationDelegateStarted;
- (void)stopTrackingWebView:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)cancelWarmUpForWebView:(id)arg1;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)stopCoreLocationDelegateIfNeeded;
- (void)startCoreLocationDelegate;
- (void)dealloc;

@end

