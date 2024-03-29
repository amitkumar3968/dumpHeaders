/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SLRemoteSession.h"
#import "XPCProxyTarget.h"

@class NSManagedObjectContext, XPCProxy;

@interface SLDSession : NSObject <XPCProxyTarget, SLRemoteSession>
{
    Class _remoteClass;
    XPCProxy *_clientProxy;
    NSManagedObjectContext *_managedObjectContext;
    id <SLDServiceDelegate> _serviceDelegate;
}

@property(retain) XPCProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (void).cxx_destruct;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)_bundleIdForPID:(int)arg1;
- (id)clientBundleId;
- (id)localizedAppNameForPID:(int)arg1;
- (id)localizedAppNameClient;
- (BOOL)clientHasEntitlement:(id)arg1;
- (id)whitelistedClassNamesForDecoding;
@property(readonly) Class remoteClass; // @synthesize remoteClass=_remoteClass;
- (void)setupWithService:(id)arg1 connection:(id)arg2;
- (id)initWithRemoteClass:(id)arg1 managedObjectContext:(id)arg2;

@end

