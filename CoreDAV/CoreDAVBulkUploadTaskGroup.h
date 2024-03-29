/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVTaskDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSURL *_folderURL;
    NSString *_lastKnownCTag;
    BOOL _validCTag;
    void *_context;
    unsigned int _multiPutBatchMaxNumResources;
    unsigned int _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_uuidToStatus;
    NSMutableDictionary *_hrefToStatus;
}

@property(readonly) NSDictionary *hrefToStatus; // @synthesize hrefToStatus=_hrefToStatus;
@property(readonly) NSDictionary *uuidToStatus; // @synthesize uuidToStatus=_uuidToStatus;
@property(readonly) NSDictionary *hrefToErrorItems; // @synthesize hrefToErrorItems=_hrefToErrorItems;
@property(readonly) NSDictionary *uuidToErrorItems; // @synthesize uuidToErrorItems=_uuidToErrorItems;
@property(readonly) NSDictionary *hrefToETag; // @synthesize hrefToETag=_hrefToETag;
@property(readonly) NSDictionary *uuidToHREF; // @synthesize uuidToHREF=_uuidToHREF;
@property(retain) NSString *nextCTag; // @synthesize nextCTag=_lastKnownCTag;
@property(readonly) BOOL validCTag; // @synthesize validCTag=_validCTag;
@property(readonly) void *context; // @synthesize context=_context;
@property(readonly) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property unsigned int multiPutBatchMaxSize; // @synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize;
@property unsigned int multiPutBatchMaxNumResources; // @synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)syncAway;
- (void)startTaskGroup;
- (void)_sendNextBatch;
- (Class)multiPutTaskClass;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(void *)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;

@end

