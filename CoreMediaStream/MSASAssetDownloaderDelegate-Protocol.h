/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MSASAssetDownloaderDelegate <NSObject>
- (void)MSASAssetDownloaderDidFinishBatch:(id)arg1;
- (void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
- (void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned int)arg2;
@end
