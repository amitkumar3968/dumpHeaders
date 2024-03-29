/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@class DAAccount, MFDAMailbox, MFDAOfflineCache, MFRecursiveLock, NSArray, NSCountedSet, NSLock, NSMutableDictionary, NSObject<ASAccountActorMessages>, NSSet, NSString;

@interface DAMailAccount : MailAccount
{
    NSObject<ASAccountActorMessages> *_accountConduit;
    DAAccount *_daAccount;
    MFRecursiveLock *_offlineCacheLock;
    MFDAOfflineCache *_offlineCache;
    BOOL _isNetworkReachable;
    NSString *_cachedAccountID;
    NSString *_cachedAccountPersistentUUID;
    NSString *_cachedDisplayName;
    NSString *_cachedEmailAddress;
    NSArray *_cachedEmailAddresses;
    NSString *_cachedIconString;
    BOOL _cachedIsHotmailAccount;
    BOOL _cachedCalendarEnabled;
    BOOL _cachedSecureMIMEEnabled;
    BOOL _cachedSecureMIMEShouldSign;
    BOOL _cachedSecureMIMEShouldEncrypt;
    BOOL _cachedRestrictMessageTransfersToOtherAccounts;
    BOOL _cachedRestrictSendingFromExternalProcesses;
    BOOL _cachedRestrictSyncingRecents;
    NSString *_cachedInboxFolderID;
    NSString *_cachedSentMessagesFolderID;
    NSString *_cachedTrashFolderID;
    MFDAMailbox *_temporaryInbox;
    BOOL _startListeningOnHierarchyChange;
    BOOL _loadedInitialMailboxList;
    BOOL _receivedInitialMailboxUpdate;
    BOOL _doneInitialInboxCheck;
    BOOL _observingPushedFoldersPrefsChanged;
    int _supportsServerSearch;
    unsigned int _daysToSync;
    NSMutableDictionary *_requestQueuesByFolderID;
    NSLock *_watchedFolderIdsLock;
    NSSet *_watchedFolderIds;
    NSCountedSet *_userFocusMailboxIds;
}

+ (id)supportedDataclasses;
+ (id)basicAccountProperties;
+ (id)accountIDForDirectoryName:(id)arg1 isAccountDirectory:(char *)arg2;
+ (id)_URLScheme;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (id)folderIDForRelativePath:(id)arg1 accountID:(id *)arg2;
+ (Class)_accountConduitClass;
- (BOOL)restrictedFromSyncingRecents;
- (BOOL)restrictedFromSendingExternally;
- (BOOL)restrictedFromTransferingMessagesToOtherAccounts;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id *)arg2;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (BOOL)secureMIMEEnabled;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (BOOL)_replayOfflineCache:(id)arg1;
- (void)_deferMailboxRequests:(id)arg1 mailbox:(id)arg2 offlineCache:(id)arg3;
- (id)_offlineCache;
- (BOOL)canGoOffline;
- (void)removeUserFocusMailbox:(id)arg1;
- (void)addUserFocusMailbox:(id)arg1;
- (id)_watchedFolderIds;
- (id)pushedMailboxUids;
- (unsigned int)daysToSync;
- (BOOL)supportsServerSearch;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)setSyncAnchor:(id)arg1 forFolderID:(id)arg2 mailbox:(id *)arg3;
- (id)syncAnchorForFolderID:(id)arg1 mailbox:(id *)arg2;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;
- (id)_updateWatchedFolderIdsAndNotify:(BOOL)arg1;
- (id)_inboxFolderID;
- (id)meetingStorePersistentID;
- (id)delegateeInvitationICSRepresentationInMessage:(id)arg1 summary:(id *)arg2;
- (BOOL)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)dealloc;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)iconString;
- (void)invalidate;
- (id)accountPropertyForKey:(id)arg1;
- (BOOL)_isUnitTesting;
- (BOOL)supportsMessageFlagging;
- (id)primaryMailboxUid;
- (void)_ensureWeHaveLoadedInitialMailboxList;
- (BOOL)isMailboxLocalForType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (BOOL)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(BOOL)arg4 unsuccessfulOnes:(id)arg5;
- (BOOL)performRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)processRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)addRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)addRequest:(id)arg1 mailbox:(id)arg2 consumer:(id)arg3;
- (id)mailboxUidForInfo:(id)arg1;
- (id)mailboxForFolderID:(id)arg1;
- (id)_infoForMatchingURL:(id)arg1;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsRemoteAppend;
- (id)syncAnchorForMailbox:(id)arg1;
- (void)setDAAccount:(id)arg1;
- (id)mailboxPathExtension;
- (id)_URLScheme;
- (BOOL)shouldAppearInMailSettings;
- (BOOL)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id *)arg2;
- (void)_performFolderChange:(id)arg1 completion:(id)arg2;
- (BOOL)_deleteMailbox:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)folderIDForMailbox:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (Class)storeClass;
- (BOOL)canReceiveNewMailNotifications;
- (void)fetchMailboxList;
- (BOOL)finishedInitialMailboxListLoad;
- (void)pushedFoldersPrefsChanged:(id)arg1;
- (id)accountConduit;
- (void)accountHierarchyChanged:(id)arg1;
- (void)_loadChildrenForParent:(id)arg1 fromMap:(id)arg2 intoArray:(id)arg3 replacingInbox:(id)arg4 withID:(id)arg5;
- (BOOL)isRunningInDisallowedBundle;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (void)resetSpecialMailboxes;
- (id)allMailboxUids;
- (id)uniqueIdForPersistentConnection;
- (id)identifier;
- (id)uniqueId;
- (id)deliveryAccount;
- (id)hostname;
- (id)username;
- (BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)displayName;
- (void)foldersContentsChanged:(id)arg1;
- (id)initWithDAAccount:(id)arg1;
- (id)initWithLibrary:(id)arg1 properties:(id)arg2;

@end

