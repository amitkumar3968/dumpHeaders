/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OCDDelayedNode.h>

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode
{
    EDWorkbook *mWorkbook;
    EDString *mName;
    _Bool mHidden;
    _Bool mDisplayFormulas;
    _Bool mDisplayGridlines;
    _Bool mIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    TSUPointerKeyDictionary *mTextBoxMap;
    TSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

+ (id)sheetWithWorkbook:(id)arg1;
@property(nonatomic) _Bool isDialogSheet; // @synthesize isDialogSheet=mIsDialogSheet;
- (id)warnings;
- (void)applyProcessors;
- (id)processors;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edTextBoxForShape:(id)arg1;
- (id)drawables;
- (void)removeDrawableAtIndex:(unsigned int)arg1;
- (void)addDrawable:(id)arg1;
- (id)drawableAtIndex:(unsigned int)arg1;
- (unsigned int)drawableCount;
- (void)setPageSetup:(id)arg1;
- (id)pageSetup;
- (void)setHeaderFooter:(id)arg1;
- (id)headerFooter;
- (void)setDefaultGridlineColor:(id)arg1;
- (id)defaultGridlineColor;
- (void)setDisplayGridlines:(_Bool)arg1;
- (_Bool)isDisplayGridlines;
- (void)setDisplayFormulas:(_Bool)arg1;
- (_Bool)isDisplayFormulas;
- (void)setHidden:(_Bool)arg1;
- (_Bool)isHidden;
- (void)setName:(id)arg1;
- (id)name;
- (id)workbook;
- (void)doneWithNonRowContent;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1;
- (void)reduceMemoryIfPossible;
- (void)setEscherDrawing:(id)arg1;
- (id)escherDrawing;
- (id)drawableEnumerator;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (id)defaultGridlineColorReference;
- (void)teardown;
- (void)setup;

@end

