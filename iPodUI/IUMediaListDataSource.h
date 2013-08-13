/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaDataSource.h>

@class IUActionRowDataSource, IUMediaListAggregateViewConfiguration, IUSectionInfo, IUVariableCellConfigurationCache, NSString, UIColor;

@interface IUMediaListDataSource : IUMediaDataSource
{
    Class _cellConfigurationClass;
    IUVariableCellConfigurationCache *_configurationCache;
    IUMediaListAggregateViewConfiguration *_aggregateViewConfiguration;
    unsigned int _createdGlobalContexts:1;
    unsigned int _hasCachedActionState:1;
    unsigned int _loadedAggregateViewConfiguration:1;
    IUActionRowDataSource *_prefixActionRows;
    IUSectionInfo *_sectionInfo;
    IUActionRowDataSource *_suffixActionRows;
    id _reloadActionRowsCompletion;
}

@property(copy, nonatomic) id reloadActionRowsCompletion; // @synthesize reloadActionRowsCompletion=_reloadActionRowsCompletion;
@property(retain, nonatomic) IUSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) Class cellConfigurationClass; // @synthesize cellConfigurationClass=_cellConfigurationClass;
- (void)unloadReloadableData;
- (void)reloadData;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (void)invalidate;
- (void)resetAggregateTableHeaderViewConfiguration;
- (id)contextForContext:(id)arg1 redirectType:(int)arg2;
@property(readonly, nonatomic) BOOL shouldShowGlobalSectionHeader;
- (void)clearCachedActionState;
- (void)cacheActionStateForActionWithContext:(id)arg1;
- (BOOL)shouldDrawAsDisabledForIndex:(unsigned int)arg1;
- (BOOL)selectionPossibleForIndex:(unsigned int)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForActionRow:(id)arg1;
- (id)titleOfSectionAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) struct CGPoint actualImageOrigin;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) IUActionRowDataSource *suffixActionRows;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) BOOL skipSingleItemLists;
- (id)selectionConfirmationAlertForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) float sectionTitleLeftPadding;
@property(readonly, nonatomic) float rowHeight;
- (unsigned int)removeActionRowWithTag:(int)arg1;
- (void)reloadSectionInfo;
- (void)reloadIsEmpty;
- (void)reloadActionRows;
@property(readonly, nonatomic) unsigned int numberOfSections;
@property(readonly, nonatomic) IUActionRowDataSource *prefixActionRows;
- (BOOL)moveIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
@property(readonly, nonatomic) int gridTitleStyle;
@property(readonly, nonatomic) int initialSelectedIndex;
@property(readonly, nonatomic) int initialVisibleIndex;
- (unsigned int)indexOfSectionAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfActionRowWithTag:(int)arg1;
- (BOOL)indexIsActionRow:(unsigned int)arg1;
- (BOOL)gridTitleVisibleAtIndex:(unsigned int)arg1;
- (id)newGridImageView;
@property(readonly, nonatomic) BOOL canShowDownloadAllEntities;
@property(readonly, nonatomic) BOOL gridOverlapIndexBar;
@property(readonly, nonatomic) BOOL gridDrawShadows;
@property(readonly, nonatomic) BOOL gridDimTouchedAlbum;
@property(readonly, nonatomic) BOOL gridUseUnmodifiedThumbnails;
@property(readonly, nonatomic) float gridTopPadding;
@property(readonly, nonatomic) int gridImageContentMode;
@property(readonly, nonatomic) Class gridImageModifierClass;
@property(readonly, nonatomic) float gridHorizontalSpacing;
@property(readonly, nonatomic) UIColor *gridSubtitleColor;
@property(readonly, nonatomic) UIColor *gridTitleColor;
@property(readonly, nonatomic) UIColor *gridAlbumFillColor;
@property(readonly, nonatomic) UIColor *gridBackgroundColor;
- (id)accessoryViewForIndex:(unsigned int)arg1;
- (int)mediaEditingDisclosureStyleForIndex:(unsigned int)arg1;
- (int)mediaDisclosureStyleForIndex:(unsigned int)arg1;
- (unsigned int)destinationIndexForMovingIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)deleteRemovesEntireGroup;
- (BOOL)deleteIndexesInRange:(struct _NSRange)arg1;
- (BOOL)deleteIndex:(unsigned int)arg1;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (void)createGlobalContexts;
@property(readonly, nonatomic) NSString *countStringFormat;
- (BOOL)shouldDisplayWhenEmpty;
@property(readonly, nonatomic) BOOL hideActionRowsOnAppear;
@property(readonly, nonatomic) BOOL hasActionRowsEvenWhenNoOtherRowsExist;
@property(readonly, nonatomic) unsigned int countOfActionRows;
@property(readonly, nonatomic) BOOL hasPlayableItems;
@property(readonly, nonatomic) unsigned int count;
- (id)aggregateTableHeaderViewConfiguration;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (BOOL)canMoveIndex:(unsigned int)arg1;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL allowsRearrange;
@property(readonly, nonatomic) BOOL allowsDeletion;
- (id)actionRowAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

