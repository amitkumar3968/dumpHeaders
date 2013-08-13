/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedNotificationCenter;

@interface AOSNotifySession : NSObject
{
    id <AOSNotifySessionDelegate> _delegate;
    CPDistributedNotificationCenter *_center;
}

+ (id)copyLostModeParams;
+ (void)disableLostMode;
+ (BOOL)lostModeIsActive;
+ (id)copyStoreAccount;
+ (id)sharedInstance;
@property(nonatomic) id <AOSNotifySessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dumpDebugInfo:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (id)cancelEmailVet;
- (id)vetEmailAccount:(id)arg1;
- (void)_vetFinished:(id)arg1;
- (void)_stopVettingNotifications;
- (void)_vetResultReceived:(id)arg1;
- (id)iCloudAccount;
- (id)fmipAccount;
- (id)retrieveAllAccounts:(id *)arg1;
- (id)retrieveCurrentAccountForService:(id)arg1 returningAccount:(id *)arg2;
- (id)removeAccount:(id)arg1;
- (id)addAccount:(id)arg1;
- (id)retrieveFMFAccount:(id *)arg1;
- (id)removeFMFAccountWithUsername:(id)arg1;
- (id)addFMFAccount:(id)arg1;
- (id)_errorForCode:(int)arg1 message:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

