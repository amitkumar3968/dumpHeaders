/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAlbumChangeNotification.h>

#import "PLDerivedNotification.h"
#import "PLIndexMapperDataSource.h"

@class NSIndexSet, PLFilteredAlbum, PLIndexMapper;

@interface PLFilteredAlbumChangeNotification : PLAlbumChangeNotification <PLIndexMapperDataSource, PLDerivedNotification>
{
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAlbumChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_diffDescription;
- (id)description;
- (BOOL)countDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)titleDidChange;
- (BOOL)shouldReload;
- (id)album;
- (id)object;
- (void)dealloc;
- (id)initWithFilteredAlbum:(id)arg1 priorChangeState:(id)arg2 albumChangeNotification:(id)arg3;
- (id)init;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
@property(copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, nonatomic) NSIndexSet *updatedFilteredIndexes;

@end

