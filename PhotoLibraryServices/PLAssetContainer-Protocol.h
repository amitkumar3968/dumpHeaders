/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@protocol PLAssetContainer <NSObject>
@property(nonatomic) unsigned int pendingItemsType;
@property(nonatomic) unsigned int pendingItemsCount;
@property(readonly, nonatomic) id sectioningComparator;
@property(readonly, nonatomic) id sortingComparator;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) BOOL isEmpty;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *uuid;
- (void)batchFetchAssets:(id)arg1;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;

@optional
@property(readonly, nonatomic) NSString *name;
- (id)filteredIndexesForPredicate:(id)arg1;
@end

