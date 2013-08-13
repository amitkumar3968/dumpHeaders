/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDTable, WDTableRowProperties;

__attribute__((visibility("hidden")))
@interface WDTableRow : NSObject
{
    int mIndex;
    WDTable *mTable;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}

- (id)newCellIterator;
- (id)cellIterator;
- (id)addCellWithIndex:(int)arg1;
- (id)addCell;
- (id)cellAt:(int)arg1;
- (int)cellCount;
- (id)properties;
- (id)table;
- (int)index;
- (void)dealloc;
- (id)initWithTable:(id)arg1 at:(int)arg2;

@end

