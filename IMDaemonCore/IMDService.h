/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMSystemMonitorListener.h"

@class NSBundle, NSDictionary, NSString;

@interface IMDService : NSObject <IMSystemMonitorListener>
{
    NSBundle *_bundle;
    Class _sessionClass;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProperties;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    BOOL _blockPrefWriting;
}

@property(readonly, nonatomic) NSDictionary *serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (id)description;
- (void)purgeMemoryCaches;
@property(readonly, nonatomic) BOOL serviceRequiresSingleAccount;
@property(readonly, nonatomic) int serviceProtocolVersion;
@property(readonly, nonatomic) BOOL serviceSupportsPresence;
@property(readonly, nonatomic) BOOL serviceChatsIgnoreLoginStatus;
@property(readonly, nonatomic) BOOL serviceRequiresHost;
@property(readonly, nonatomic) BOOL serviceShouldBeAlwaysLoggedIn;
@property(readonly, nonatomic) BOOL serviceNeedsPassword;
@property(readonly, nonatomic) BOOL serviceNeedsLogin;
@property(readonly, nonatomic) BOOL shouldForceAccountsConnected;
@property(readonly, nonatomic) BOOL shouldForceAccountsActive;
@property(readonly, nonatomic) BOOL shouldCreateActiveAccounts;
@property(readonly, nonatomic) BOOL serviceWantsNullHostReachability;
@property(readonly, nonatomic) BOOL serviceIgnoresNetworkConnectivity;
@property(readonly, nonatomic) BOOL serviceSupportsRegistration;
@property(readonly, nonatomic) BOOL supportsDatabase;
@property(readonly, nonatomic) BOOL disallowDeactivation;
@property(readonly, nonatomic) NSDictionary *defaultAccountSettings;
- (void)saveSettings;
- (void)delayedSaveSettings;
- (BOOL)clearOneTimeImportAccounts;
@property(readonly, nonatomic) NSDictionary *serviceDefaultsForSetup;
@property(readonly, nonatomic) NSDictionary *serviceDefaults;
- (id)_serviceDefaultsForDomain:(id)arg1;
- (id)_defaultDefaults;
- (void)synchronizeServiceDefaults;
@property(readonly, nonatomic) Class sessionClass;
- (id)_oldServiceDomain;
@property(readonly, nonatomic) NSString *serviceDomain;
- (id)_serviceDomain;
- (id)oldInternalName;
@property(readonly, nonatomic) NSString *internalName;
- (void)unloadServiceBundle;
- (void)_reallyUnloadServiceBundle;
- (void)loadServiceBundle;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end

