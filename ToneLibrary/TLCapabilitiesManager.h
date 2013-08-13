/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface TLCapabilitiesManager : NSObject
{
    BOOL _isRingtoneStoreAvailable;
    BOOL _isToneStoreAvailable;
}

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;
@property(nonatomic) BOOL isToneStoreAvailable; // @synthesize isToneStoreAvailable=_isToneStoreAvailable;
@property(nonatomic) BOOL isRingtoneStoreAvailable; // @synthesize isRingtoneStoreAvailable=_isRingtoneStoreAvailable;
- (void)_checkRingtoneStoreAvailability;
- (BOOL)hasAdditionalTextTones;
- (BOOL)hasVibratorCapability;
- (BOOL)hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end

