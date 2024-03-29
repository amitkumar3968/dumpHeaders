/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIWindow;

@protocol UIApplicationDelegate <NSObject>

@optional
@property(retain, nonatomic) UIWindow *window;
- (void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2;
- (void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2;
- (BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(id)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(id)arg1 didChangeStatusBarOrientation:(int)arg2;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(int)arg2 duration:(double)arg3;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
@end

