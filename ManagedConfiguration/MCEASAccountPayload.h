/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSData, NSNumber, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    BOOL _useSSL;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    BOOL _syncDefaultFoldersOnly;
}

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;
@property(nonatomic) BOOL syncDefaultFoldersOnly; // @synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(copy, nonatomic) NSString *embeddedCertificatePassword; // @synthesize embeddedCertificatePassword=_embeddedCertificatePassword;
@property(readonly, nonatomic) NSString *embeddedCertificateName; // @synthesize embeddedCertificateName=_embeddedCertificateName;
@property(readonly, nonatomic) NSData *embeddedCertificate; // @synthesize embeddedCertificate=_embeddedCertificate;
@property(readonly, nonatomic) NSNumber *mailNumberOfPastDaysToSync; // @synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync;
@property(readonly, nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)stubDictionary;
- (id)description;
@property(readonly, nonatomic) BOOL hasCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

