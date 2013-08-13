/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUVideoPartListViewController.h>

#import "IUiPadSeasonOfferTableFooterViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class MPStoreCompletionOffering, NSIndexPath, UIAlertView;

@interface IUVideoEpisodesViewController : IUVideoPartListViewController <IUiPadSeasonOfferTableFooterViewDelegate, UIAlertViewDelegate>
{
    UIAlertView *_deleteConfirmAlertView;
    NSIndexPath *_expandedIndexPath;
    float _expandedRowHeight;
    MPStoreCompletionOffering *_storeCompletionOffering;
    unsigned int _cmaLookupToken;
    BOOL _needsTableFooterViewScrolledToVisible;
}

@property(retain, nonatomic) MPStoreCompletionOffering *storeCompletionOffering; // @synthesize storeCompletionOffering=_storeCompletionOffering;
@property(nonatomic) BOOL needsTableFooterViewScrolledToVisible; // @synthesize needsTableFooterViewScrolledToVisible=_needsTableFooterViewScrolledToVisible;
@property(retain, nonatomic) NSIndexPath *expandedIndexPath; // @synthesize expandedIndexPath=_expandedIndexPath;
- (void)updateFooterView;
- (void)autoscrollTableFooterViewToVisibleIfNeeded;
- (void)_moreButtonPressedForCell:(id)arg1;
- (void)_destroyDeleteConfirmAlertView;
- (void)_deleteEpisodeAtIndex:(int)arg1;
- (void)_cancelDeleteConfirmAlertView:(BOOL)arg1;
- (void)_rentalDataDidLoadNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (unsigned int)trackToPlayInDataSource:(id)arg1;
- (id)indexPathForRowOfContentPosition;
- (Class)tableViewCellClass;
- (void)seasonOfferTableFooterView:(id)arg1 showItemsInOffer:(id)arg2;
- (void)seasonOfferTableFooterView:(id)arg1 didChangeToOfferVariant:(int)arg2;
- (void)cancelMoreButtonExpansion;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_reloadCompletionOffering;
- (BOOL)_canShowCompletionOfferings;
- (void)_clearLookupToken;
- (void)_cancelCompletionLookup;
- (id)title;
- (void)dealloc;
- (id)init;

@end

