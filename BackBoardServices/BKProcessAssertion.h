/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSObject<OS_xpc_object>, NSString;

@interface BKProcessAssertion : NSObject
{
    id <BKProcessAssertionDelegate> _delegate;
    NSObject<OS_xpc_object> *_client;
    unsigned int _reason;
    unsigned int _lastLimitlessAssertionReason;
    NSString *_identifier;
    NSLock *_lock;
    int _ownerPID;
    unsigned int _savedFlags;
    unsigned int _preventSuspend:1;
    unsigned int _preventThrottleDownCPU:1;
    unsigned int _preventThrottleDownUI:1;
    unsigned int _preventIdleSleep:1;
    unsigned int _preventingIdleSleep:1;
    unsigned int _allowIdleSleepOverrideEnabled:1;
    unsigned int _wantsForegroundResourcePriority:1;
}

+ (BOOL)isRateLimitedReason:(unsigned int)arg1;
+ (BOOL)isValidProcessAssertionReason:(unsigned int)arg1;
+ (double)GetTaskCompletionMustTerminateDuration:(unsigned int)arg1;
@property(nonatomic) id <BKProcessAssertionDelegate> delegate; // @synthesize delegate=_delegate;
@property NSObject<OS_xpc_object> *client; // @synthesize client=_client;
@property(readonly) unsigned int reason; // @synthesize reason=_reason;
@property(readonly) int ownerPID; // @synthesize ownerPID=_ownerPID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;
- (unsigned int)assertionState;
- (void)restoreSavedFlags;
- (void)saveFlagsAndApplyNewFlags:(unsigned int)arg1;
- (void)_setSavedFlags:(unsigned int)arg1;
- (unsigned int)_savedFlags;
- (BOOL)_hasSavedFlags;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
@property BOOL wantsForegroundResourcePriority;
- (BOOL)wantsForegroundResourcePriority_withoutLocking;
@property BOOL preventIdleSleep;
- (BOOL)shouldReallyPreventIdleSleep;
- (void)setLastLimitlessAssertionReason:(unsigned int)arg1;
@property BOOL allowIdleSleepOverrideEnabled;
- (BOOL)_lock_shouldActuallyPreventIdleSleep;
@property BOOL preventThrottleDownUI;
@property BOOL preventThrottleDownCPU;
@property BOOL preventSuspend;
- (BOOL)isValid;
@property(readonly) BOOL hasFixedStartTime;
@property(readonly, getter=isTimeLimited) BOOL timeLimited;
@property(readonly) double permittedBackgroundDuration;
- (id)description;
- (void)dealloc;
- (id)initWithClient:(id)arg1 ownerPID:(int)arg2 reason:(unsigned int)arg3 name:(id)arg4 flags:(unsigned int)arg5;
- (id)initWithReason:(unsigned int)arg1 identifier:(id)arg2;

@end

