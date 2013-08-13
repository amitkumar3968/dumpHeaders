/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AccessibilityUtilities/AXServer.h>

@class NSMutableArray;

@interface AXBackBoardServer : AXServer
{
    BOOL _overrideGestureRecognition;
    NSMutableArray *_eventListeners;
    NSMutableArray *_zoomListeners;
}

+ (id)server;
- (void)setHearingAidControlIsVisible:(BOOL)arg1;
- (void)removeEventListener:(struct NSString *)arg1;
- (void)registerEventListener:(id)arg1 withIdentifierCallback:(void)arg2;
- (void)setVoiceOverItemChooserVisible:(BOOL)arg1;
- (void)wakeUpDeviceIfNecessary;
- (void)userEventOccurred;
- (struct CGRect)convertFrame:(struct CGRect)arg1 forContextId:(unsigned int)arg2;
- (void)removeZoomLevelHandler:(id)arg1;
- (id)registerZoomLevelChangeHandler:(id)arg1;
- (void)zoomDeactivationAnimationWillBegin;
- (void)zoomActivationAnimationWillBegin;
- (void)zoomWillBeginAppSwitcherReveal;
- (float)zoomAppSwitcherRevealAnimationDelay;
- (double)zoomDeactivationAnimationStartDelay;
- (void)postGSEvent:(CDStruct_b3e0c7ee *)arg1 systemEvent:(BOOL)arg2 postThroughHID:(BOOL)arg3;
- (double)zoomActivationAnimationStartDelay;
- (void)registerAssistiveTouchPID:(int)arg1;
- (void)setLockScreenDimTimerEnabled:(BOOL)arg1;
- (void)zoomFocusChanged:(id)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (BOOL)_connectIfNecessary;
- (void)_connectServerIfNecessary;
- (id)_handleZoomListener:(id)arg1;
- (id)_handleEventListener:(id)arg1;
- (id)_serviceName;
- (void)dealloc;
- (id)init;

@end

