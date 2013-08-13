/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRunLoop, NSThread;

@interface _IMDPersistenceThreadObject : NSObject
{
    NSThread *_thread;
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
}

+ (id)sharedInstance;
- (BOOL)isCurrentThreadDBThread;
- (void)performBlock:(id)arg1 waitUntilDone:(void)arg2;
- (void)performBlock:(id)arg1 afterDelay:(void)arg2;
- (void)performBlock:(id)arg1;
- (id)thread;
- (id)init;
- (void)_threadedMain;

@end

