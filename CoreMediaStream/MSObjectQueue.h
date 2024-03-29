/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface MSObjectQueue : NSObject
{
    struct sqlite3 *_db;
    struct __CFDictionary *_statements;
}

- (void)commitObjectsWrappers:(id)arg1;
- (void)commitErrorCountsForObjectWrappers:(id)arg1;
- (void)removeObjectWrappersFromQueue:(id)arg1;
- (id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2;
- (id)objectWrappersWithZeroSizeMaxCount:(long long)arg1;
- (id)allObjectWrappersMaxCount:(long long)arg1;
- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt *)arg1 outSize:(long long *)arg2;
- (void)appendObjectWrappers:(id)arg1;
@property(readonly) long long count;
- (struct sqlite3_stmt *)_statementLabel:(id)arg1 query:(const char *)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

