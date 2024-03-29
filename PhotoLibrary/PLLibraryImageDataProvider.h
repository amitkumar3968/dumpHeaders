/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, PLImageCache, PLImageLoadingQueue;

@interface PLLibraryImageDataProvider : NSObject
{
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    NSMutableDictionary *_imageSources;
}

- (id)_imageSourceForFormat:(int)arg1;
- (void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2;
- (void)invalidateCachedImagesForAsset:(id)arg1;
- (void)cancelLoadForAsset:(id)arg1 format:(int)arg2;
- (void)cancelLoadForAsset:(id)arg1;
- (void)resumeLoading;
- (void)pauseLoading;
- (id)loadImageSynchronously:(BOOL)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(id)arg5;
- (void)dealloc;
- (id)init;
- (id)imageViewForAsset:(id)arg1 inAlbum:(struct NSObject *)arg2 format:(int)arg3 loadImagesSynchronously:(BOOL)arg4;

@end

