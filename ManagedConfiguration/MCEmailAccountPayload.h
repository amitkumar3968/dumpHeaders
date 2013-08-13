/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
}

+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;
@property(readonly, nonatomic) NSString *outgoingMailServerUsername; // @synthesize outgoingMailServerUsername=_outgoingMailServerUsername;
@property(readonly, nonatomic) BOOL outgoingMailServerUseSSL; // @synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL;
@property(readonly, nonatomic) NSNumber *outgoingMailServerPortNumber; // @synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber;
@property(readonly, nonatomic) NSString *outgoingMailServerHostname; // @synthesize outgoingMailServerHostname=_outgoingMailServerHostname;
@property(readonly, nonatomic) NSString *outgoingMailServerAuthentication; // @synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication;
@property(readonly, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword; // @synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword;
@property(readonly, nonatomic) NSString *outgoingPassword; // @synthesize outgoingPassword=_outgoingPassword;
@property(readonly, nonatomic) NSString *incomingPassword; // @synthesize incomingPassword=_incomingPassword;
@property(readonly, nonatomic) NSString *incomingMailServerIMAPPathPrefix; // @synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix;
@property(readonly, nonatomic) NSString *incomingMailServerUsername; // @synthesize incomingMailServerUsername=_incomingMailServerUsername;
@property(readonly, nonatomic) BOOL incomingMailServerUseSSL; // @synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL;
@property(readonly, nonatomic) NSNumber *incomingMailServerPortNumber; // @synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber;
@property(readonly, nonatomic) NSString *incomingMailServerHostname; // @synthesize incomingMailServerHostname=_incomingMailServerHostname;
@property(readonly, nonatomic) NSString *incomingMailServerAuthentication; // @synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) NSString *emailAccountType; // @synthesize emailAccountType=_emailAccountType;
@property(readonly, nonatomic) NSString *emailAccountName; // @synthesize emailAccountName=_emailAccountName;
@property(readonly, nonatomic) NSString *emailAccountDescription; // @synthesize emailAccountDescription=_emailAccountDescription;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

