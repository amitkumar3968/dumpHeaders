/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IMFoundation/IMNetworkManager.h>

@class NSMutableSet, NSNumber, NSRecursiveLock;

@interface IMMobileNetworkManager : IMNetworkManager
{
    NSRecursiveLock *_lock;
    NSMutableSet *_disableFastDormancyTokens;
    NSMutableSet *_wiFiAutoAssociationTokens;
    NSMutableSet *_cellAutoAssociationTokens;
    void *_serverConnection;
    void *_suspendDormancyAssertion;
    void *_wifiManager;
    struct __SCPreferences *_prefs;
    struct __CTServerConnection *_ctServerConnection;
    BOOL _cachedAirplaneMode;
    void *_cellAssertion;
    BOOL _isCachedAirplaneModeValid;
    int _applySkipCount;
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    BOOL _dataContextActive;
}

@property(nonatomic) BOOL dataContextActive; // @synthesize dataContextActive=_dataContextActive;
@property(nonatomic) BOOL shouldBringUpDataContext; // @synthesize shouldBringUpDataContext=_shouldBringUpDataContext;
@property(nonatomic) BOOL registered; // @synthesize registered=_registered;
@property(nonatomic) int _applySkipCount; // @synthesize _applySkipCount;
@property(nonatomic) BOOL _isCachedAirplaneModeValid; // @synthesize _isCachedAirplaneModeValid;
@property(nonatomic) void *_cellAssertion; // @synthesize _cellAssertion;
@property(nonatomic) BOOL _cachedAirplaneMode; // @synthesize _cachedAirplaneMode;
@property(nonatomic) struct __CTServerConnection *_ctServerConnection; // @synthesize _ctServerConnection;
@property(nonatomic) struct __SCPreferences *_prefs; // @synthesize _prefs;
@property(nonatomic) void *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(nonatomic) void *_suspendDormancyAssertion; // @synthesize _suspendDormancyAssertion;
@property(nonatomic) void *_serverConnection; // @synthesize _serverConnection;
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // @synthesize cellularAutoAssociationTokens=_cellAutoAssociationTokens;
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens; // @synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens;
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // @synthesize disableFastDormancyTokens=_disableFastDormancyTokens;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)setDataConnectionActive:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isDataConnectionActive;
@property(readonly, nonatomic) BOOL isDataSwitchEnabled;
@property(readonly, nonatomic) BOOL hasLTEDataConnection;
@property(readonly, nonatomic) BOOL has2GDataConnection;
@property(readonly, nonatomic) BOOL dataConnectionExists;
@property(readonly, nonatomic) BOOL inValidSIMState;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (BOOL)_isDataConnectionAvailable;
- (void)_releaseCTServerConnection;
- (void)_createCTServerConnection;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) BOOL autoAssociateCellular;
- (void)showNetworkOptions;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
@property(readonly, nonatomic) BOOL autoAssociateWiFi;
@property(readonly, nonatomic) BOOL isWiFiEnabled;
@property(readonly, nonatomic) BOOL isWiFiAssociated;
@property(readonly, nonatomic) NSNumber *wiFiScaledRate;
@property(readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property(readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property(readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property(readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly, nonatomic) BOOL isHostingWiFiHotSpot;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
@property(readonly, nonatomic) BOOL disableFastDormancy;
- (void)_adjustFastDormancyTokens;
- (void)__adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(BOOL)arg1;
- (void)_adjustCelluarAutoAssociation;
- (void)_adjustCellularAutoAssociation;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_createWiFiManager;
- (void)refresh;
@property(readonly, nonatomic) BOOL isAirplaneModeEnabled;
- (void *)_getValueForKey:(id)arg1;
- (void)_notifyTarget:(unsigned int)arg1;
- (void)_initializeSCPrefs:(id)arg1;
- (void)_synchronize;
- (void)dealloc;
- (id)init;

@end

