/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ISStoreURLOperationDelegate.h"
#import "NSObject.h"

@protocol MZKeyValueStoreOperationDelegate <ISStoreURLOperationDelegate, NSObject>
- (void)keyValueStoreOperationOperationDidFinish:(id)arg1;
- (void)keyValueStoreOperation:(id)arg1 scheduleURLOperation:(id)arg2;
@end

