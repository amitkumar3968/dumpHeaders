/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IMDServiceSession.h"

@class FTPushHandler, IMDAppleRegistration, IMTimer, NSArray, NSData, NSString;

@interface IMDAppleServiceSession : IMDServiceSession
{
    FTPushHandler *_pushHandler;
    IMDAppleRegistration *_registrationInfo;
    IMTimer *_restoreTimer;
    BOOL _duringInit;
    BOOL _createdDuringSetup;
    BOOL _shouldRequeryHandles;
    BOOL _issuingDependentCheck;
    BOOL _issuingHandlesCheck;
    BOOL _pendingDepenantCheck;
    BOOL _pendingHandlesCheck;
}

- (void)systemDidLeaveFirstDataProtectionLock;
- (BOOL)canMakeDowngradeRoutingChecks;
@property(readonly, nonatomic) FTPushHandler *pushHandler;
@property(readonly, nonatomic) int serviceType;
@property(readonly, nonatomic) NSString *callerID;
@property(readonly, nonatomic) NSString *callerURI;
- (struct __SecKey *)privateKeyForURI:(id)arg1;
- (id)certForURI:(id)arg1;
@property(readonly, nonatomic) struct __SecKey *callerPrivateKey;
@property(readonly, nonatomic) NSData *callerCert;
- (int)validationStatusForAlias:(id)arg1;
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic) NSArray *vettedAliases;
- (void)reidentity;
- (void)reregister;
- (void)refreshRegistration;
- (void)_refreshRegistration;
- (id)_pushTopics;
@property(readonly, nonatomic) NSArray *pushTopics;
@property(readonly, nonatomic) IMDAppleRegistration *registration;
- (void)validateProfile;
- (void)refreshVettedAliases;
- (void)deactivateAndPurgeIdentify;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)_validateAliases:(id)arg1 validateAlreadyValid:(BOOL)arg2;
- (void)validateAlias:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)addAlias:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)removeAlias:(id)arg1;
- (void)_setValidationStatus:(int)arg1 error:(int)arg2 forAlias:(id)arg3 info:(id)arg4 addToCurrentHandlesIfNeeded:(BOOL)arg5 forceAdd:(BOOL)arg6;
- (int)_validationStatusForAlias:(id)arg1;
- (id)_aliases;
- (id)_aliasStrings;
- (void)_ignoreIncomingPushes;
- (void)_acceptIncomingPushes;
- (void)_updatePushHandler;
- (void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6;
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
- (void)center:(id)arg1 succeededProvisioning:(id)arg2;
- (void)center:(id)arg1 failedEmailValidationRequest:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
- (void)center:(id)arg1 failedLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
- (void)center:(id)arg1 failedUnlinkHandleRequest:(id)arg2 handle:(id)arg3 error:(int)arg4 info:(id)arg5;
- (void)center:(id)arg1 succeededUnlinkHandleRequest:(id)arg2 handle:(id)arg3;
- (void)center:(id)arg1 succeededEmailValidationRequest:(id)arg2 emailAddress:(id)arg3;
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;
- (void)center:(id)arg1 startedAuthenticating:(id)arg2;
- (void)registrationControllerNeedsNewRegistration:(id)arg1;
- (void)registrationController:(id)arg1 deregistrationFailed:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)registrationController:(id)arg1 deregistrationSucceeded:(id)arg2;
- (void)registrationController:(id)arg1 deregistrationWillStart:(id)arg2;
- (void)registrationController:(id)arg1 registrationFailed:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)registrationController:(id)arg1 registrationSucceeded:(id)arg2;
- (void)registrationController:(id)arg1 registrationUpdated:(id)arg2;
- (void)registrationController:(id)arg1 registrationWillStart:(id)arg2;
- (void)center:(id)arg1 succeededIdentification:(id)arg2;
- (void)handler:(id)arg1 profile:(id)arg2 emailConfirmed:(id)arg3 status:(id)arg4;
- (void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3;
- (void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4;
- (void)_issueDependantCheck;
- (void)_updateHandles;
- (void)handler:(id)arg1 reloadBag:(id)arg2;
- (void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4;
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;
- (void)handler:(id)arg1 connectionStatusChanged:(int)arg2;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)unregisterAccount;
- (void)registerAccount;
- (BOOL)_migrateRegistrationIfNeeded;
- (void)_retryRegister;
- (void)authenticateAccount;
- (void)logoutServiceSession;
- (void)loginServiceSession;
- (void)_updateLoginStatus;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
- (void)systemRestoreStateDidChange;
- (void)systemDidStartBackup;
- (void)systemDidFinishMigration;
- (BOOL)_reregister;
- (BOOL)_reregisterAndReidentify:(BOOL)arg1;
- (BOOL)_stopRegistrationAgent;
- (void)_updateRegistrationStatusWithError:(int)arg1 info:(id)arg2;
- (void)_checkRegistration;
- (void)_updateVettedAliases:(id)arg1 emailInfo:(id)arg2 addToCurrentHandlesIfNeeded:(BOOL)arg3;
- (void)_identityReloaded:(id)arg1;
- (void)_registerForDeviceCenterNotifications;
- (void)_registrationAbilityChanged:(id)arg1;
- (BOOL)_isDeviceAuthenticated;
- (BOOL)_isDeviceRegistered;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (BOOL)_rebuildRegistrationInfo:(BOOL)arg1;
- (int)_neededRegistrationType;
- (void)_updatePhoneNumberCallerID;
- (void)clearCallerIDCaches;

@end

