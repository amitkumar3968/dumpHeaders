/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MZKeyValueStoreAuthenticationController : NSObject
{
    NSString *_acceptedDSIDUserDefaultsKey;
    NSString *_acceptedDSIDTextUserDefaultsKey;
    BOOL _shouldAuthenticate;
}

@property(copy, nonatomic) NSString *acceptedDSIDTextUserDefaultsKey; // @synthesize acceptedDSIDTextUserDefaultsKey=_acceptedDSIDTextUserDefaultsKey;
@property(copy, nonatomic) NSString *acceptedDSIDUserDefaultsKey; // @synthesize acceptedDSIDUserDefaultsKey=_acceptedDSIDUserDefaultsKey;
@property(nonatomic) BOOL shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly, nonatomic) NSString *DSIDText;
@property(readonly, nonatomic) NSString *DSID;
@property(retain, nonatomic) NSString *acceptedDSIDText; // @dynamic acceptedDSIDText;
@property(retain, nonatomic) NSString *acceptedDSID; // @dynamic acceptedDSID;
- (void)resetAcceptedCredentials;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (BOOL)shouldForceAuthenticationForTransaction:(id)arg1;
- (BOOL)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end
