/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IUActionRowDataSource : NSObject
{
    NSMutableArray *_rows;
}

- (unsigned int)removeActionRowWithTag:(int)arg1;
- (void)insertActionRow:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)indexOfActionRowWithTag:(int)arg1;
- (void)enumerateActionRowsUsingBlock:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
- (void)addActionRow:(id)arg1;
@property(readonly, nonatomic) NSArray *actionRows;
- (id)actionRowAtIndex:(unsigned int)arg1;
- (void)dealloc;

@end

