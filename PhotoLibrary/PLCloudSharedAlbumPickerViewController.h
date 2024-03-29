/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibrary/PLAbstractAlbumPickerViewController.h>

#import "PLTexturedCardViewContained.h"

@class PLCloudSharedLibraryViewController, UINavigationItem;

@interface PLCloudSharedAlbumPickerViewController : PLAbstractAlbumPickerViewController <PLTexturedCardViewContained>
{
    UINavigationItem *_navItem;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)libraryViewController:(id)arg1 willSetCellAccessoryType:(int)arg2 forAlbum:(id)arg3;
- (int)albumListFilter;
- (id)preparedLibraryViewController;
@property(readonly, nonatomic) PLCloudSharedLibraryViewController *libraryViewController;
- (void)setAlbumCreationLabel:(id)arg1;
- (id)preparedContentController;
@property(readonly, nonatomic) UINavigationItem *texturedCardNavigationItem;
- (void)dealloc;
- (void)_handleDidSelectAlbum:(struct NSObject *)arg1;
- (id)initWithLibraryContentMode:(int)arg1 assetsToAdd:(id)arg2 completionHandler:(id)arg3;

@end

