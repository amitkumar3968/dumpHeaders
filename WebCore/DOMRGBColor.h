/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

__attribute__((visibility("hidden")))
@interface DOMRGBColor : DOMObject
{
}

- (struct CGColor *)color;
@property(readonly) DOMCSSPrimitiveValue *alpha;
@property(readonly) DOMCSSPrimitiveValue *blue;
@property(readonly) DOMCSSPrimitiveValue *green;
@property(readonly) DOMCSSPrimitiveValue *red;
- (void)finalize;
- (void)dealloc;

@end

