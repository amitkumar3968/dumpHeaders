/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUSongsDataSource.h>

@class MPMediaPlaylist;

@interface IUOnTheGoDataSource : IUSongsDataSource
{
    MPMediaPlaylist *_playlist;
}

- (void)_mutateQueriesEntitiesWithBlock:(id)arg1;
@property(readonly) MPMediaPlaylist *playlist;
- (BOOL)updateQueriesPredicates;
- (id)entitiesForQuery:(id)arg1;
- (float)rowHeight;
- (BOOL)moveIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)deleteIndexesInRange:(struct _NSRange)arg1;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (BOOL)allowsRearrange;
- (BOOL)allowsDeletion;
- (void)dealloc;

@end

