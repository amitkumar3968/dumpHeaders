/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ISOperation.h"

@class NSOperationQueue, SUMessage;

@interface SUSendMessageOperation : ISOperation
{
    SUMessage *_message;
    NSOperationQueue *_operationQueue;
}

- (BOOL)_prepareMessageParts:(id *)arg1;
- (id)_newUploadOperationForMessagePart:(id)arg1;
- (id)_newStoreURLOperationForResources:(id)arg1 error:(id *)arg2;
- (id)_copyResourcesForUploadOperation:(id)arg1;
- (id)_copyResourcesForLocalPart:(id)arg1;
- (id)_copyResourcesByUploadingParts:(id *)arg1;
- (void)run;
- (void)cancel;
@property(readonly) SUMessage *message;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (id)init;

@end

