/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSATSTypesetter;

__attribute__((visibility("hidden")))
@interface NSATSLineFragment : NSObject
{
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    float _minPosition;
    float _maxPosition;
    long _elasticCharIndex;
    float _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    float _hyphenGlyphWidth;
    struct {
        unsigned int _directionState:2;
        unsigned int _drawsOutside:1;
        unsigned int _isLineArray:1;
        unsigned int _reserved:28;
    } _flags;
}

- (BOOL)hasElasticRange;
- (void)justifyWithFactor:(float)arg1;
- (void)saveWithGlyphOrigin:(float)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange *)arg1;
- (void)getTypographicLineHeight:(float *)arg1 baselineOffset:(float *)arg2 leading:(float *)arg3;
- (float)lineWidthForType:(int)arg1;
- (struct _NSRange)characterRange;
- (struct _NSRange)glyphRange;
- (void)layoutForStartingGlyphAtIndex:(unsigned int)arg1 characterIndex:(unsigned int)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 lineFragmentRect:(struct CGRect)arg5;
- (id)initWithTypesetter:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg1 lineFragmentWidth:(float)arg2 hyphenate:(char *)arg3;
- (id)_copyRenderingContextWithGlyphOrigin:(float)arg1;
- (void)_invalidate;
- (void)_flushCachedObjects;

@end
