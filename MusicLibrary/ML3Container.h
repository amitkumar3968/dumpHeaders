/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity
{
}

+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(BOOL)arg3;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(BOOL)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (void)populateStaticItemsOfDynamicContainersInLibrary:(id)arg1;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (BOOL)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned long)arg3 limited:(BOOL)arg4 trackOrder:(unsigned long)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList *)arg1 dynamicCriteria:(BOOL)arg2;
+ (BOOL)hasCriterionInCriteriaList:(struct SearchCriteriaList *)arg1 forITDBTrackField:(int)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (BOOL)smartCriteriaCanBeEvaluated:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingProperties;
+ (int)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (BOOL)setTracksWithSwappedPersistentIDData:(id)arg1;
- (BOOL)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2;
- (BOOL)moveTrackFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned int)arg2 notify:(BOOL)arg3;
- (BOOL)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned int)arg2;
- (BOOL)addTrackWithPersistentID:(long long)arg1;
- (BOOL)removeTracksWithPersistentIDs:(const long long *)arg1 atFilteredIndexes:(id)arg2;
- (BOOL)removeTracksAtIndexes:(id)arg1;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2;
- (BOOL)setContainsTrack:(BOOL)arg1 forPersistentID:(long long)arg2 notify:(BOOL)arg3;
- (BOOL)removeTracksAtIndexes:(id)arg1 notify:(BOOL)arg2 indexesTransformBlock:(id)arg3;
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (BOOL)removeAllTracks;
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)arg1 size:(int)arg2;
- (BOOL)_setSwappedItemPersistentIDs:(const long long *)arg1 size:(int)arg2 notify:(BOOL)arg3;
- (void)bindPopulateStatement:(id)arg1 withStaticTrackPersistentID:(id)arg2;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
@property(readonly) NSArray *displayOrderingTerms;
@property(readonly) NSArray *cloudDisplayOrderingTerms;
@property(readonly) long long limitValue;
@property(readonly) NSArray *limitOrderingTerms;
- (id)evaluationOrderingTerms;
@property(readonly) NSString *limitingProperty;
- (BOOL)isCustomContainerOrderingDescending;
@property(readonly, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property(readonly, getter=isLimitedByCount) BOOL limitedByCount;
- (BOOL)isEvaluationOrderingDescending;
@property(readonly) ML3Predicate *dynamicPredicate;
@property(readonly) ML3Predicate *staticPredicate;
- (struct SearchCriteriaList *)importedCriteriaList;
- (void)didChangeValueForProperties:(const id *)arg1 count:(unsigned int)arg2;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

@end

