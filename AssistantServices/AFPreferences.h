/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AFPreferences : NSObject
{
    BOOL _shouldSynchronizePrivateDomain;
}

+ (id)sharedPreferences;
- (BOOL)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (id)languagesMissingBirthCertificates;
- (void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2;
- (id)birthCertificateDataForLanguageCode:(id)arg1;
- (id)whitelistedLanguages;
- (void)setShouldShowReadyForLanguageCode:(id)arg1;
- (void)didShowReadyForLanguageCode:(id)arg1;
- (BOOL)shouldShowReadyForLanguageCode:(id)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (void)setHandsFreeMode:(int)arg1;
- (int)handsFreeMode;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (BOOL)debugButtonIsEnabled;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (id)valueForSessionContextPreferenceKey:(id)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (BOOL)dictationIsEnabled;
- (BOOL)assistantIsEnabled;
- (void)_synchronizeSessionContext;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)_preferencesDidChangeExternally;

@end

