/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNFServiceHandler : NSObject
{
}

+ (BOOL)disconnect;
+ (BOOL)isConnected;
+ (BOOL)connect;
+ (BOOL)connect:(BOOL)arg1;
+ (void)_daemonConnectedNotification:(id)arg1;
+ (void)_accountRegistrationStatusChanged:(id)arg1;
+ (BOOL)faceTimeIsAvailable;
+ (void)setupServiceHandlerForControllerType:(int)arg1;
+ (void)updateConferenceCapabilitiesForControllerType:(int)arg1;
+ (void)setCapabilities:(unsigned long long)arg1;
+ (unsigned long long)capabilities;
+ (int)activationState;
+ (void)activateFaceTime;
+ (BOOL)faceTimeIsSupported;
+ (id)faceTimeSourceAccount;
+ (BOOL)_isValidProcess;

@end

