/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreMediaStream/MSDaemon.h>

@class MSASDaemonModel, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MSAlbumSharingDaemon : MSDaemon
{
    id <MSAlbumSharingDaemonDelegate> _delegate;
    NSMutableDictionary *_personIDToStateMachineMap;
    NSMutableDictionary *_personIDToDelegateMap;
    MSASDaemonModel *_daemonModel;
    int _busyCount;
    BOOL _isRetryingOutstandingActivities;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_nextUpdateDateByPersonID;
}

@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID; // @synthesize nextUpdateDateByPersonID=_nextUpdateDateByPersonID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
@property(nonatomic) BOOL isRetryingOutstandingActivities; // @synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities;
@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;
@property(retain, nonatomic) MSASDaemonModel *daemonModel; // @synthesize daemonModel=_daemonModel;
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap; // @synthesize personIDToDelegateMap=_personIDToDelegateMap;
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap; // @synthesize personIDToStateMachineMap=_personIDToStateMachineMap;
@property(nonatomic) __weak id <MSAlbumSharingDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveCommentTooLongError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;
- (void)didReceiveTooManyCommentsError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;
- (void)didReceiveTooManySubscriptionsError:(id)arg1 personID:(id)arg2;
- (void)didReceiveTooManyPhotosError:(id)arg1 forAlbum:(id)arg2 personID:(id)arg3;
- (void)didReceiveTooManyAlbumsError:(id)arg1 personID:(id)arg2;
- (id)boundStateMachineForPersonID:(id)arg1;
- (id)existingStateMachineForPersonID:(id)arg1;
- (id)_delegateForPersonID:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2 personID:(id)arg3;
- (id)persistentObjectForKey:(id)arg1 personID:(id)arg2;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)forgetEverythingCompletionBlock:(id)arg1;
- (void)workQueueForgetEverythingAboutPersonIDs:(id)arg1 index:(unsigned int)arg2 completionBlock:(id)arg3;
- (void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(id)arg2;
- (void)workQueueForgetEverythingAboutPersonID:(id)arg1 completionBlock:(id)arg2;
- (void)shutDownStateMachine:(id)arg1 forDestruction:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_postModelShutdownForPersonID:(id)arg1 completionBlock:(id)arg2;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id)arg5;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id)arg4;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id)arg4;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(BOOL)arg3 info:(id)arg4;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 personID:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1 personID:(id)arg2;
- (id)modelForPersonID:(id)arg1;
- (id)existingModelForPersonID:(id)arg1;
- (int)assetsInDownloadQueueCountForPersonID:(id)arg1;
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;
- (id)personIDsListeningToPushNotification;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (void)stopAssetDownloadsForPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (BOOL)hasCommandsInGroupedCommandQueue;
- (BOOL)isWaitingForAuth;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didReceiveAuthSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthFailureForPersonID:(id)arg1;
- (BOOL)isInRetryState;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didDestroyStateMachineForPersonID:(id)arg1;
- (void)willDestroyStateMachineForPersonID:(id)arg1;
- (void)didCreateStateMachineForPersonID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)didUnidle;
- (void)didIdle;
- (id)nextActivityDate;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)mapQueueShutDownStateMachineInMap:(id)arg1 personIDs:(id)arg2 index:(unsigned int)arg3 forDestruction:(BOOL)arg4 completionBlock:(id)arg5;
- (void)shutDown;
- (void)start;
- (void)dealloc;
- (id)init;

@end

