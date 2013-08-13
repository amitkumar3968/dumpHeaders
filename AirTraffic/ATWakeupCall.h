/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetServiceBrowser, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSMutableArray *_hostLibraryIdentifiers;
    NSMutableArray *_resolvingHosts;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;
    id _completion;
    NSNetServiceBrowser *_browser;
    NSThread *_wakeThread;
    BOOL _searching;
    int _resolving;
    int _hostsToResolve;
}

+ (id)wakeableHostsWithCompletion:(id)arg1;
+ (void)sendWakeupCallToAllSyncHosts;
+ (void)sendWakeupCall:(id)arg1;
- (void)dealloc;
- (void)wake;
- (void)stop;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;

@end

