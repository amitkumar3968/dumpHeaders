/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CorePDF/CPChunk.h>

#import "CPDisposable.h"

@class NSMutableArray;

@interface CPPage : CPChunk <CPDisposable>
{
    int pageNumber;
    struct CGRect pageCropBox;
    BOOL hasZones;
    BOOL hasTextLines;
    BOOL isDirty;
    BOOL isStartOfSection;
    long maxLayoutZOrder;
    CPChunk *background;
    float complexity;
    int rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *imagesOnPage;
    NSMutableArray *graphicsOnPage;
    NSMutableArray *columnsOnPage;
    struct CPPDFContext *pdfContext;
    BOOL contextOwner;
    struct CGPDFPage *pdfPage;
    NSMutableArray *textLinesOnPage;
    void *_layout;
    id hitTest;
    BOOL reconstructed;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } mutex;
}

+ (void)sortByReadingOrder:(id)arg1;
- (void)addColumns:(id)arg1;
- (id)columnsOnPage;
- (id)textLinesOnPage;
- (void)layDownObjectsOnPageOld;
- (void)sortByReadingOrder;
- (void)layDownObjectsOnPage;
- (unsigned int)setReadingOrder:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setGraphicPositions:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setCellPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)setPositionsOf:(id)arg1 from:(unsigned int)arg2;
- (unsigned int)traverse:(id)arg1 ordinal:(unsigned int)arg2;
- (id)children;
- (void)restoreBackGroundObjectToPage;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setRotation:(int)arg1;
- (int)rotation;
- (void)setIsStartOfSection:(BOOL)arg1;
- (BOOL)isStartOfSection;
- (void)setHasTextLines:(BOOL)arg1;
- (BOOL)hasTextLines;
- (id)bodyZone;
- (BOOL)hasZones;
- (void)setHasZones:(BOOL)arg1;
- (id)graphicsOnPage;
- (id)imagesOnPage;
- (void)addImage:(id)arg1;
- (id)shapesOnPage;
- (void)addShape:(id)arg1;
- (id)parent;
- (void)setPageNumber:(int)arg1;
- (int)pageNumber;
- (void)setComplexity:(float)arg1;
- (float)complexity;
- (void)accept:(id)arg1;
- (struct CGRect)pageCropBox;
- (void)setPageCropBox:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CPPDFContext *)PDFContext;
- (void)setPDFContext:(struct CPPDFContext *)arg1;
- (void)reconstruct;
- (struct CGPDFPage *)pdfPage;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithPDFPage:(struct CGPDFPage *)arg1;
- (id)init;
- (struct CGPDFLayout *)layout;
- (BOOL)populatePDFLayout:(struct CGPDFLayout *)arg1;
- (id)hitTest;
- (struct CPPDFClipBuffer *)clipBuffer;

@end

