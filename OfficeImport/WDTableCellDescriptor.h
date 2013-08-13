/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WDBorder, WDShading;

__attribute__((visibility("hidden")))
@interface WDTableCellDescriptor : NSObject
{
    WDShading *mShading;
    WDBorder *mTopBorder;
    WDBorder *mLeftBorder;
    WDBorder *mBottomBorder;
    WDBorder *mRightBorder;
    WDBorder *mDiagonalUpBorder;
    WDBorder *mDiagonalDownBorder;
    short mWidth;
    int mWidthType;
    short mTopMargin;
    int mTopMarginType;
    short mBottomMargin;
    int mBottomMarginType;
    short mLeftMargin;
    int mLeftMarginType;
    short mRightMargin;
    int mRightMarginType;
    int mVerticalAlignment;
    unsigned int mShadingOverridden:1;
    unsigned int mTopBorderOverridden:1;
    unsigned int mLeftBorderOverridden:1;
    unsigned int mBottomBorderOverridden:1;
    unsigned int mRightBorderOverridden:1;
    unsigned int mDiagonalUpBorderOverridden:1;
    unsigned int mDiagonalDownBorderOverridden:1;
    unsigned int mWidthTypeOverridden:1;
    unsigned int mTopMarginOverridden:1;
    unsigned int mTopMarginTypeOverridden:1;
    unsigned int mBottomMarginOverridden:1;
    unsigned int mBottomMarginTypeOverridden:1;
    unsigned int mLeftMarginOverridden:1;
    unsigned int mLeftMarginTypeOverridden:1;
    unsigned int mRightMarginOverridden:1;
    unsigned int mRightMarginTypeOverridden:1;
    unsigned int mVerticalAlignmentOverridden:1;
    unsigned int mVerticallyMergedCell:1;
    unsigned int mVerticallyMergedCellOverridden:1;
    unsigned int mFirstInSetOfVerticallyMergedCells:1;
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;
    unsigned int mNoWrap:1;
    unsigned int mNoWrapOverridden:1;
}

- (void)setNoWrapOverridden:(BOOL)arg1;
- (BOOL)isNoWrapOverridden;
- (void)setNoWrap:(BOOL)arg1;
- (BOOL)noWrap;
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)arg1;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (void)setVerticallyMergedCellOverridden:(BOOL)arg1;
- (BOOL)isVerticallyMergedCellOverridden;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (BOOL)verticallyMergedCell;
- (void)setVerticalAlignmentOverridden:(BOOL)arg1;
- (BOOL)isVerticalAlignmentOverridden;
- (void)setVerticalAlignment:(int)arg1;
- (int)verticalAlignment;
- (void)setRightMarginTypeOverridden:(BOOL)arg1;
- (BOOL)isRightMarginTypeOverridden;
- (void)setRightMarginType:(int)arg1;
- (int)rightMarginType;
- (void)setRightMarginOverridden:(BOOL)arg1;
- (BOOL)isRightMarginOverridden;
- (void)setRightMargin:(short)arg1;
- (short)rightMargin;
- (void)setLeftMarginTypeOverridden:(BOOL)arg1;
- (BOOL)isLeftMarginTypeOverridden;
- (void)setLeftMarginType:(int)arg1;
- (int)leftMarginType;
- (void)setLeftMarginOverridden:(BOOL)arg1;
- (BOOL)isLeftMarginOverridden;
- (void)setLeftMargin:(short)arg1;
- (short)leftMargin;
- (void)setBottomMarginTypeOverridden:(BOOL)arg1;
- (BOOL)isBottomMarginTypeOverridden;
- (void)setBottomMarginType:(int)arg1;
- (int)bottomMarginType;
- (void)setBottomMarginOverridden:(BOOL)arg1;
- (BOOL)isBottomMarginOverridden;
- (void)setBottomMargin:(short)arg1;
- (short)bottomMargin;
- (void)setTopMarginTypeOverridden:(BOOL)arg1;
- (BOOL)isTopMarginTypeOverridden;
- (void)setTopMarginType:(int)arg1;
- (int)topMarginType;
- (void)setTopMarginOverridden:(BOOL)arg1;
- (BOOL)isTopMarginOverridden;
- (void)setTopMargin:(short)arg1;
- (short)topMargin;
- (void)setWidthTypeOverridden:(BOOL)arg1;
- (BOOL)isWidthTypeOverridden;
- (void)setWidthType:(int)arg1;
- (int)widthType;
- (void)setWidth:(short)arg1;
- (void)setDiagonalDownBorderOverridden:(BOOL)arg1;
- (BOOL)isDiagonalDownBorderOverridden;
- (void)setDiagonalDownBorder:(id)arg1;
- (id)diagonalDownBorder;
- (void)setDiagonalUpBorderOverridden:(BOOL)arg1;
- (BOOL)isDiagonalUpBorderOverridden;
- (void)setDiagonalUpBorder:(id)arg1;
- (id)diagonalUpBorder;
- (void)setRightBorderOverridden:(BOOL)arg1;
- (BOOL)isRightBorderOverridden;
- (void)setRightBorder:(id)arg1;
- (id)rightBorder;
- (void)setBottomBorderOverridden:(BOOL)arg1;
- (BOOL)isBottomBorderOverridden;
- (void)setBottomBorder:(id)arg1;
- (id)bottomBorder;
- (void)setLeftBorderOverridden:(BOOL)arg1;
- (BOOL)isLeftBorderOverridden;
- (void)setLeftBorder:(id)arg1;
- (id)leftBorder;
- (void)setTopBorderOverridden:(BOOL)arg1;
- (BOOL)isTopBorderOverridden;
- (void)setTopBorder:(id)arg1;
- (id)topBorder;
- (void)setShadingOverridden:(BOOL)arg1;
- (BOOL)isShadingOverridden;
- (void)setShading:(id)arg1;
- (id)shading;

@end

