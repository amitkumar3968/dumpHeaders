/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotConditionalFormat : NSObject
{
    unsigned int mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;
- (id)pivotAreas;
- (void)setScope:(int)arg1;
- (int)scope;
- (void)setType:(int)arg1;
- (int)type;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)priority;
- (void)dealloc;
- (id)init;

@end

