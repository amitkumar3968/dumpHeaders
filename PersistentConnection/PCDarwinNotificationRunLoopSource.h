/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CUTWeakReference, NSMachPort;

__attribute__((visibility("hidden")))
@interface PCDarwinNotificationRunLoopSource : NSObject
{
    CUTWeakReference *_target;
    SEL _selector;
    NSMachPort *_port;
    int _notifyToken;
}

- (void)handleMachMessage:(void *)arg1;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)initWithDarwinNotificationName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

