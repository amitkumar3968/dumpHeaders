/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMutableAttributedString.h"

@interface NSMutableAttributedString (NSMutableAttributedStringKitAdditions)
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (void)unscriptRange:(struct _NSRange)arg1;
- (void)subscriptRange:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg1;
- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange)arg3;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange)arg2;
- (void)setAlignment:(int)arg1 range:(struct _NSRange)arg2;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg1;
- (void)fixFontAttributeInRange:(struct _NSRange)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
@end

