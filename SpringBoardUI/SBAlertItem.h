/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSArray, UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
    NSArray *_allowedBundleIDs;
}

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) BOOL pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) BOOL allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) BOOL ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)hasActiveKeyboardOnScreen;
- (int)alertPriority;
- (BOOL)preventInterruption;
- (BOOL)reappearsAfterUnlock;
- (BOOL)reappearsAfterLock;
- (BOOL)behavesSuperModally;
- (BOOL)forcesModalAlertAppearance;
- (id)alertItemNotificationSender;
- (id)alertItemNotificationDate;
- (int)alertItemNotificationType;
- (void)noteVolumeOrLockPressed;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)screenWillUndim;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (void)buttonDismissed;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (void)didActivate;
- (void)willActivate;
- (BOOL)_didEverActivate;
- (void)setPreventLockOver:(BOOL)arg1;
- (BOOL)preventLockOver;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (void)performUnlockAction;
- (double)autoDismissInterval;
- (float)lockLabelFontSize;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)cleanPreviousConfiguration;
- (void)playPresentationSound;
- (void)_playPresentationSound;
- (BOOL)didPlayPresentationSound;
- (BOOL)isCriticalAlert;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)dismissOnLock;
- (BOOL)togglesMediaControls;
- (BOOL)unlocksScreen;
- (BOOL)undimsScreen;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)allowAutoUnlock;
- (BOOL)allowMenuButtonDismissal;
- (void)dealloc;
- (id)init;
- (id)alertSheet;
- (Class)alertSheetClass;

@end

