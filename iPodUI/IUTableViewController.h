/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

#import "IUSearchHelperDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IUMediaActionSheet, IUMediaAlertView, IUSearchHelper, IUTableViewControllerInfo, NSIndexPath, NSObject<OS_dispatch_queue>, UILabel, UISearchDisplayController, UITableView, UIView;

@interface IUTableViewController : IUiPodViewController <IUSearchHelperDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate>
{
    IUMediaActionSheet *_deleteActionSheet;
    IUMediaAlertView *_deleteAlertView;
    struct __CFDictionary *_displayedSectionIndexToDataSourceSectionIndex;
    BOOL _editing;
    NSObject<OS_dispatch_queue> *_footerQueue;
    UIView *_footerView;
    UIView *_globalHeaderView;
    UILabel *_globalHeaderLabel;
    unsigned int _ignoreTableReloadCount;
    NSIndexPath *_indexPathToDeletePendingConfirmation;
    BOOL _needsTableFooterViewScrolledToVisible;
    BOOL _isBeingRemoved;
    BOOL _keepSelectionOnAppear;
    BOOL _reloadingData;
    BOOL _reloadWhenAppEntersForeground;
    IUTableViewControllerInfo *_restoreViewInfoAfterLoad;
    IUSearchHelper *_searchHelper;
    IUMediaAlertView *_selectionConfirmationAlert;
    BOOL _showingIndexBar;
    BOOL _startAtEndOnFirstAppear;
    UITableView *_tableView;
}

+ (Class)tableViewClass;
+ (id)tableViewBackgroundColor;
+ (Class)tableViewCellClass;
@property(nonatomic) BOOL needsTableFooterViewScrolledToVisible; // @synthesize needsTableFooterViewScrolledToVisible=_needsTableFooterViewScrolledToVisible;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) IUSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
- (void)_updateForChangedEditingState:(BOOL)arg1;
- (void)updateFooterView;
- (void)autoscrollTableFooterViewToVisibleIfNeeded;
- (void)_reloadDataIncludingDataSource:(BOOL)arg1 popIfEmpty:(BOOL)arg2;
- (void)_addGlobalHeaderIfNecessary;
- (void)_cancelDeleteAction:(id)arg1;
- (void)_setDeleteAlertView:(id)arg1;
- (void)_setDeleteActionSheet:(id)arg1;
- (void)_reloadDataSource;
- (void)_presentModalContextForTag:(int)arg1;
- (void)_fixupDataSource;
- (void)doDeleteContinuationWithConfirmation:(BOOL)arg1;
- (void)_deleteEntityAtIndexPath:(id)arg1;
- (void)_createTableIfNecessary;
- (void)_cancelDeleteAlertView:(BOOL)arg1;
- (void)_tableViewController_purchasableMediaDidFinishNotification:(id)arg1;
- (void)_tableViewController_networkTypeDidChangeNotification:(id)arg1;
- (void)_tableViewController_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_tableViewController_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_delayedDeselectIndexPath:(id)arg1;
- (void)searchHelperWillEndSearch:(id)arg1;
- (void)searchHelperWillBeginSearch:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (struct CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)accessoryButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_delayedUpdateMovedCellData;
- (void)_updateCellConfigurations;
- (void)_delayedUpdateAlternateStyles;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_deselectSelection:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (BOOL)deselectOnViewWillAppear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setModalContext:(id)arg1;
- (void)setContext:(id)arg1;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (void)_reallyPopSelfIfEmpty;
- (void)_onMainThreadPopSelfIfEmpty;
- (BOOL)_isEmptyAndDoesntWantDisplay:(BOOL)arg1;
- (void)reloadDataForDataSourceInvalidation;
- (void)reloadData;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (void)loadView;
- (id)copyArchivableContexts;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (void)setVisibleCellsUseSubviewLayout:(BOOL)arg1;
@property(readonly, nonatomic) UISearchDisplayController *searchDisplayController;
@property(readonly, nonatomic, getter=isShowingIndexBar) BOOL showingIndexBar;
@property(readonly, nonatomic) BOOL hasSearchBar;
@property(nonatomic) BOOL fadeSelectionOnAppear;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEditing) BOOL editing;
@property(readonly, nonatomic, getter=isIgnoringTableReload) BOOL ignoringTableReload;
- (BOOL)hideSearchRowOnAppear;
- (BOOL)hideActionRowsOnAppear;
- (void)endIgnoringTableReload;
- (void)beginIgnoringTableReload;
- (void)concealCompletionOfferingItems;
- (void)toggleVisibilityOfItemsInCompletionOffering:(id)arg1;
- (void)mediaListAggregateView:(id)arg1 performActionForSimpleCellPreset:(int)arg2;
@property(readonly, nonatomic) BOOL allowsDisclosureInCells;
- (void)_updateHeightForTableHeaderViewHiding;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)reloadCellAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)reloadActionRows;
- (void)performDefaultActionForRow:(int)arg1 existingContext:(id)arg2;
- (void)performDefaultActionForRow:(int)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2 existingContext:(id)arg3;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

