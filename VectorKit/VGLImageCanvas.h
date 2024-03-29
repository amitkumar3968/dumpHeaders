/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "VGLCanvas.h"

@class VGLContext, VGLFramebuffer, VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLImageCanvas : NSObject <VGLCanvas>
{
    VGLContext *_targetContext;
    VGLFramebuffer *_targetFramebuffer;
    VGLTexture *_targetTexture;
    struct CGSize _size;
    float _contentScale;
    BOOL _useDepthBuffer;
    BOOL _useStencilBuffer;
    struct _VGLColor _glClearColor;
    BOOL _canMakeImage;
}

+ (Class)contextClass;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) struct _VGLColor glClearColor; // @synthesize glClearColor=_glClearColor;
@property(nonatomic) BOOL useStencilBuffer; // @synthesize useStencilBuffer=_useStencilBuffer;
@property(nonatomic) BOOL useDepthBuffer; // @synthesize useDepthBuffer=_useDepthBuffer;
@property(readonly, nonatomic) VGLContext *vglContext; // @synthesize vglContext=_targetContext;
- (id)image;
- (void)didDrawView;
- (void)willDrawView;
- (void)_destroyFramebuffer;
- (void)_createFramebuffer;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(float)arg2 context:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(float)arg2;
@property(readonly, nonatomic) struct CGSize sizeInPixels;

@end

