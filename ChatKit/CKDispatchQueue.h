/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, _CKPriorityQueue;

@interface CKDispatchQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    BOOL _suspended;
    _CKPriorityQueue *_priorityQueue;
    BOOL cancelled;
}

+ (id)concurrentQueueWithDispatchPriority:(long)arg1;
+ (id)serialQueueWithDispatchPriority:(long)arg1;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled;
@property(retain, nonatomic) _CKPriorityQueue *priorityQueue; // @synthesize priorityQueue=_priorityQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long)arg2;
- (void)cancelOustandingBlocks;
- (void)addBlock:(id)arg1 withQueuePriority:(void)arg2;
- (void)addBlock:(id)arg1;
- (id)init;
- (void)dealloc;

@end

