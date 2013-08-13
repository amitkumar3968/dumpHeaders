/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUVideoPartListViewController.h>

@interface IUVideoChaptersViewController : IUVideoPartListViewController
{
    unsigned int _selectedChapter;
}

- (void)_playChapter;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (id)indexPathForRowOfContentPosition;
- (Class)tableViewCellClass;
- (BOOL)shouldDisableWhileDownloading;
- (id)title;

@end

