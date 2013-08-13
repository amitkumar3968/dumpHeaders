/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "TULogger.h"

@class TUInMemoryAppender, TURemoteAppender;

@interface TUPhoneLogger : NSObject <TULogger>
{
    int _lock;
    id _signalHandler;
    TUInMemoryAppender *_inMemoryAppender;
    TURemoteAppender *_remoteAppender;
    int _loggingConfiguration;
    BOOL _loggingConfigurationCached;
    struct dispatch_queue_s *_appenderQueue;
}

+ (id)sharedPhoneLogger;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (BOOL)shouldLog;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(void *)arg5;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (id)_appender;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (int)_loggingConfiguration;
- (void)_loggingChanged;
- (id)identifier;
- (id)signalHandler;
- (void)dealloc;
- (id)init;
- (void)_handleSignal:(int)arg1;

@end
