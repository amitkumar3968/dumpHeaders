/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

__attribute__((visibility("hidden")))
@interface VGLPuckProgram : VGLProgram
{
    float _alphaScale;
    int _uAlphaScale;
    int _uTextureSampler;
    int _textureSampler;
}

+ (id)program;
@property(nonatomic) int textureSampler;
@property(nonatomic) float alphaScale;
- (id)init;

@end

