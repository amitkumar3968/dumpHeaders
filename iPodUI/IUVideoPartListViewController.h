/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

#import "MPImageCacheDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPImageCache, MPMediaItem, NSIndexPath, UIAlertView, UITableView;

@interface IUVideoPartListViewController : IUiPodViewController <MPImageCacheDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    MPImageCache *_imageCache;
    BOOL _scrollToContentPositionOnNextAppear;
    id <IUVideoPartListViewControllerDelegate> _delegate;
    NSIndexPath *_indexPathToFlash;
    NSIndexPath *_rentalAlertPendingIndexPath;
    UIAlertView *_rentalAlertView;
    int _layoutOrientation;
}

+ (BOOL)supportsViewControllerStyle:(int)arg1;
+ (Class)backstopViewClass;
@property(retain, nonatomic) NSIndexPath *indexPathToFlash; // @synthesize indexPathToFlash=_indexPathToFlash;
@property(nonatomic) id <IUVideoPartListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFooterView;
- (void)_performActionForMediaItemAtIndexPath:(id)arg1;
- (void)_performActionForActionRowAtIndexPath:(id)arg1;
- (void)_layoutViewsForOrientation:(int)arg1;
- (void)_destroyRentalAlertView;
- (void)_cancelRentalAlertView:(BOOL)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)imageCache:(id)arg1 loadedImage:(id)arg2 forRequest:(id)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (unsigned int)trackToPlayInDataSource:(id)arg1;
- (void)setScrollToContentPositionOnNextAppear;
- (void)pushPlaybackViewControllerForPlaybackIndex:(unsigned int)arg1 fillerImage:(id)arg2 startTime:(double)arg3;
- (void)pushPlaybackViewControllerForPlaybackIndex:(unsigned int)arg1 fillerImage:(id)arg2;
- (id)indexPathForRowOfContentPosition;
- (Class)tableViewCellClass;
- (void)flashItemForMediaItem:(id)arg1 atTime:(double)arg2;
- (void)resumeImageLoading;
- (void)suspendImageLoading;
@property(readonly, nonatomic) MPMediaItem *firstMediaItem;
- (void)dealloc;

@end

