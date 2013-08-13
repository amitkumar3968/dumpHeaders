/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MSASModelBase : NSObject
{
    struct sqlite3 *_db;
    NSString *_personID;
    struct __CFDictionary *_statements;
    NSObject<OS_dispatch_queue> *_statementQueue;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BOOL _dbWasRecreated;
}

@property(nonatomic) BOOL dbWasRecreated; // @synthesize dbWasRecreated=_dbWasRecreated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue; // @synthesize statementQueue=_statementQueue;
@property(nonatomic) struct __CFDictionary *statements; // @synthesize statements=_statements;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(readonly, nonatomic) struct sqlite3 *dbQueueDB; // @synthesize dbQueueDB=_db;
- (void).cxx_destruct;
- (void)dbQueueRollbackTransaction;
- (void)dbQueueEndTransaction;
- (void)endTransaction;
- (void)dbQueueBeginTransaction;
- (void)beginTransaction;
- (void)dbQueueDeletePersistentValueWithKey:(id)arg1;
- (void)dbQueueSetPersistentObject:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentString:(id)arg1 forKey:(id)arg2;
- (void)dbQueueSetPersistentData:(id)arg1 forKey:(id)arg2;
- (id)dbQueuePersistentObjectForKey:(id)arg1;
- (id)dbQueuePersistentStringForKey:(id)arg1;
- (id)dbQueuePersistentDataForKey:(id)arg1;
- (void)deletePersistentValueWithKey:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2;
- (id)persistentObjectForKey:(id)arg1;
- (void)setPersistentString:(id)arg1 forKey:(id)arg2;
- (id)persistentStringForKey:(id)arg1;
- (struct sqlite3_stmt *)statementForString:(id)arg1;
- (void)dealloc;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(id)arg2;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)dbQueueInitializeDatabasePath:(id)arg1 currentVersion:(int)arg2;
- (struct sqlite3 *)db;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 currentVersion:(int)arg3;

@end

