/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, VGLUncompressedTexture;

@interface VKImage : NSObject
{
    VGLUncompressedTexture *_texture;
    struct CGImage *_imageRef;
    NSData *_data;
    NSString *_name;
    struct CGSize _size;
    float _scale;
    BOOL _usedAsTextureAndImage;
}

- (float)scale;
- (struct CGSize)size;
- (struct CGImage *)image;
- (id)texture;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 usedAsTextureAndImage:(BOOL)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 usedAsTextureAndImage:(BOOL)arg3;

@end

