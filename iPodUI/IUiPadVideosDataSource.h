/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@class NSMutableIndexSet;

@interface IUiPadVideosDataSource : IUMediaQueriesDataSource
{
    NSMutableIndexSet *_artStillFrameMap;
}

+ (BOOL)usesNowPlayingIndicator;
- (BOOL)selectionPossibleForIndex:(unsigned int)arg1;
- (BOOL)isArtAStillFrameAtIndex:(unsigned int)arg1;
- (void)setArtAStillFrame:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (id)newGridImageView;
- (BOOL)gridUseUnmodifiedThumbnails;
- (BOOL)allowsDeletion;
- (BOOL)alwaysGroupedInGridView;
- (BOOL)shouldDisplayWhenEmpty;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)detailMediaQueryForMediaItem:(id)arg1 baseQuery:(id)arg2;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (int)gridTitleStyle;
- (BOOL)gridDimTouchedAlbum;
- (float)gridTopPadding;
- (int)gridImageContentMode;
- (Class)gridImageModifierClass;
- (id)gridSubtitleColor;
- (id)gridTitleColor;
- (id)gridBackgroundColor;
- (void)reloadActionRows;
- (id)copyGetMoreFromITunesStoreActionRow;
- (struct CGPoint)actualImageOrigin;
- (struct CGSize)thumbnailSize;
- (void)setQuery:(id)arg1;
- (void)dealloc;

@end

