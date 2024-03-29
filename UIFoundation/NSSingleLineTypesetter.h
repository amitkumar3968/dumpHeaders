/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIFoundation/NSATSTypesetter.h>

#import "NSGlyphStorage.h"

__attribute__((visibility("hidden")))
@interface NSSingleLineTypesetter : NSATSTypesetter <NSGlyphStorage>
{
    float _lineWidth;
    struct _NSRange _currentBufferRange;
    unsigned int *_glyphBuffer;
    unsigned int *_inscriptionBuffer;
    char *_elasticBuffer;
    struct {
        unsigned int _usesScreenFonts:1;
        unsigned int _reserved:31;
    } _slFlags;
}

+ (_Bool)_validateAttributes:(id)arg1;
+ (void)initialize;
+ (id)singleLineTypesetter;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const float *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(float)arg4;
- (id)substituteFontForFont:(id)arg1;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned int)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8;
- (unsigned int)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned int *)arg3 glyphInscriptions:(unsigned int *)arg4 elasticBits:(char *)arg5 bidiLevels:(char *)arg6;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (id)attributedString;
- (unsigned int)layoutOptions;
- (void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned int)arg3;
- (void)insertGlyphs:(const unsigned int *)arg1 length:(unsigned int)arg2 forStartingGlyphAtIndex:(unsigned int)arg3 characterIndex:(unsigned int)arg4;
- (id)createRenderingContextForCharacterRange:(struct _NSRange)arg1 typesetterBehavior:(int)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 maximumWidth:(float)arg5;
- (id)init;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (BOOL)_usesScreenFonts;
- (void)done;

@end

