/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PLRootLibraryNavigationController <NSObject>
- (BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
- (BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(struct NSObject *)arg2;
- (BOOL)albumIsAvailableForNavigation:(struct NSObject *)arg1;
- (BOOL)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAsset:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(BOOL)arg3;
- (void)navigateToAsset:(id)arg1 inAlbum:(struct NSObject *)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(id)arg3;
@end

