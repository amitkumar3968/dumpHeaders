/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IUJetsamHelper : NSObject
{
}

+ (BOOL)purgedEnoughMemoryToStayAlive:(struct malloc_statistics_t)arg1 isUrgent:(BOOL)arg2;
+ (struct malloc_statistics_t)markPreJetsamMemoryInfo;
+ (void)unlock;
+ (void)lock;
+ (void)markPurgeableGlobalObject:(id *)arg1;
+ (BOOL)handleMemoryWarning:(BOOL)arg1;
+ (void)purgeGlobals;
+ (void)initialize;

@end

