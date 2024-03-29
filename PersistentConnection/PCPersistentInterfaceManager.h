/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSRecursiveLock, NSString, NSTimer, PCNonCellularUsabilityMonitor, PCPersistentTimer, PCWWANUsabilityMonitor;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceUsabilityMonitorDelegate>
{
    NSRecursiveLock *_lock;
    struct __CFDictionary *_delegatesAndRunLoops;
    struct __CFSet *_WWANInterfaceAssertionDelegates;
    NSTimer *_WWANInterfaceAssertionDisableTimer;
    struct __CFSet *_WiFiAutoAssociationDelegates;
    PCPersistentTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet *_wakeOnWiFiDelegates;
    PCPersistentTimer *_wakeOnWiFiDisableTimer;
    PCWWANUsabilityMonitor *_wwanMonitor;
    PCNonCellularUsabilityMonitor *_wifiMonitor;
    void *_ctServerConnection;
    void *_interfaceAssertion;
    void *_wifiManager;
    long _WWANContextIdentifier;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _isWWANInHomeCountry;
    BOOL _hasWWANStatusIndicator;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _shouldOverrideOnCallBehavior;
}

+ (id)sharedInstance;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg1;
- (void)bindCFStream:(struct __CFReadStream *)arg1 toWWANInterface:(BOOL)arg2;
- (BOOL)_allowBindingToWWAN;
- (id)dhcpHalfLeaseExpirationDate;
- (id)dhcpT1RenewalDate;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWakeOnWiFi;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)_populateWakeOnWiFiCapabilityLocked;
- (void)_populateWakeOnWiFiCapability;
- (void)_createWiFiManager;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceAssertions;
- (BOOL)_wantsWWANInterfaceAssertion;
- (void)keepWWANInterfaceUp:(BOOL)arg1 forDelegate:(id)arg2;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;
@property(readonly) BOOL isWakeOnWiFiSupported;
- (BOOL)_isWiFiUsable;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isInternetReachable;
- (BOOL)_isInternetReachableLocked;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) BOOL doesWWANInterfaceExist;
@property(readonly) NSString *WWANInterfaceName;
@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWWANBetterThanWiFi;
- (void)_performCalloutsForSelectorValue:(id)arg1;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
@property(readonly, nonatomic) NSString *currentLinkQualityString;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_inCallWWANOverrideTimerFired;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)handleMachMessage:(void *)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)_ctConnectionWasInvalidated;
- (void)_mainThreadDelayedInvalidation;
- (void)_createCTConnection;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 callbackRunLoop:(id)arg2;
- (void)dealloc;
- (id)init;

@end

