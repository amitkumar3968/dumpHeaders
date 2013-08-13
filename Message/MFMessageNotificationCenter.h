/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSNotificationCenter.h"

@class MFRecursiveLock, NSMutableDictionary;

@interface MFMessageNotificationCenter : NSNotificationCenter
{
    MFRecursiveLock *_lock;
    NSMutableDictionary *_notificationMapping;
    struct __CFDictionary *_holders;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)_removeEntryForObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postNotification:(id)arg1;
- (id)copyAllObserversForNotificationName:(id)arg1 andObject:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)_mf_unlock;
- (void)_mf_lock;
- (void)dealloc;

@end

