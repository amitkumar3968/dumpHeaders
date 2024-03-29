/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@class IUMutableSectionInfo, NSNumberFormatter, NSOperationQueue, NSString;

@interface IUSearchDataSource : IUMediaQueriesDataSource
{
    NSOperationQueue *_queryOperationQueue;
    IUMediaQueriesDataSource *_dataSourceToSearch;
    NSString *_searchString;
    int _searchScope;
    IUMutableSectionInfo *_mutableSectionInfo;
    unsigned int _foundSearchResultCount;
    NSNumberFormatter *_resultCountNumberFormatter;
    NSString *_searchIdentifier;
    BOOL _hasNoResultsForSearchString;
    BOOL _searchFinished;
}

+ (int)mediaEntityType;
@property(retain, nonatomic) NSString *searchIdentifier; // @synthesize searchIdentifier=_searchIdentifier;
@property(readonly, nonatomic) BOOL hasNoResultsForSearchString; // @synthesize hasNoResultsForSearchString=_hasNoResultsForSearchString;
@property(nonatomic) int searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) IUMediaQueriesDataSource *dataSourceToSearch; // @synthesize dataSourceToSearch=_dataSourceToSearch;
- (void)_postResultsDoneNotification;
- (void)_postResultsChangedNotification:(id)arg1;
- (void)_updateDataInBackground;
- (void)_searchPerformOperation:(id)arg1 didProduceQuery:(id)arg2 forSearchIdentifier:(id)arg3;
- (id)_humanizedTitleWithResultCount:(unsigned int)arg1 searchStyle:(CDStruct_ee3f66e2 *)arg2;
- (id)copyContinueSearchInITunesStoreActionRow;
- (void)_continueSearchInITunesStore:(id)arg1;
@property(readonly, nonatomic) BOOL canContinueSearchInITunesStore;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)shouldShowGlobalSectionHeader;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (void)reloadSectionInfo;
- (void)reloadActionRows;
- (id)countStringFormat;
- (BOOL)showShuffleButtonWhenApplicable;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)title;
- (id)queriesAppropriateForGroupingProperty:(int)arg1 mediaType:(int)arg2;
- (void)dealloc;
- (void)_restrictionsDidChangeNotification:(id)arg1;
- (void)_playlistContentsDidChangeNotification:(id)arg1;
- (id)init;

@end

