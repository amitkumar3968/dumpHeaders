/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AXReaderWriterLock : NSObject
{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSString *label;
}

+ (id)_copyQueueLabelWithString:(id)arg1 shouldAppendUUID:(BOOL)arg2;
- (void)_setLabel:(id)arg1;
@property(copy, nonatomic) NSString *label; // @synthesize label;
- (void)performAsynchronousWritingBlock:(id)arg1;
- (void)performAsynchronousReadingBlock:(id)arg1;
- (void)performWritingBlock:(id)arg1;
- (void)performReadingBlock:(id)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;
- (id)init;

@end

