/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <NSCopying>
{
    struct CGColor *mCGColor;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned long)arg1;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithCalibratedHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithRGBValue:(long)arg1;
+ (id)colorWithBGRValue:(long)arg1;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1:(unsigned char)arg2:(unsigned char)arg3;
+ (id)colorWithDeviceRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)isOpaque;
- (float)luminance;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (float)alphaComponent;
- (float)blueComponent;
- (float)greenComponent;
- (float)redComponent;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned long)toBGR;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (CDStruct_a06f635e)ttColor;
- (id)copy;
- (void)set;
- (id)initWithPatternImage:(id)arg1;
- (struct EshColor)eshColor;
- (struct CsColour)csColour;
- (void)getRGBBytes:(char *)arg1:(char *)arg2:(char *)arg3;
- (void)getRed:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (BOOL)isBlack;
- (BOOL)isEqualToColor:(id)arg1;
- (struct CGColor *)cgColorRef;

@end

