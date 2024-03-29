/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EAGLContext, MRContext, NSLock, NSMutableDictionary, NSMutableSet;

@interface MRImageManager : NSObject
{
    MRContext *mBaseContext;
    EAGLContext *mImageGLContext;
    NSMutableDictionary *mImageInfos;
    NSLock *mImageInfosLock;
    NSMutableDictionary *mFBOs;
    NSMutableSet *mAvailableFBOs;
    NSMutableSet *mRecyclableFBOs;
    NSMutableSet *mRemoteKeysToRelease;
    NSMutableDictionary *_assetMasters;
    unsigned long long mHostTime;
}

+ (void)initialize;
+ (void)cleanupPictureCache;
@property(nonatomic) unsigned long long hostTime; // @synthesize hostTime=mHostTime;
@property(readonly) EAGLContext *imageGLContext; // @synthesize imageGLContext=mImageGLContext;
@property(readonly) MRContext *baseContext; // @synthesize baseContext=mBaseContext;
- (id)retainedByUserImageWithSize:(struct CGSize)arg1 andColor:(const float *)arg2;
- (id)retainedByUserImageWithCGContext:(struct CGContext *)arg1;
- (void)setTime:(double)arg1 forImageKey:(id)arg2;
- (void)play:(BOOL)arg1 forImageKey:(id)arg2;
- (void)releaseImageBufferForImage:(id)arg1;
- (id)retainedByUserImageForAsset:(id)arg1 atSize:(struct CGSize)arg2 andTime:(double)arg3 previousImageBufferKey:(id)arg4 options:(id)arg5;
- (void)recycleFBOTexture:(id)arg1;
- (id)fboTextureWithSize:(struct CGSize)arg1;
- (void)purgeResources:(BOOL)arg1;
- (void)dealloc;
- (id)initWithBaseContext:(id)arg1;
- (struct CGImage *)CGImageWithMoviePath:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 atTime:(double)arg4 orientation:(char *)arg5;
- (struct CGImage *)CGImageWithData:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 orientation:(char *)arg4;
- (struct CGImage *)CGImageWithPath:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 orientation:(char *)arg4;
- (struct __IOSurface *)IOSurfaceWithMoviePath:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 atTime:(double)arg4 orientation:(char *)arg5;
- (struct __IOSurface *)IOSurfaceWithData:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 orientation:(char *)arg4;
- (struct __IOSurface *)IOSurfaceWithPath:(id)arg1 withOriginalSize:(struct CGSize)arg2 forSize:(struct CGSize)arg3 orientation:(char *)arg4;
- (id)optimizedPath:(id)arg1 forSize:(struct CGSize)arg2;
- (void)releaseStuffForRemoteKey:(id)arg1;
- (id)imageFromMovieWithImageInfo:(id)arg1 atTime:(double)arg2;
- (BOOL)configureMovieAtPath:(id)arg1 forSize:(struct CGSize)arg2 time:(double)arg3 intoImageInfo:(id)arg4;

@end

