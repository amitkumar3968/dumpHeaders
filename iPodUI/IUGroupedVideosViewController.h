/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaListViewController.h>

#import "IUStoreClientPurchaseDestination.h"

@class NSIndexPath;

@interface IUGroupedVideosViewController : IUMediaListViewController <IUStoreClientPurchaseDestination>
{
    NSIndexPath *_purchasedItemPath;
    BOOL _viewDidAppear;
}

- (void)_showSharedLibrariesController;
- (void)_enabledMediaTypesDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (void)finishPurchasedItemTransition;
- (struct CGRect)preparePurchasedItemForTransition:(unsigned long long)arg1;
- (BOOL)hideSearchRowOnAppear;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowStoreButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
