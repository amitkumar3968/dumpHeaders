/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKAnnotationMarkerLayer.h>

@class VGLRenderState, VKImage;

@interface VKImageAnnotationMarkerLayer : VKAnnotationMarkerLayer
{
    VKImage *_image;
    BOOL _drawsOnGround;
    double _rotationRadians;
    BOOL _shouldDraw;
    BOOL _hasCustomShaderMatrix;
    CDUnion_f5b85e25 _shaderMatrix;
    BOOL _hasCustomModelMatrix;
    CDStruct_aa5aacbc _modelMatrix;
    VGLRenderState *_renderState;
    float _scale;
    float _opacity;
}

@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) double rotationRadians; // @synthesize rotationRadians=_rotationRadians;
@property(nonatomic) BOOL drawsOnGround; // @synthesize drawsOnGround=_drawsOnGround;
- (void)drawWithContext:(id)arg1;
- (void)layoutWithContext:(id)arg1;
- (BOOL)shouldSnapToPixelsWithContext:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

