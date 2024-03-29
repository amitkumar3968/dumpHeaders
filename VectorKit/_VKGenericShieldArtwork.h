/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKShieldArtwork.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _VKGenericShieldArtwork : VKShieldArtwork
{
    float _leftCap;
    float _rightCap;
    float _baseline;
    float _horizontalPadding;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct CGSize _shadowOffset;
    float _shadowSize;
}

- (struct CGImage *)newImageWithShieldText:(id)arg1;
- (struct CGSize)sizeWithTextWidth:(float)arg1;
- (float)rightCapWidth;
- (float)leftCapWidth;
- (void)dealloc;
- (id)initWithImage:(id)arg1 scale:(float)arg2 horizontalPadding:(float)arg3 textColor:(struct _VGLColor)arg4 baseline:(float)arg5 leftCap:(float)arg6 rightCap:(float)arg7 shouldStroke:(BOOL)arg8 strokeWidth:(float)arg9 strokeColor:(struct _VGLColor)arg10 shouldShadow:(BOOL)arg11 shadowOffset:(struct CGSize)arg12 shadowSize:(float)arg13 shadowColor:(struct _VGLColor)arg14 fontSize:(float)arg15;

@end

