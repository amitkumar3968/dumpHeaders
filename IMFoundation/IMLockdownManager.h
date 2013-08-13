/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IMLockdownManager : NSObject
{
    int _state;
    BOOL _settingUpActivationState;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL _hasShownWaitingAlertThisSession; // @synthesize _hasShownWaitingAlertThisSession;
@property(nonatomic) BOOL _hasShownMismatchedSIM; // @synthesize _hasShownMismatchedSIM;
@property(nonatomic) BOOL _isCarrierInstall; // @synthesize _isCarrierInstall;
@property(nonatomic) BOOL _isInternalInstall; // @synthesize _isInternalInstall;
@property(nonatomic) BOOL _settingUpActivationState; // @synthesize _settingUpActivationState;
@property(nonatomic) int _state; // @synthesize _state;
@property(readonly, nonatomic) NSString *uniqueDeviceIdentifier;
@property(readonly, nonatomic) struct __SecIdentity *copyIdentity;
@property(readonly, nonatomic) int lockdownState;
@property(readonly, nonatomic) BOOL isActivated;
@property(readonly, nonatomic) BOOL isCarrierInstall;
@property(readonly, nonatomic) BOOL isInternalInstall;
- (void)_setupActivationState;
- (void)_resetActivationState;
- (void)_activationFailed;
- (void)dealloc;
- (id)init;

@end
