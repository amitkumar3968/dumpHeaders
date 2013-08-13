/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount
{
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
    unsigned int _supportsOutboxCopy:1;
    unsigned int _useCellDataOnly:1;
}

+ (id)saslProfileName;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;
+ (id)newDefaultInstance;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (void *)keychainProtocol;
+ (id)accountTypeString;
- (void)dealloc;
- (id)passwordFromKeychain;
- (void)setPasswordInKeychain:(id)arg1;
- (BOOL)canBeFallbackAccount;
- (BOOL)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnections;
- (void)checkInConnection:(id)arg1;
- (void)setTimer;
- (void)connectionExpired:(id)arg1;
- (void)disconnect:(id)arg1;
- (id)authenticatedConnection:(BOOL)arg1;
- (struct __CFString *)connectionServiceType;
- (void)setSupportsOutboxCopy:(BOOL)arg1;
- (BOOL)supportsOutboxCopy;
- (void)setSupportsPipelining:(BOOL)arg1;
- (BOOL)supportsPipelining;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3;
- (Class)connectionClass;
- (unsigned int)keychainPortNumber;
- (BOOL)isCommonPortNumber:(unsigned int)arg1;
- (id)serviceName;
- (unsigned int)defaultPortNumber;
- (void)setDeliveryClass:(Class)arg1;
- (Class)deliveryClass;
- (id)certUIService;

@end

