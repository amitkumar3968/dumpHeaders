/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSXPCCoding.h"

@class NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSRequest : NSObject <SSXPCCoding>
{
    int _backgroundTaskIdentifier;
    BOOL _cancelAfterTaskExpiration;
    id <SSRequestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
}

@property(nonatomic) id <SSRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_shutdownRequestWithMessageID:(long long)arg1;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_startWithMessageID:(long long)arg1 messageBlock:(id)arg2;
- (void)_shutdownRequest;
@property(nonatomic) BOOL shouldCancelAfterTaskExpiration;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
- (void)disconnect;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)_initSSRequest;

@end

