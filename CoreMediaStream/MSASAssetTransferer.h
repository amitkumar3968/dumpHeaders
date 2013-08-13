/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MMCSEngineDelegate.h"

@class MMCSEngine, MSASPersonModel, MSAlbumSharingDaemon, MSBackoffManager, NSObject<OS_dispatch_queue>, NSString;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>
{
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    int _maxBatchCount;
    int _maxRetryCount;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _hasShutDown;
}

@property(nonatomic) BOOL hasShutDown; // @synthesize hasShutDown=_hasShutDown;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property(copy, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) int maxBatchCount; // @synthesize maxBatchCount=_maxBatchCount;
@property(nonatomic) __weak MSBackoffManager *backoffManager; // @synthesize backoffManager=_backoffManager;
@property(nonatomic) __weak MSASPersonModel *model; // @synthesize model=_model;
@property(nonatomic) __weak MSAlbumSharingDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) double maxMMCSTokenValidityTimeInterval; // @synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval;
@property(readonly, nonatomic) MMCSEngine *engine; // @synthesize engine=_engine;
@property(copy, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (void)MMCSEngine:(id)arg1 didFinishGettingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 context:(id)arg3 putReceipt:(id)arg4 error:(id)arg5;
- (void)_sendDidIdleNotification;
- (id)_canceledError;
- (id)_MMCSTokenTooOldError;
- (id)_missingMMCSTokenError;
- (id)_missingURLError;
- (id)_pathForPersonID:(id)arg1;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (unsigned long long)workQueueNextItemID;
- (void)workQueueRetryOutstandingActivities;
- (void)retryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)workQueueCancel;
- (void)cancelCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)stopCompletionBlock:(id)arg1;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (id)initWithPersonID:(id)arg1;
- (void)_rereadPerformanceLoggingSetting;

@end

