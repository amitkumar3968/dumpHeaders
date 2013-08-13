/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADDataStoreConsumer.h"

@class NSLock, NSMutableDictionary;

@interface ASGeniusStatisticsConsumer : NSObject <ADDataStoreConsumer>
{
    BOOL _canceled;
    NSLock *_lock;
    NSMutableDictionary *_statisticsByKey;
}

- (BOOL)shouldCancelQuery;
- (void)scalarReceived:(long long)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (void)distributionReceived:(CDStruct_f79156c4 *)arg1 withDaysSince1970:(int)arg2 forKey:(id)arg3;
- (id)copyDictionaryRepresentation;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

