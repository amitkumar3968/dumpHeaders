/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSTypesetter : NSObject
{
    void *_reserved;
}

+ (id)sharedSystemTypesetter;
+ (id)sharedSystemTypesetterForBehavior:(int)arg1;
+ (int)defaultStringDrawingTypesetterBehavior;
+ (int)defaultTypesetterBehavior;
+ (BOOL)_usesATSTypesetter;
+ (void)initialize;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const float *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(float)arg4;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned int)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8;
- (unsigned int)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned int *)arg3 glyphInscriptions:(unsigned int *)arg4 elasticBits:(char *)arg5 bidiLevels:(char *)arg6;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned int)arg2;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned int)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 nextGlyphIndex:(unsigned int *)arg4;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned int)arg2 maxNumberOfLineFragments:(unsigned int)arg3 maxCharacterIndex:(unsigned int)arg4 nextGlyphIndex:(unsigned int *)arg5 nextCharacterIndex:(unsigned int *)arg6;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg1;
- (id)attributesForExtraLineFragment;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange)arg3 atProposedOrigin:(struct CGPoint)arg4;
- (void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (id)currentParagraphStyle;
- (id)currentTextContainer;
- (id)textContainers;
- (id)layoutManager;
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (float)lineSpacingAfterGlyphAtIndex:(unsigned int)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg1;
- (void)endParagraph;
- (void)beginParagraph;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint *)arg1;
- (struct _NSRange)paragraphSeparatorCharacterRange;
- (struct _NSRange)paragraphCharacterRange;
- (struct _NSRange)paragraphSeparatorGlyphRange;
- (struct _NSRange)paragraphGlyphRange;
- (void)setParagraphGlyphRange:(struct _NSRange)arg1 separatorGlyphRange:(struct _NSRange)arg2;
- (id)attributedString;
- (void)setAttributedString:(id)arg1;
- (void)setTightenThresholdForTruncation:(float)arg1;
- (float)tightenThresholdForTruncation;
- (void)setBidiProcessingEnabled:(BOOL)arg1;
- (BOOL)bidiProcessingEnabled;
- (id)textTabForGlyphLocation:(float)arg1 writingDirection:(int)arg2 maxLocation:(float)arg3;
- (id)substituteFontForFont:(id)arg1;
- (void)setLineFragmentPadding:(float)arg1;
- (float)lineFragmentPadding;
- (void)setHyphenationFactor:(float)arg1;
- (float)hyphenationFactor;
- (void)setTypesetterBehavior:(int)arg1;
- (int)typesetterBehavior;
- (void)setUsesFontLeading:(BOOL)arg1;
- (BOOL)usesFontLeading;
- (id)_ellipsisFontForFont:(id)arg1;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (unsigned int)_sweepDirectionForGlyphAtIndex:(long)arg1;
- (CDUnion_a04c68c6 *)_lineFragmentRectForProposedRectArgs;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned int)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned int)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (void)_setForceOriginalFontBaseline:(BOOL)arg1;
- (BOOL)_forceOriginalFontBaseline;
- (void)finalize;
- (void)dealloc;
- (CDStruct_88fe8ffc *)_getAuxData;
- (CDStruct_88fe8ffc *)_allocateAuxData;

@end

