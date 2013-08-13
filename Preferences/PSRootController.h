/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UINavigationController.h"

#import "PSController.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableSet, PSSpecifier;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate>
{
    PSSpecifier *_specifier;
    NSMutableSet *_tasks;
    BOOL _deallocating;
    unsigned char _hasTelephony;
}

+ (BOOL)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id *)arg4 settings:(id)arg5;
+ (id)readPreferenceValue:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
+ (void)writePreference:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)_delayedControllerReleaseAfterPop:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)didDismissFormSheetView;
- (void)willDismissFormSheetView;
- (void)didDismissPopupView;
- (void)willDismissPopupView;
- (id)aggregateDictionaryPath;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)dealloc;
- (BOOL)deallocating;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (void)sendWillBecomeActive;
- (void)sendWillResignActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)statusBarWillChangeHeight:(id)arg1;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)handleURL:(id)arg1;
- (void)pushController:(id)arg1;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (id)specifiers;
- (id)contentViewForTopController;
- (BOOL)busy;
- (void)taskFinished:(id)arg1;
- (void)addTask:(id)arg1;
- (BOOL)taskIsRunning:(id)arg1;
- (id)tasksDescription;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;

@end

