/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBSettingsGatewayRemoteInterface.h"
#import "XPCProxyTarget.h"

@interface BBSettingsGateway : NSObject <BBSettingsGatewayRemoteInterface, XPCProxyTarget>
{
    id _serverProxy;
    id _overrideStatusChangeHandler;
    id _activeOverrideTypesChangedHandler;
}

+ (void)initialize;
- (void)setBehaviorOverridesEnabled:(BOOL)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(id)arg1;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1;
- (void)behaviorOverrideStatusChanged:(int)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setPrivilegedSenderTypes:(unsigned int)arg1;
- (void)setBehaviorOverrideStatus:(int)arg1;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setSectionOrderRule:(unsigned int)arg1;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStatusChangeHandler:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(id)arg1;
- (void)getBehaviorOverridesWithCompletion:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

