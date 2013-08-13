/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreMediaStream/MSCupidStateMachine.h>

#import "MSPublishStorageProtocolDelegate.h"
#import "MSPublishStreamsProtocolDelegate.h"
#import "MSPublisher.h"

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSMutableArray, NSMutableDictionary, NSURL;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    id <MSPublisherDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned int _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    id <MSPublishStorageProtocol> _storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

+ (BOOL)isInRetryState;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
@property(nonatomic) int publishBatchSize; // @synthesize publishBatchSize=_publishBatchSize;
@property(nonatomic) long long publishTargetByteCount; // @synthesize publishTargetByteCount=_publishTargetByteCount;
@property(retain, nonatomic) NSURL *storageProtocolURL; // @synthesize storageProtocolURL=_storageProtocolURL;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_isInRetryState;
- (void)stop;
- (void)abort;
- (void)_forget;
- (void)_abort;
- (id)_abortedError;
- (int)_stop;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)_sendUploadComplete;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(char *)arg2 setOutIsCounted:(char *)arg3 setOutIsFatal:(char *)arg4 setOutNeedsBackoff:(char *)arg5 setOutIsTemporary:(char *)arg6 setOutIsTokenAuth:(char *)arg7 setOutIsAuthError:(char *)arg8;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)_sendFilesToMMCS;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_sendMetadataToStreams;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)submitAssetCollectionsForPublication:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_requestDerivatives;
- (void)publish;
- (BOOL)_isAllowedToUpload;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_refreshServerSideConfiguredParameters;
- (void)computeHashForAsset:(id)arg1;
- (BOOL)enqueueAssetCollections:(id)arg1 outError:(id *)arg2;
- (void)_updateMasterManifest;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@end

