/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIPDFPage;

@interface UIPDFSelection : NSObject
{
    UIPDFPage *_page;
    struct CGPDFSelection *_cgSelection;
    BOOL _dirty;
    struct __CFString *_string;
    CDStruct_dff5684f stringRange;
}

@property(nonatomic) CDStruct_dff5684f stringRange; // @synthesize stringRange;
- (CDStruct_dff5684f)extent;
- (void)copyToPasteboard;
- (unsigned int)extendAtEnd:(unsigned int)arg1;
- (unsigned int)extendAtStart:(unsigned int)arg1;
- (id)archive;
- (CDStruct_95077174)rectangleAtIndex:(unsigned int)arg1 scale:(float)arg2 inset:(float)arg3;
- (id)htmlAtIndex:(unsigned int)arg1;
- (id)textAtIndex:(unsigned int)arg1;
- (BOOL)getBounds:(struct CGRect *)arg1 transform:(struct CGAffineTransform *)arg2 index:(unsigned int)arg3;
- (unsigned int)numberOfRectangles;
- (BOOL)isWord;
- (id)containingTextLine;
- (id)selectionExtendedToLineBoundaries;
- (BOOL)isNonEmpty;
- (BOOL)isEmpty;
- (id)attributedStringAtIndex:(unsigned int)arg1;
- (id)string;
- (struct CGRect)bounds;
- (struct CGAffineTransform)transform;
- (id)page;
- (id)initWithSelection:(id)arg1;
- (id)initWithPage:(id)arg1 fromArchive:(id)arg2;
- (id)description;
- (void)extendToParagraph;
- (struct CGPDFSelection *)CGSelection;
- (void)dealloc;
- (id)initWithPage:(id)arg1 cgSelection:(struct CGPDFSelection *)arg2;

@end

