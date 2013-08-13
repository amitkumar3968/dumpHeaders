/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"

@class UINavigationController;

@interface AirPlayDiagnosticsFullscreenController : UIViewController <UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UINavigationControllerDelegate>
{
    UINavigationController *_navController;
    id <AirPlayDiagnosticsFullscreenControllerDelegate> _delegate;
}

@property(nonatomic) id <AirPlayDiagnosticsFullscreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)updateAirPlayLogSettings;
- (void)seekApprovalForAirPlayLogSettings;
- (BOOL)hasCorrectAirPlayLogSettings;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)checkLogSettings;
- (void)dealloc;
- (void)cancelReport;
- (void)startReport;
- (void)cleanupNavigationController;
- (void)invalidate;
- (void)initNavigationControllerWith:(id)arg1;
- (id)init;

@end

