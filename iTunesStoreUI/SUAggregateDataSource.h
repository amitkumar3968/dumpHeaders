/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, NSMutableArray;

@interface SUAggregateDataSource : SUTableDataSource
{
    NSMutableArray *_headerViews;
    NSMutableArray *_sources;
    int _tableViewStyle;
}

@property(nonatomic) int tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(readonly, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (int)_localIndexForSectionIndex:(int)arg1;
- (void)setCellReuseSource:(id)arg1;
- (void)reloadData;
- (void)reloadCellContexts;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfColumnsInSection:(int)arg1;
- (id)headerViewForSection:(int)arg1;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (id)indexPathForRowIndex:(unsigned int)arg1 inSectionIndex:(unsigned int)arg2;
- (id)dataSourceForIndexPath:(id)arg1;
- (void)addDataSource:(id)arg1 withHeaderView:(id)arg2;
- (void)dealloc;

@end

