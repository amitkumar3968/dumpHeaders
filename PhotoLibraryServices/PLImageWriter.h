/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLPhotoBakedThumbnailsDelegate.h"

@class NSCountedSet, NSMutableArray, NSRecursiveLock, PLXPCTransaction;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate>
{
    NSMutableArray *_highPriorityJobs;
    NSCountedSet *_unfinishedHighPriorityJobs;
    unsigned int _highPrioritySequentialJobCount;
    NSMutableArray *_lowPriorityJobs;
    NSCountedSet *_unfinishedLowPriorityJobs;
    NSRecursiveLock *_jobsLock;
    int _unfinishedJobCount;
    int _jobQueueAvailabilityToken;
    BOOL _writerThreadRunning;
    BOOL _databaseIsCorrupt;
    PLXPCTransaction *_transaction;
}

+ (void)decorateThumbnailInRect:(struct CGRect)arg1 size:(struct CGSize)arg2 duration:(id)arg3 inContext:(struct CGContext *)arg4 format:(int)arg5;
+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
+ (void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(struct __CFString *)arg4 exifProperties:(id)arg5 imageRefOut:(struct CGImage **)arg6 lowResImageRefOut:(struct CGImage **)arg7 thumbnailDataOut:(id *)arg8 imageUTITypeOut:(const struct __CFString **)arg9 exifPropertiesOut:(id *)arg10 isJPEGOut:(char *)arg11 imageDataOut:(id *)arg12;
+ (id)sharedWriter;
- (void)_writerThread;
- (void)_processJob:(id)arg1;
- (void)_processSyncedVideoSaveJob:(id)arg1;
- (void)_processVideoSaveJob:(id)arg1;
- (BOOL)_sufficientDiskSpaceToCopyVideoAtPath:(id)arg1;
- (void)_processVideoJob:(id)arg1;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_decorateThumbnail:(id)arg1;
- (void)_processDaemonJob:(id)arg1;
- (void)_processCrashRecoveryJob:(id)arg1;
- (void)_processIngestedSyncedAssetJob:(id)arg1;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1;
- (void)_enablePhotoStreamJob:(id)arg1;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1;
- (void)_processDeletePhotoStreamDataJob:(id)arg1;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1;
- (void)_processImportImageJob:(id)arg1;
- (void)_processImageJob:(id)arg1;
- (BOOL)saveImageJobToDisk:(id)arg1;
- (id)uuidFromIncomingFilename:(id)arg1;
- (id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(BOOL)arg3;
- (id)incomingDirectoryPath;
- (id)incomingDirectoryPathForPhotoStream;
- (void)_removeTransientKeys:(id)arg1;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1;
- (id)cameraAssetExtensionForType:(int)arg1;
- (BOOL)enqueueJob:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (void)_incrementJobCount:(id)arg1;
- (void)_postJobQueueNotificationIsAvailable:(BOOL)arg1;
- (BOOL)canEnqueueJob:(id)arg1;
- (BOOL)_isHighPriorityJob:(id)arg1;
- (void)dealloc;
- (id)init;

@end

