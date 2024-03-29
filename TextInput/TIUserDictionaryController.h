/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSMutableSet, NSOperationQueue, NSPersistentStoreCoordinator, TIPersistentQueue;

@interface TIUserDictionaryController : NSObject
{
    NSMutableSet *_pendingDeletions;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSArray *_cachedAllWords;
    NSOperationQueue *_operationQueue;
    TIPersistentQueue *_changeJournal;
}

+ (id)addPersistentStoreAtURL:(id)arg1 ubiquitousContentURL:(id)arg2 toCoordinator:(id)arg3;
+ (id)newPersistentStoreCoordinatorWithURL:(id)arg1 ubiquitousContentURL:(id)arg2;
+ (id)newManagedObjectModel;
+ (id)cloudPersistentStorePath;
+ (id)localPersistentStorePath;
+ (void)loadWordKeyPairs:(id)arg1;
@property(readonly, nonatomic) TIPersistentQueue *changeJournal; // @synthesize changeJournal=_changeJournal;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSArray *cachedAllWords; // @synthesize cachedAllWords=_cachedAllWords;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)unloadManagedObjectContext;
- (void)loadManagedObjectContext;
- (void)unloadPersistentStore;
- (void)loadPersistentStore;
- (id)newFetchRequestForContext:(id)arg1;
- (id)predicateFilteringForSearchText:(id)arg1;
@property(readonly, nonatomic) NSArray *userWordSortDescriptors;
- (id)userWordSortDescriptorsForContext:(id)arg1;
- (Class)userWordClassForContext:(id)arg1;
@property(readonly, nonatomic) NSEntityDescription *userWordEntityDescription;
- (id)userWordEntityDescriptionForContext:(id)arg1;
- (void)userDictionaryStoreDidSave:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)invalidateCachedWords;
- (BOOL)save;
- (void)performSelector:(SEL)arg1 withEachWordIn:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *pendingDeletions;
- (void)convertUpdatesToInsertionsAndDeletions;
- (void)sendChangesToKBD;
- (void)revertWord:(id)arg1;
- (void)deleteWord:(id)arg1;
- (id)userWordWithCommittedValues:(id)arg1;
- (id)emptyWord;
- (id)allWords;
- (id)arrayOfUniqueWordsFromSortedArray:(id)arg1;
- (BOOL)isUserDictionaryAccessible;
- (BOOL)isOnUserDictionaryAccessQueue;
@property(readonly, nonatomic) NSOperationQueue *dictionaryAccessQueue;
- (id)persistentStoreURL;
- (id)persistentStoreURLWithUbiquitousContentURL:(id *)arg1;
- (void)dealloc;
- (void)initializePersistentStoreCoordinator;
- (id)init;

@end

