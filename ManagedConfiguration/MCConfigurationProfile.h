/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfile.h>

@class MCProfileServiceProfile, NSArray;

@interface MCConfigurationProfile : MCProfile
{
    NSArray *_payloads;
    MCProfileServiceProfile *_OTAProfile;
}

@property(nonatomic) __weak MCProfileServiceProfile *OTAProfile; // @synthesize OTAProfile=_OTAProfile;
- (id)payloads;
- (void).cxx_destruct;
- (id)earliestCertificateExpiryDate;
- (id)localizedPayloadSummaryByType;
- (id)stubDictionary;
- (id)description;
- (id)installationWarnings;
- (BOOL)isManagedByProfileService;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id *)arg5;
- (id)payloadWithUUID:(id)arg1;
- (void)_sortPayloads;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;

@end

