/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "BasicAccount.h"

#import "AccountCreationProtocol.h"
#import "AccountFullAccountProtocol.h"
#import "BasicAccountSyncing.h"

@class ACAccount, DASettingsTemplate, DAStatusReport, NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing>
{
    ACAccount *_backingAccountInfo;
    int _dataclasses;
    BOOL _requiresAccountDeleteAndReAdd;
    BOOL _hasInitted;
    BOOL _shouldPromptForPassword;
    BOOL _shouldFailAllTasks;
    BOOL _shouldUseOpportunisticSockets;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DASettingsTemplate *_settingsTemplate;
    DAStatusReport *_statusReport;
    struct __CFDictionary *_consumers;
    struct __CFURLStorageSession *_storageSession;
}

+ (id)newAccountOfAccountType:(id)arg1;
+ (Class)classForAccountType:(id)arg1;
+ (id)defaultProperties;
+ (Class)daemonClass;
+ (Class)clientClass;
+ (Class)accountClass;
@property BOOL shouldUseOpportunisticSockets; // @synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets;
@property(nonatomic) BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property(readonly) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property(retain) DASettingsTemplate *settingsTemplate; // @synthesize settingsTemplate=_settingsTemplate;
@property(readonly) ACAccount *backingAccountInfo; // @synthesize backingAccountInfo=_backingAccountInfo;
@property BOOL shouldPromptForPassword; // @synthesize shouldPromptForPassword=_shouldPromptForPassword;
@property(readonly) int enabledDataclassesBitmask; // @synthesize enabledDataclassesBitmask=_dataclasses;
- (BOOL)upgradeToAccountsdWithStore:(id)arg1 parentAccount:(id)arg2;
- (id)backingACAccountTypeIdentifier;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3;
- (void)upgradeToHoodooAccountInfo;
- (BOOL)upgradeAccount;
- (BOOL)_upgradeSelfFromPreKirkwood;
- (void)_removeHostsToTrust;
- (BOOL)accountNeedsUpgrade;
@property(setter=setDAAccountVersion:) int daAccountVersion;
- (void)saveAccountSettings;
- (void)saveChildAccountSettingsWithAccountsManager:(id)arg1;
@property(readonly) NSArray *appIdsForPasswordPrompt;
- (id)urlForKeychain;
@property(copy) NSString *user;
- (id)description;
- (BOOL)usesLegacyAccountSettings;
- (struct __CFURLStorageSession *)copyStorageSession;
- (BOOL)childKeyIsSharedForWriting:(id)arg1;
- (BOOL)childKeyIsSharedForReading:(id)arg1;
- (BOOL)isHotmailAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isDAMMeAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isLDAPAccount;
- (BOOL)isActiveSyncAccount;
- (BOOL)isEqualToAccount:(id)arg1;
- (void)resetStatusReport;
- (BOOL)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (BOOL)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
@property(readonly) BOOL isChildAccount;
- (void)cleanupAccountFiles;
- (void)setExceptions:(struct __CFData *)arg1 forDigest:(id)arg2;
- (struct __CFData *)exceptionsForDigest:(id)arg1;
- (id)_exceptionsDict;
- (BOOL)_isIdentityManagedByProfile;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2;
@property(readonly) NSData *identityPersist;
- (id)addUsernameToURL:(id)arg1;
@property(readonly) int keychainAccessibilityType;
- (void)saveAccountProperties;
- (void)prepareForAccountSave;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (void)tearDown;
- (BOOL)requiresAccountDeleteAndReAdd;
@property BOOL needsRediscovery;
@property BOOL shouldAutodiscoverPrincipalURL;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)checkValidityWithConsumer:(id)arg1;
@property(copy) NSURL *principalURL;
@property(copy) NSString *scheme;
@property int port;
@property(retain) NSData *encryptionIdentityPersistentReference;
@property(retain) NSData *signingIdentityPersistentReference;
- (BOOL)accountContainsEmailAddress:(id)arg1;
@property(copy) NSArray *emailAddresses;
@property(copy) NSString *emailAddress;
@property BOOL useSSL;
@property(copy) NSString *host;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (void)setVersion:(id)arg1;
- (id)version;
@property(copy) NSString *password;
- (void)setPassword:(id)arg1 withAccessibility:(int)arg2;
- (id)passwordWithExpected:(BOOL)arg1;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (id)stateString;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (id)spinnerIdentifiers;
- (id)dataclassProperties;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)enabledForDADataclass:(int)arg1;
- (BOOL)isDisabled;
- (BOOL)supportsDADataclass:(int)arg1;
@property(copy) NSString *username;
- (id)displayName;
@property(copy) NSString *accountDescription;
- (void)_setPersistentUUID:(id)arg1;
@property(readonly) NSString *persistentUUID;
@property(readonly, nonatomic) NSString *scheduleIdentifier;
- (id)syncStoreIdentifier;
- (id)accountID;
- (void)resetAccountID;
- (id)initWithProperties:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (BOOL)handleTrustChallenge:(id)arg1;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
- (void)_handlePasswordNotification:(struct __CFUserNotification *)arg1 response:(unsigned long)arg2 callback:(id)arg3;
- (void)_renewAccountCredentialsWithHandler_legacy:(id)arg1;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
@property(readonly) ACAccount *backingCredentialAccount;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(int)arg2 consumer:(id)arg3;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(CDStruct_a734b2e2 *)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(CDStruct_1ef3fb1f *)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 consumer:(id)arg9;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (id)delegateeInvitationICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (BOOL)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(CDStruct_a734b2e2 *)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (id)notesFolders;
- (id)defaultNotesFolder;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)getRootFolderWithConsumer:(id)arg1;

@end
