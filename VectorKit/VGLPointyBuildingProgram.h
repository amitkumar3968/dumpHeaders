/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLFogProgram.h>

__attribute__((visibility("hidden")))
@interface VGLPointyBuildingProgram : VGLFogProgram
{
    int _uScale;
    float _scale;
    int _uAlpha;
    float _alpha;
    CDStruct_03942939 _cameraPositionInTileSpace;
    int _uCameraPositionInTileSpace;
}

+ (id)program;
@property(nonatomic) CDStruct_03942939 cameraPositionInTileSpace; // @synthesize cameraPositionInTileSpace=_cameraPositionInTileSpace;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (id)init;

@end

