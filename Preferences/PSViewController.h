/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PSController.h"

@class PSRootController, PSSpecifier, UIViewController<PSController>;

@interface PSViewController : UIViewController <PSController>
{
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

- (void)statusBarWillAnimateByHeight:(float)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;
- (void)handleURL:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)pushController:(id)arg1;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (void)dealloc;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;

@end

