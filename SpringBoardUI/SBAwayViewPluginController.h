/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIView;

@interface SBAwayViewPluginController : NSObject
{
    UIView *_view;
    BOOL _viewCanBeDisplayed;
    BOOL _fullscreen;
    BOOL _alwaysFullscreen;
    int _orientation;
    id _disableTransitionBlock;
}

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
+ (id)_serializedDataForContext:(id)arg1;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic, getter=isFullscreen) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) BOOL viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;
- (BOOL)showsBeneathNotifications;
- (BOOL)showsAboveHeader;
- (BOOL)wantsSwipeGestureRecognizer;
- (BOOL)wantsAutomaticFullscreenTimer;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleGesture:(int)arg1 fingerCount:(unsigned int)arg2;
- (BOOL)handleMenuButtonHeld;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonTap;
- (BOOL)showsDuringCall;
- (BOOL)wantsUserWallpaper;
- (BOOL)wantsHardwareEventsWhenScreenDimmed;
- (BOOL)wantsToOpenURLsWhilePasscodeLocked;
- (BOOL)allowsSiri;
- (BOOL)allowsPhotoSlideshow;
- (BOOL)allowsLockScreenMediaControls;
- (BOOL)allowsLockScreenCamera;
- (BOOL)canScreenDim;
- (id)customHeaderView;
- (BOOL)showHeaderView;
- (BOOL)showDateView;
- (BOOL)disablesAwayItemsCompletely;
- (BOOL)showAwayItems;
- (id)bundleIDForUnlock;
- (BOOL)animateResumingToApplicationWithIdentifier:(id)arg1;
- (int)pluginPriority;
- (BOOL)retainsPriorityWhileInactive;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)alwaysFullscreenValueHasChanged;
- (BOOL)canBeAlwaysFullscreen;
@property(readonly, nonatomic, getter=isAlwaysFullscreen) BOOL alwaysFullscreen;
- (void)setAlwaysFullscreen:(BOOL)arg1;
- (double)transitionDuration;
- (double)viewFadeInDuration;
- (BOOL)shouldAutoHideNotifications;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)shouldDisableOnUnlock;
- (BOOL)shouldDisableOnRelock;
- (BOOL)viewWantsOverlayLayout;
- (BOOL)viewWantsFullscreenLayout;
- (void)setFullscreen:(BOOL)arg1 duration:(double)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (id)enableTransitionBlock;
- (id)_disableTransitionBlock;
- (void)_setDisableTransitionBlock:(id)arg1;
- (void)disableWithTransitionBlock:(id)arg1;
- (void)disable;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)purgeView;
- (void)loadView;
@property(retain, nonatomic) UIView *view;
- (void)dealloc;
- (id)init;

@end
