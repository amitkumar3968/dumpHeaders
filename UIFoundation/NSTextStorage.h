/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMutableAttributedString.h"

@class NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString
{
    struct _NSRange _editedRange;
    int _editedDelta;
    struct {
        unsigned int editedMask:8;
        unsigned int :8;
        unsigned int disabled:16;
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)fontSetChanged;
- (void)_notifyEdited:(unsigned int)arg1 range:(struct _NSRange)arg2 changeInLength:(int)arg3 invalidatedRange:(struct _NSRange)arg4;
- (BOOL)fixesAttributesLazily;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange)arg1;
- (struct _NSRange)_rangeByEstimatingAttributeFixingForRange:(struct _NSRange)arg1;
- (void)processEditing;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange)arg2 changeInLength:(int)arg3;
- (int)changeInLength;
- (unsigned int)editedMask;
- (struct _NSRange)editedRange;
- (BOOL)_isEditing;
- (void)endEditing;
- (void)beginEditing;
- (BOOL)_forceFixAttributes;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)_unlock;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (BOOL)_lockForWriting;
- (BOOL)_lockForReading;
- (id)layoutManagers;
- (void)removeLayoutManager:(id)arg1;
- (void)addLayoutManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

