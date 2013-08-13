/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUModalContext.h>

@class MPMediaPlaylist, NSMutableSet;

@interface IUOnTheGoModalContext : IUModalContext
{
    NSMutableSet *_pickedDataSourceActionRowSet;
    NSMutableSet *_pickedPersistentIDSet;
    MPMediaPlaylist *_playlist;
}

@property(retain, nonatomic) MPMediaPlaylist *playlist; // @synthesize playlist=_playlist;
- (void)_addTracksForActionRowAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)_addTracks:(id)arg1;
- (void)_addTrackAtIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)_doneAction:(id)arg1;
- (BOOL)shouldSetEditing:(BOOL)arg1;
- (BOOL)hideIndexBar;
- (void)handleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (id)newTabBarController;
- (id)copyQueryForQuery:(id)arg1;
- (void)configureNavigationItem:(id)arg1;
- (void)configureCell:(id)arg1 forIndex:(unsigned int)arg2 dataSource:(id)arg3;
- (BOOL)canHandleSelectionForIndex:(unsigned int)arg1 dataSource:(id)arg2;
- (void)dealloc;

@end

