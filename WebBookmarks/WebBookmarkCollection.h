/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class TIWordTokenizer, WebBookmark;

@interface WebBookmarkCollection : NSObject
{
    struct sqlite3 *_db;
    struct __CFLocale *_locale;
    TIWordTokenizer *_wordTokenizer;
    WebBookmark *_rootBookmark;
    BOOL _merging;
    BOOL _dirty;
}

+ (id)safariBookmarkCollection;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (id)safariDirectoryPath;
+ (id)readingListArchivesDirectoryPath;
+ (void)_postBookmarksChangedSyncNotification;
+ (void)unlockSync;
+ (BOOL)lockSync;
+ (BOOL)isLockedSync;
+ (id)_uniqueExternalUUID;
@property(nonatomic, getter=isMerging) BOOL merging; // @synthesize merging=_merging;
- (unsigned int)rollingReadingListMaximumCount;
- (id)rollingListOfArchivedReadingListItems;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (BOOL)rollOutLastReadingListItem;
- (void)_cullReadingListBookmarksNeedingArchiveInModeToRollingListSize:(int)arg1;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned int)arg2;
- (id)readingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(int)arg1;
- (unsigned int)countReadingListBookmarksNeedingArchiveInMode:(int)arg1;
- (id)_orderedWhereClauseForArchiveMode:(int)arg1;
- (void)postBookmarksDidReloadNotification;
- (unsigned int)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(BOOL)arg2;
- (id)firstReadingListBookmarkWithIconDataWithBaseURL:(id)arg1;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2;
- (id)bookmarksWithURLsMatchingString:(id)arg1;
- (id)bookmarksWithTitlesMatchingString:(id)arg1;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (id)bookmarksMatchingString:(id)arg1;
- (struct sqlite3_stmt *)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (BOOL)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (BOOL)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)_moveBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (BOOL)deleteBookmark:(id)arg1;
- (BOOL)deleteBookmark:(id)arg1 postChangeNotification:(BOOL)arg2;
- (BOOL)saveBookmark:(id)arg1;
- (id)readingListItemsWithIconData:(BOOL)arg1 unreadOnly:(BOOL)arg2;
- (unsigned int)readingListFolderBookmarkID;
- (id)readingList;
- (id)readingListWithUnreadOnly:(BOOL)arg1;
- (id)bookmarksBarList;
- (id)rootList;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(BOOL)arg3;
- (id)listWithID:(unsigned int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithSpecialID:(unsigned int)arg1;
- (id)listWithID:(unsigned int)arg1;
- (id)subfoldersOfID:(unsigned int)arg1;
- (id)rootBookmark;
- (id)bookmarkAtPath:(id)arg1;
- (id)readingListFolder;
- (id)bookmarksBarBookmark;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarkWithID:(unsigned int)arg1;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)purgeableReadingListItems;
- (void)localeSettingsChanged;
- (BOOL)vacuum;
- (BOOL)clearAllReadingListArchives;
- (BOOL)markArchivedReadingListItemsAsNonRecoverable;
- (BOOL)cleanupReadingListArchives;
- (void)dealloc;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(BOOL)arg4;
- (BOOL)_openDatabaseAtPath:(id)arg1 checkIntegrity:(BOOL)arg2 error:(id *)arg3;
- (id)initSafariBookmarkCollectionCheckingIntegrity:(BOOL)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 checkIntegrity:(BOOL)arg2;
- (void)rollbackSyncTransaction;
- (void)commitSyncTransaction;
- (BOOL)beginSyncTransaction;
- (id)syncDataForKey:(id)arg1;
- (BOOL)setSyncData:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (BOOL)syncSetString:(id)arg1 forKey:(id)arg2;
- (BOOL)_deleteSyncPropertyForKey:(id)arg1;
- (BOOL)_syncPropertyExistsForKey:(id)arg1;
- (unsigned int)generation;
- (BOOL)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_markSpecialBookmarks;
- (BOOL)_mergeChildrenOfID:(unsigned int)arg1 referencingBase:(id)arg2 error:(id *)arg3;
- (BOOL)_syncAdd:(id)arg1 toParent:(unsigned int)arg2 withOrderIndex:(unsigned int)arg3 error:(id *)arg4;
- (id)bookmarksDictionary;
- (BOOL)_addChildrenOfID:(unsigned int)arg1 toCollection:(id)arg2 recursive:(BOOL)arg3 error:(id *)arg4;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt *)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (void)_simulateCrashWithDescription:(id)arg1;
- (void)_startReadingListFetcher;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (void)_postBookmarksFolderContentsDidChangeNotification:(unsigned int)arg1;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksDidReloadNotification;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (BOOL)_incrementDAVGeneration;
- (int)_DAVGeneration;
- (BOOL)_markBookmarkID:(unsigned int)arg1 added:(BOOL)arg2;
- (BOOL)_clearChangeList;
- (id)_changeList;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (BOOL)_incrementGeneration;
- (BOOL)_indexAllTitleWords;
- (BOOL)_reindexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (BOOL)_indexBookmarkID:(unsigned int)arg1 title:(id)arg2;
- (BOOL)_clearTitleWordsForBookmarkID:(unsigned int)arg1;
- (void)_normalizeSearchString:(struct __CFString *)arg1;
- (BOOL)_deleteAncestorTableEntriesForBookmarkID:(unsigned int)arg1;
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withParentID:(unsigned int)arg2;
- (BOOL)_rebuildAncestorTable;
- (BOOL)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (BOOL)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDAtOrderIndex:(int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDsInFolderWithServerID:(id)arg1;
- (id)_syncKeysForServerIDs:(id)arg1;
- (BOOL)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (BOOL)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (BOOL)_setServerID:(id)arg1 forBookmark:(id)arg2;
- (id)_bookmarkWithServerID:(id)arg1;
- (unsigned int)_bookmarkIDForServerID:(id)arg1;
- (id)_serverIDForBookmarkID:(unsigned int)arg1;
- (BOOL)_updateCachedChildCountForParentID:(unsigned int)arg1 inDirection:(int)arg2;
- (BOOL)_markBookmarkID:(unsigned int)arg1 withSpecialID:(unsigned int)arg2;
- (BOOL)_saveBookmark:(id)arg1 withSpecialID:(unsigned int)arg2 updateGenerationIfNeeded:(BOOL)arg3;
- (id)_databaseTitleForSpecialID:(unsigned int)arg1;
- (unsigned int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (unsigned int)_specialIDForBookmarkTitle:(id)arg1;
- (BOOL)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(unsigned int)arg3 orderIndex:(unsigned int)arg4 isFolder:(BOOL)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 reorderSiblings:(BOOL)arg8 updateParentChildCount:(BOOL)arg9 updateAncestorEntries:(BOOL)arg10;
- (BOOL)_deleteRecursively:(unsigned int)arg1;
- (BOOL)_deleteBookmark:(id)arg1 leaveTombstone:(BOOL)arg2;
- (BOOL)_clearAllDAVSyncData;
- (BOOL)_clearAllSyncKeys;
- (BOOL)_clearSyncKeysUnderBookmarkID:(unsigned int)arg1 isFolder:(BOOL)arg2;
- (BOOL)_clearAllTombstones;
- (BOOL)_insertTombstoneWithServerID:(id)arg1;
- (BOOL)_moveBookmark:(id)arg1 toFolderWithID:(unsigned int)arg2;
- (int)_intFromExecutingSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (int)_executeSQL:(id)arg1;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(int)arg1;
- (id)_errorForMostRecentSQLiteError;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt *)arg1;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1 countOnly:(BOOL)arg2;
- (struct sqlite3_stmt *)_selectBookmarksWhere:(id)arg1;
- (BOOL)_restoreMissingSpecialBookmarks;
- (BOOL)_restoreBookmarkBarIfMissing;
- (BOOL)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (void)_migrateToCurrentSchema;
- (void)_rerunMigrationsIfNecessary;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion9ToVersion10;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (void)_createSchema;
- (int)_userVersion;
- (id)_bookmarksInListWhere:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)_mergeCandidateBookmarkWithAddress:(id)arg1 parent:(unsigned int)arg2;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(unsigned int)arg2;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(BOOL)arg2 inParent:(unsigned int)arg3;
- (id)_bookmarkWithSpecialID:(unsigned int)arg1;
- (int)_orderIndexForBookmarkInsertedIntoParent:(unsigned int)arg1 insertAtBeginning:(BOOL)arg2;
- (BOOL)_updateHiddenAncestorCountForBookmarksUnderFolderID:(unsigned int)arg1 addingOffset:(int)arg2;
- (BOOL)_insertAncestorTableEntriesForBookmarkID:(unsigned int)arg1 withAncestorIDs:(id)arg2;
- (void)_clearAndCreateAncestorTable;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(BOOL)arg1;
- (void)_normalizeDatabaseURLs;
- (BOOL)_importSyncAnchorPlist:(id)arg1;
- (BOOL)_importBookmarksPlist:(id)arg1;

@end

