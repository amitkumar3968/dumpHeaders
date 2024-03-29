/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob
{
    NSString *_batchCommentText;
    NSArray *_originalAssetUUIDs;
    NSString *_publishAlbumCloudGUID;
    BOOL _isNewAlbum;
}

+ (void)publishBatchOfOriginalAssets:(id)arg1 toSharedAlbum:(id)arg2 isNewAlbum:(BOOL)arg3 batchCommentText:(id)arg4;
@property(nonatomic) BOOL isNewAlbum; // @synthesize isNewAlbum=_isNewAlbum;
@property(retain, nonatomic) NSString *publishAlbumCloudGUID; // @synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID;
@property(retain, nonatomic) NSArray *originalAssetUUIDs; // @synthesize originalAssetUUIDs=_originalAssetUUIDs;
@property(retain, nonatomic) NSString *batchCommentText; // @synthesize batchCommentText=_batchCommentText;
- (void)executeDaemonOperation;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)run;
- (int)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;

@end

