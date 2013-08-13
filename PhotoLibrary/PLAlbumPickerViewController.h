/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibrary/PLAbstractAlbumPickerViewController.h>

@class PLLibraryViewController;

@interface PLAlbumPickerViewController : PLAbstractAlbumPickerViewController
{
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (int)libraryViewController:(id)arg1 willSetCellAccessoryType:(int)arg2 forAlbum:(id)arg3;
- (int)bannerViewStyle;
- (int)albumListFilter;
- (void)animateBannerThumbnailToAlbumAtIndex:(unsigned int)arg1 completion:(id)arg2;
- (id)preparedLibraryViewController;
@property(readonly, nonatomic) PLLibraryViewController *libraryViewController;
- (void)setAlbumCreationLabel:(id)arg1;
- (id)preparedContentController;

@end

