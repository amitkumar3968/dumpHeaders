/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLPuckDomeProgram : VGLProgram
{
    float _alphaScale;
    int _uAlphaScale;
    int _uTextureSampler;
    int _textureSampler;
    int _uSecondTextureSampler;
    int _secondTextureSampler;
    int _uTextureCoordinateTransform;
    CDUnion_de9d7be0 _textureCoordinateTransform;
    int _uSecondTextureCoordinateTransform;
    CDUnion_de9d7be0 _secondTextureCoordinateTransform;
}

+ (id)program;
@property(nonatomic) CDUnion_de9d7be0 secondTextureCoordinateTransform;
@property(nonatomic) CDUnion_de9d7be0 textureCoordinateTransform;
@property(nonatomic) int secondTextureSampler;
@property(nonatomic) int textureSampler;
@property(nonatomic) float alphaScale;
- (id)init;

@end

