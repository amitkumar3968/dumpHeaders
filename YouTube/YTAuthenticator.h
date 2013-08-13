/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface YTAuthenticator : NSObject
{
    id <YTAuthenticatorDelegate> _delegate;
    NSMutableArray *_deferredRequests;
    int _accountAuthState;
    int _deviceAuthState;
}

+ (id)sharedAuthenticator;
+ (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)loadStoredCredentials;
- (BOOL)isAccountAuthenticated;
- (BOOL)isWaitingForAuthentication;
- (BOOL)cachedCredentialsValid;
- (void)clearAccountInfo;
- (void)invalidateToken;
- (void)addAuthenticationHeadersToRequest:(id)arg1 accountAuthRequired:(BOOL)arg2;
- (void)_removeDefferredRequests;
- (void)_completeAuthenticationForDeferredRequests;
- (void)userCancelledAccountAuthentication;
- (void)setAccount:(id)arg1 password:(id)arg2;
- (void)_failedToAuthenticateAccount:(id)arg1;
- (void)_didAuthenticateAccount:(id)arg1;
- (void)_removeAccountAuthenticationObservers;
- (void)_addAccountAuthenticationObserers;
- (void)_failedToAuthenticateDevice:(id)arg1;
- (void)_didAuthenticateDevice:(id)arg1;
- (void)_removeDeviceAuthenticationObservers;
- (void)_addDeviceAuthenticationObserers;
- (void)_addDeferredRequest:(id)arg1 accountAuthRequired:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

