/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLCullableMesh.h>

@class VGLCenterLineMesh, VGLTexture, VKPolygonDrawStyle, VKStyle, VKVectorTile;

__attribute__((visibility("hidden")))
@interface VKPolygonGroup : VGLCullableMesh
{
    VKStyle *_style;
    VKPolygonDrawStyle *_polygonStyle;
    VGLTexture *_texture;
    VKVectorTile *_tile;
    VGLCenterLineMesh *_strokeMesh;
}

@property(readonly, nonatomic) VGLCenterLineMesh *strokeMesh; // @synthesize strokeMesh=_strokeMesh;
@property(readonly, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
@property(readonly, nonatomic) VKPolygonDrawStyle *polygonStyle; // @synthesize polygonStyle=_polygonStyle;
@property(readonly, nonatomic) VKStyle *style; // @synthesize style=_style;
- (unsigned int)triangleCount;
- (id)_textureForName:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 tile:(id)arg2;

@end

