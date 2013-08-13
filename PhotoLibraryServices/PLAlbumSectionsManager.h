/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSObject<PLAssetContainer>;

@interface PLAlbumSectionsManager : NSObject
{
    NSMutableArray *_sectionRanges;
    BOOL _sectionRangesAreDirty;
    id _sectioningComparator;
    struct NSObject *_album;
}

@property(retain, nonatomic) NSObject<PLAssetContainer> *album; // @synthesize album=_album;
@property(copy, nonatomic) id sectioningComparator; // @synthesize sectioningComparator=_sectioningComparator;
- (void)setNeedsReload;
- (void)processAlbumDidChangeNotification:(id)arg1 withHandler:(id)arg2;
- (void)_reloadSections;
- (id)assetIndexPathForIndex:(unsigned int)arg1;
- (id)assetIndexesForIndexPaths:(id)arg1;
- (unsigned int)assetIndexForIndexPath:(id)arg1;
- (unsigned int)numberOfAssetsInSection:(unsigned int)arg1;
@property(readonly) unsigned int numberOfSections;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1;

@end

