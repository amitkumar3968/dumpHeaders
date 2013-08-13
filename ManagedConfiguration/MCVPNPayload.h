/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MCVPNPayload : MCPayload
{
    NSMutableDictionary *_atom;
    NSString *_certificateUUID;
    unsigned char _userNameRequired;
    unsigned char _passwordRequired;
    unsigned char _proxyUserNameRequired;
    unsigned char _proxyPasswordRequired;
    unsigned char _sharedSecretRequired;
    unsigned char _pinRequired;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *sharedSecret; // @synthesize sharedSecret=_sharedSecret;
@property(copy, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(copy, nonatomic) NSString *proxyUserName; // @synthesize proxyUserName=_proxyUserName;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, nonatomic) NSString *pinKey; // @synthesize pinKey=_pinKey;
@property(readonly, nonatomic) NSString *sharedSecretKey; // @synthesize sharedSecretKey=_sharedSecretKey;
@property(readonly, nonatomic) NSString *proxyPasswordKey; // @synthesize proxyPasswordKey=_proxyPasswordKey;
@property(readonly, nonatomic) NSString *proxyUserNameKey; // @synthesize proxyUserNameKey=_proxyUserNameKey;
@property(readonly, nonatomic) NSString *passwordKey; // @synthesize passwordKey=_passwordKey;
@property(readonly, nonatomic) NSString *userNameKey; // @synthesize userNameKey=_userNameKey;
@property(readonly, nonatomic) unsigned char pinRequired; // @synthesize pinRequired=_pinRequired;
@property(readonly, nonatomic) unsigned char sharedSecretRequired; // @synthesize sharedSecretRequired=_sharedSecretRequired;
@property(readonly, nonatomic) unsigned char proxyPasswordRequired; // @synthesize proxyPasswordRequired=_proxyPasswordRequired;
@property(readonly, nonatomic) unsigned char proxyUserNameRequired; // @synthesize proxyUserNameRequired=_proxyUserNameRequired;
@property(readonly, nonatomic) unsigned char passwordRequired; // @synthesize passwordRequired=_passwordRequired;
@property(readonly, nonatomic) unsigned char userNameRequired; // @synthesize userNameRequired=_userNameRequired;
@property(readonly, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(readonly, nonatomic) NSDictionary *atom; // @synthesize atom=_atom;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (void)_validateVPNPayload:(id)arg1;

@end

