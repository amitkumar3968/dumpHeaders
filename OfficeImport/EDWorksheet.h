/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/EDSheet.h>

@class EDCollection, EDColumnInfoCollection, EDMergedCellCollection, EDPane, EDReference, EDRowBlocks, EDWarnings, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDWorksheet : EDSheet
{
    EDRowBlocks *mRowBlocks;
    EDColumnInfoCollection *mColumnInfos;
    EDCollection *mConditionalFormattings;
    EDCollection *mHyperlinks;
    EDCollection *mTables;
    EDCollection *mPivotTables;
    EDMergedCellCollection *mMergedCells;
    EDPane *mPane;
    EDWarnings *mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned int mMaxRowOutlineLevel;
    unsigned int mMaxColumnOutlineLevel;
    _Bool mFitToPage;
    EDReference *mMaxCellReferencedInFormulas;
    TSUPointerKeyDictionary *mMergedRows;
    TSUPointerKeyDictionary *mMergedCols;
    EDReference *mImplicitCellArea;
}

- (_Bool)hasMergedCells;
- (id)worksheetWarnings;
- (void)setPane:(id)arg1;
- (id)pane;
- (id)mergedCells;
- (id)pivotTables;
- (id)tables;
- (id)hyperlinks;
- (id)conditionalFormattings;
- (id)columnInfos;
- (id)rowBlocks;
- (void)setFitToPage:(_Bool)arg1;
- (_Bool)fitToPage;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (unsigned short)defaultRowHeight;
- (void)setDefaultColumnWidth:(double)arg1;
- (double)defaultColumnWidth;
- (void)reduceMemoryIfPossible;
- (id)mergedColRef:(unsigned int)arg1;
- (BOOL)isColMerged:(unsigned int)arg1;
- (BOOL)hasMergedCol;
- (id)mergedRowRef:(unsigned int)arg1;
- (BOOL)isRowMerged:(unsigned int)arg1;
- (BOOL)hasMergedRow;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned int)arg1;
- (void)setMaxColumnOutlineLevel:(unsigned int)arg1;
- (unsigned int)maxColumnOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned int)arg1;
- (void)setMaxRowOutlineLevel:(unsigned int)arg1;
- (unsigned int)maxRowOutlineLevel;
- (void)teardown;
- (void)setup;
- (id)maxCellReferencedInFormulas;
- (void)setImplicitCellArea:(id)arg1;
- (id)implicitCellArea;

@end

