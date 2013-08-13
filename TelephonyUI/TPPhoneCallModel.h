/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRecursiveLock;

@interface TPPhoneCallModel : NSObject
{
    struct __CFDictionary *_callManagementState;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (id)description;
- (void)_invalidateCachedState;
- (int)cellTelephonyType;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (int)maxSupportedCallCount;
- (int)maxMultiPartyCallCount;
- (BOOL)_isAmbiguousCallList;
- (BOOL)_isAmbiguousMultiPartyCall;
- (int)ambiguityState;
- (BOOL)isAmbiguous;
- (BOOL)isAddCallAllowed;
- (BOOL)isHoldAllowed;
- (BOOL)isMergeable;
- (BOOL)isSwappable;
- (int)_intValueForKey:(struct __CFString *)arg1;
- (BOOL)_booleanValueForKey:(struct __CFString *)arg1;
- (struct __CFDictionary *)_callManagementDictionary;
- (void)dealloc;
- (id)init;

@end

