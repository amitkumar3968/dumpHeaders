/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreBookkeeper/MZKeyValueStoreTransactionGroup.h>

#import "MZKeyValueStoreTransactionProcessing.h"

@class MZKeyValueStoreTransaction, NSArray, NSMutableDictionary;

@interface MZKeyValueStoreRemoveKeysTransactionGroup : MZKeyValueStoreTransactionGroup <MZKeyValueStoreTransactionProcessing>
{
    NSArray *_keys;
    NSMutableDictionary *_itemsToRemove;
    MZKeyValueStoreTransaction *_currenTransaction;
}

- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(BOOL)arg6 finishedBlock:(id)arg7;
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;
- (BOOL)scheduleNextTransactionInController:(id)arg1;
- (id)_transactionItemForKey:(id)arg1;
- (void)dealloc;
- (id)initWithKeys:(id)arg1;

@end
