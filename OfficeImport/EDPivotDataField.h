/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject
{
    int mBaseField;
    unsigned int mBaseItem;
    unsigned int mFieldId;
    unsigned int mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setName:(id)arg1;
- (id)name;
- (void)setNumFmtId:(unsigned int)arg1;
- (unsigned int)numFmtId;
- (void)setFieldId:(unsigned int)arg1;
- (unsigned int)fieldId;
- (void)setBaseItem:(unsigned int)arg1;
- (unsigned int)baseItem;
- (void)setBaseField:(int)arg1;
- (int)baseField;
- (void)dealloc;
- (id)init;

@end

