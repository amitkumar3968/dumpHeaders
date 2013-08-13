/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLTrafficOcclusionProgram : VGLProgram
{
    int _uHalfWidth;
    float _halfWidth;
    int _uAlphaSlope;
    float _alphaSlope;
    int _uHalfAlphaSlope;
    float _halfAlphaSlope;
}

+ (id)program;
@property(nonatomic) float halfAlphaSlope; // @synthesize halfAlphaSlope=_halfAlphaSlope;
@property(nonatomic) float alphaSlope; // @synthesize alphaSlope=_alphaSlope;
@property(nonatomic) float halfWidth; // @synthesize halfWidth=_halfWidth;
- (id)init;

@end
