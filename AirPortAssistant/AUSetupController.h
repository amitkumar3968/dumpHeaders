/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/AssistantCallbackController.h>

#import "AutoGuessSetup.h"
#import "BaseStationSetup.h"
#import "SetupUIDelegateResult.h"

@class NSDictionary, NSMutableSet, NSString;

@interface AUSetupController : AssistantCallbackController <SetupUIDelegateResult, AutoGuessSetup, BaseStationSetup>
{
    id _context;
    BOOL _autoJoinState;
    struct BSConfigurationContext *_configContext;
    NSMutableSet *_setupDelegates;
    id _connectionDelegate;
    NSString *_autoGuessSetupRecommendation;
    NSDictionary *_lastInstrumentation;
}

+ (id)setupController;
@property(retain, nonatomic) NSDictionary *lastInstrumentation; // @synthesize lastInstrumentation=_lastInstrumentation;
@property(retain, nonatomic) NSString *autoGuessSetupRecommendation; // @synthesize autoGuessSetupRecommendation=_autoGuessSetupRecommendation;
@property(nonatomic) id <SetupConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(readonly, nonatomic) NSMutableSet *setupDelegates; // @synthesize setupDelegates=_setupDelegates;
@property(nonatomic) id context; // @synthesize context=_context;
- (long)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setupConnectionStatusUpdatedResult:(long)arg1 withOptions:(id)arg2;
- (struct _BaseStation *)bsRef;
- (BOOL)dirty;
@property(retain, nonatomic) NSDictionary *bonjourRecord;
@property(nonatomic) BOOL rememberWiFiPassword;
@property(nonatomic) BOOL rememberBasePassword;
- (BOOL)isMonitoring;
- (long)setMonitorForChanges:(BOOL)arg1;
- (long)taskArchiveDiskAsync:(id)arg1;
- (long)taskEraseDiskAsync:(id)arg1;
- (long)taskUploadFirmwareAsync:(id)arg1;
- (long)taskRestoreDefaultsAsync:(BOOL)arg1;
- (long)taskRestartAsync;
- (int)taskState;
- (long)rpcWPSAllowClientAsync:(id)arg1;
- (long)rpcWPSStopAsync;
- (long)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2;
- (long)rpcRenewDHCPLeaseAsync;
- (long)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (long)rpcRefreshBSSettingAsync:(int)arg1;
- (long)rpcSystemInterfacesAsync;
- (long)removeKeychainBasePassword;
- (long)updateKeychainWithPasswords;
- (long)updateSettingsAsync;
- (long)readPropertyListFromBaseAsync:(id)arg1;
- (long)readAllPropertiesFromBaseAsync;
- (id)validateAndGetErrors;
- (long)unignoredProblemCount;
- (int)stateForProblem:(unsigned int)arg1;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (long)getValue:(id *)arg1 forSettingPath:(id)arg2;
- (long)setValue:(id)arg1 forSettingPath:(id)arg2;
- (long)getValue:(id *)arg1 forBSSetting:(int)arg2;
- (long)setValue:(id)arg1 forBSSetting:(int)arg2;
- (long)cancelSetup;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (void)dealloc;
- (id)init;
- (id)targetBaseInfoDict;
- (void)handleSetupComplete;
- (id)bestKeychainMACAddress;

// Remaining properties
@property(retain) NSDictionary *restoreRecommendation;

@end

