/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "TUAppender.h"

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender>
{
    struct _xpc_connection_s *_connection;
    NSString *_name;
}

- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)flush;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

