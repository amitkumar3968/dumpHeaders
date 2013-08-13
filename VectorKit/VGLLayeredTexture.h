/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLTexture.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VGLLayeredTexture : VGLTexture
{
    char *_imageData;
    BOOL _hasFillColor;
    struct _VGLColor _baseColor;
    NSString *_fillTextureName;
    struct CGImage *_fillImage;
    CDStruct_c0b8bb23 _textureLayerProperties;
    NSString *_secondFillTextureName;
    struct CGImage *_secondFillImage;
    CDStruct_c0b8bb23 _secondTextureLayerProperties;
    NSString *_thirdFillTextureName;
    struct CGImage *_thirdFillImage;
    CDStruct_c0b8bb23 _thirdTextureLayerProperties;
}

+ (void)purge;
+ (id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned int)arg3;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (void)_buildWithStyle:(id)arg1 levelOfDetail:(unsigned int)arg2;
- (id)_createVKImageForName:(id)arg1;
- (void)_addTextureLayerWithName:(id)arg1 properties:(CDStruct_c0b8bb23)arg2;
- (void)_addColor:(struct _VGLColor)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

