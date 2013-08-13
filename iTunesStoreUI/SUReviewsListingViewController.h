/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController
{
    SUButtonAccessoryView *_accessoryView;
}

- (void)_reloadHeaderView;
- (id)_headerItem;
- (BOOL)_canWriteReview;
- (id)_accessoryView;
- (void)_writeAReview:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)newTermsAndConditionsFooter;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)reloadData;
- (void)loadView;
- (void)dealloc;

@end

