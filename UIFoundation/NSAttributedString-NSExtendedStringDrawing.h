/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSAttributedString.h"

@interface NSAttributedString (NSExtendedStringDrawing)
- (struct CGRect)_doBoundingRectWithSize:(struct CGSize)arg1 options:(int)arg2 context:(id)arg3 baselineOffset:(float *)arg4;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(int)arg2 context:(id)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(float)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(int)arg2 context:(id)arg3;
@end

