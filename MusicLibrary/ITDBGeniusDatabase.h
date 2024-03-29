/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3MusicLibrary, ML3SqliteDatabase;

__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject
{
    ML3MusicLibrary *_musicLibrary;
    ML3SqliteDatabase *_geniusDB;
    double _connectionFailedTime;
    struct __CFDictionary *_statementCache;
    BOOL _isInTransaction;
}

+ (id)sharedGeniusDatabase;
@property(nonatomic) BOOL isInTransaction; // @synthesize isInTransaction=_isInTransaction;
- (void).cxx_destruct;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (unsigned int)geniusConfigurationVersion;
- (id)copyGeniusConfigrationDataAndBytes;
- (unsigned int)defaultTrackCount;
- (unsigned int)defaultMinTrackCount;
- (BOOL)hasGeniusFeatureEnabled;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)_hasAnySongs;
- (BOOL)hasDatabase;
- (BOOL)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (BOOL)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;
- (BOOL)_copyBlobData:(id *)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;
- (unsigned int)_hasRowsInTable:(id)arg1;
- (id)database;
- (void)_connect;
- (void)_invalidateDatabase;
- (id)init;

@end

