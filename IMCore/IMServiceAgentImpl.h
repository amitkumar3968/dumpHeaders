/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IMCore/IMServiceAgent.h>

@class IMServiceAgentCenter;

@interface IMServiceAgentImpl : IMServiceAgent
{
    IMServiceAgentCenter *_notifCenter;
    BOOL _anyAccountsConnected;
}

+ (id)imageURLForStatus:(unsigned int)arg1;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (void)_determineStatusImageAppearance;
+ (void)_statusImageAppearanceChanged:(id)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)notificationCenter;
+ (void)initialize;
+ (id)sharedAgent;
- (unsigned long long)vcCapabilities;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setupComplete;
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5;
- (void)_processAccountStatusChange;
- (void)imHandleInfoChangedNotification:(id)arg1;
- (void)imHandleStatusChangedNotification:(id)arg1;
- (void)setMyAwayMessages:(id)arg1;
- (void)setMyAvailableMessages:(id)arg1;
- (id)myAwayMessages;
- (id)myAvailableMessages;
- (void)_customMessagesChanged:(id)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)_statusImageAppearanceChanged:(id)arg1;
- (id)notificationCenter;
- (void)centerDidRemoveObserver;
- (void)centerWillAddObserver;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)launchIfNecessary;
- (void)_daemonDisconnected:(id)arg1;
- (void)_daemonConnected:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

