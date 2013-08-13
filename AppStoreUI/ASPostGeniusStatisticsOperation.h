/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ISOperation.h"

@class ASGeniusStatisticsConsumer;

@interface ASPostGeniusStatisticsOperation : ISOperation
{
    ASGeniusStatisticsConsumer *_activeDataStoreConsumer;
    BOOL _ignorePostInterval;
}

+ (void)load;
@property BOOL shouldIgnorePostInterval; // @synthesize shouldIgnorePostInterval=_ignorePostInterval;
- (BOOL)_shouldSendStatistics;
- (BOOL)_shouldSendDataUsage;
- (void)_setActiveDataStoreConsumer:(id)arg1;
- (BOOL)_postRequestDictionary:(id)arg1 returningError:(id *)arg2;
- (void)_getKiloBytesSent:(float *)arg1 received:(float *)arg2 forPDP:(long)arg3;
- (id)_copyStatisticsByKey;
- (BOOL)_copyRequestBody:(id *)arg1 forDictionary:(id)arg2 returningError:(id *)arg3;
- (id)_copyOperationForConfiguration:(id)arg1 bodyData:(id)arg2;
- (id)_copyDictionaryForSystemApplication:(id)arg1 statistics:(id)arg2;
- (id)_copyDictionaryForInstalledApplication:(id)arg1 statistics:(id)arg2;
- (id)_copyDataUsageDictionary;
- (id)_copyBodyDictionaryReturningError:(id *)arg1;
- (id)_configuration;
- (id)_activeDataStoreConsumer;
- (void)setScriptOptions:(id)arg1;
- (void)run;
- (void)cancel;
- (void)dealloc;

@end

