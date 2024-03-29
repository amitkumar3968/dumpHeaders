/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AXIPCClient, AXIPCServer, NSString;

@interface AXServer : NSObject
{
    AXIPCClient *_client;
    AXIPCServer *_server;
    NSString *_serverIdentifier;
}

- (BOOL)_connectIfNecessary;
- (BOOL)sendSimpleMessageWithResult:(int)arg1;
- (void)sendSimpleMessageForKey:(int)arg1;
- (id)_serviceName;
@property(readonly, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (void)dealloc;
- (id)init;

@end

