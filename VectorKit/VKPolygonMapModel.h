/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

@class VGLRenderState;

__attribute__((visibility("hidden")))
@interface VKPolygonMapModel : VKVectorMapModel
{
    VGLRenderState *_renderState;
    BOOL _drawShapes;
    struct {
        id _field1;
        id _field2;
        char _field3;
        char _field4;
        struct _VGLColor _field5;
        struct _VGLColor _field6;
        float _field7;
        unsigned int _field8;
    } *_renderSteps;
    int _renderStepCount;
    int _renderStepMax;
}

@property(nonatomic) BOOL drawShapes; // @synthesize drawShapes=_drawShapes;
- (void)drawCoastlinesWithContext:(id)arg1;
- (void)drawPolygonsWithContext:(id)arg1;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)textureSize;
- (unsigned int)mapLayerPosition;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

