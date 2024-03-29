/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSViewController.h>

#import "PSViewControllerOffsetProtocol.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIActionSheet, UIAlertView, UIKeyboard, UIPopoverController, UITableView;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol>
{
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _reusesCells;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _showingSetupController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    BOOL _swapAlertButtons;
    BOOL _keyboardWasVisible;
    UIKeyboard *_keyboard;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    BOOL _popupIsModal;
    BOOL _popupIsDismissing;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint _contentOffsetWithKeyboard;
}

+ (BOOL)displaysButtonBar;
@property(nonatomic) BOOL forceSynchronousIconLoadForCreatedCells; // @synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells;
- (void)_setNotShowingSetupController;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (float)verticalContentOffset;
- (void)selectRowForSpecifier:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (float)_getKeyboardIntersectionHeight;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)pushController:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)dismissPopover;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (id)specifierForID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)controllerForSpecifier:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)showConfirmationSheetForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationActionForSpecifier:(id)arg1;
- (BOOL)performButtonActionForSpecifier:(id)arg1;
- (BOOL)performLoadActionForSpecifier:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)returnPressedAtEnd;
- (void)popupViewWillDisappear;
- (void)formSheetViewWillDisappear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)prepareSpecifiersMetadata;
- (void)viewDidLoad;
- (id)findFirstVisibleResponder;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createPrequeuedPSTableCells:(unsigned int)arg1 etched:(BOOL)arg2;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)cachedCellForSpecifier:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifierID;
- (void)setSpecifierID:(id)arg1;
- (void)reloadSpecifiers;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (void)reload;
- (void)loseFocus;
- (void)createGroupIndices;
- (id)_createGroupIndices:(id)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (id)tableBackgroundColor;
- (id)contentScrollView;
- (Class)backgroundViewClass;
- (int)tableStyle;
- (Class)tableViewClass;
- (id)initForContentSize:(struct CGSize)arg1;
- (id)init;
- (void)dealloc;
- (void)_unloadBundleControllers;
- (void)_loadBundleControllers;
- (void)updateSpecifiersInRange:(struct _NSRange)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeLastSpecifier;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (id)specifiersInGroup:(int)arg1;
- (int)rowsForGroup:(int)arg1;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (BOOL)getGroup:(int *)arg1 row:(int *)arg2 ofSpecifierAtIndex:(int)arg3;
- (BOOL)_getGroup:(int *)arg1 row:(int *)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (BOOL)getGroup:(int *)arg1 row:(int *)arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(int *)arg1 row:(int *)arg2 ofSpecifierID:(id)arg3;
- (id)specifierAtIndex:(int)arg1;
- (int)numberOfGroups;
- (int)indexOfGroup:(int)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (int)indexOfSpecifier:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (int)indexForIndexPath:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)indexPathForIndex:(int)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)specifiers;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)specifier;
- (id)bundle;
- (id)table;
- (id)description;
- (void)setCachesCells:(BOOL)arg1;
- (void)setReusesCells:(BOOL)arg1;
- (void)clearCache;
- (id)popupStylePopoverController;
- (void)showPINSheet:(id)arg1;

@end

