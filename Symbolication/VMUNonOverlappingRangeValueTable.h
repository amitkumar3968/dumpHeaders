/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, VMURangeArray;

@interface VMUNonOverlappingRangeValueTable : NSObject
{
    VMURangeArray *_ranges;
    NSMutableArray *_values;
}

- (void)setValue:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)setValue:(id)arg1 forNonOverlappingRange:(struct _VMURange)arg2;
- (struct _NSRange)_indexNSRangeForOverlappingRangesForVMURange:(struct _VMURange)arg1;
- (struct _NSRange)_indexNSRangeInCandidateNSRange:(struct _NSRange)arg1 forVMURange:(struct _VMURange)arg2;
- (id)valueForLocation:(unsigned long long)arg1;
- (unsigned int)_indexForLocation:(unsigned long long)arg1;
- (id)init;

@end

