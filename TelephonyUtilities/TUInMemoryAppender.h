/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "TUAppender.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TUInMemoryAppender : NSObject <TUAppender>
{
    unsigned long long _currentCapacity;
    unsigned long long _maxCapacity;
    NSMutableArray *_buffer;
    BOOL _shouldLogDyldInfo;
    BOOL _shouldLogSystemInfo;
    NSMutableDictionary *_dyldInfo;
    NSString *_cachedPrettyNameForPid;
}

@property BOOL shouldLogSystemInfo; // @synthesize shouldLogSystemInfo=_shouldLogSystemInfo;
@property BOOL shouldLogDyldInfo; // @synthesize shouldLogDyldInfo=_shouldLogDyldInfo;
- (void)reset;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)flush;
- (void)dumpLogsToFilePath:(id)arg1;
- (void)dealloc;
- (id)initWithMaxCapacity:(unsigned long long)arg1;

@end

