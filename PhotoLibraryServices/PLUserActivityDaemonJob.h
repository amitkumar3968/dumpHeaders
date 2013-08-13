/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString;

@interface PLUserActivityDaemonJob : PLDaemonJob
{
    NSArray *_assetUUIDs;
    int _actionType;
    NSString *_albumUUID;
}

+ (void)userDidLeavePhotosApplication;
+ (void)userDidDeleteSharedAssets:(id)arg1;
+ (void)userDidDeleteSharedAlbum:(id)arg1;
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;
@property(copy, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (void)runDaemonSide;
- (void)run;
- (int)daemonOperation;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (void)dealloc;

@end
