/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLPhotoBakedThumbnailsDelegate.h"

@class NSLock, NSMutableDictionary, PLPhotoLibrary;

@interface PLBakedVideoFilesCacheCreator : NSObject <PLPhotoBakedThumbnailsDelegate>
{
    BOOL _cancelPostProcessing;
    NSLock *_cancellationLock;
    NSMutableDictionary *_optionsDictionary;
    PLPhotoLibrary *photoLibrary;
}

@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary;
- (void)_removeOldAlbumVideosBakedThumbnails;
- (id)_pathToVideosMetadataFile;
- (void)_createNewVideoCachedFiles;
- (void)_garbageCollectCachedFiles;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)createBakedThumbnailsForVideo:(id)arg1;
- (void)_addBakedThumbnailsForVideo:(id)arg1 toCollection:(id)arg2 sourceFormat:(int)arg3 bakedFormats:(id)arg4;
- (void)cancel;
- (BOOL)recreateCachedFilesIfNecessary;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;

@end

