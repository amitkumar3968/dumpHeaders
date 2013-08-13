/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKMeshAnnotationMarker.h>

@class VGLDualTexturedMesh, VGLMesh, VGLRenderState, VGLSingleTexturedMesh, VGLTexture, VKAnimation;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker
{
    VGLDualTexturedMesh *_domeMesh;
    VGLSingleTexturedMesh *_arrowMesh;
    VGLSingleTexturedMesh *_rimMesh;
    VGLMesh *_dropShadowMesh;
    VGLRenderState *_renderState;
    BOOL _shouldBillboard;
    double _animationStartTime;
    double _lastFrameTimestamp;
    float _scale;
    BOOL _shouldShowCourse;
    double _presentationCourse;
    double _sizePoints;
    BOOL _stale;
    VGLTexture *_domeTexture;
    VGLTexture *_domeTextureGrey;
    VGLTexture *_arrowTexture;
    VGLTexture *_arrowTextureGrey;
    VGLTexture *_arrowShadowTexture;
    VGLTexture *_arrowShadowTextureGrey;
    VKAnimation *_puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
}

@property(nonatomic) BOOL shouldShowCourse; // @synthesize shouldShowCourse=_shouldShowCourse;
@property(nonatomic) BOOL shouldBillboard; // @synthesize shouldBillboard=_shouldBillboard;
@property(nonatomic, getter=isStale) BOOL stale; // @synthesize stale=_stale;
@property(nonatomic) float scale; // @synthesize scale=_scale;
- (void)_updatePuckStyle;
- (void)_drawWithContext:(id)arg1 puckState:(const CDStruct_63774aaa *)arg2;
- (id)_newDropShadowMesh;
- (void)drawWithContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) double presentationCourse;

@end
