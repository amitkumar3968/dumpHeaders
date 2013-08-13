/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SUGridViewDataSource <NSObject>
- (int)gridView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)gridView:(id)arg1 numberOfColumnsInSection:(int)arg2;
- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;

@optional
- (int)numberOfSectionsInGridView:(id)arg1;
- (id)gridView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)gridView:(id)arg1 commitEditingStyle:(int)arg2 forCellAtIndexPath:(id)arg3;
@end

