/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (NSObject_AVShared)
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)okToNotifyFromThisThread;
- (void)disallowSafePerformSelector;
- (void)allowSafePerformSelector;
- (void)postNotificationWithDescription:(id)arg1;
@end

