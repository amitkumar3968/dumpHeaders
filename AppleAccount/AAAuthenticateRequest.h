/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppleAccount/AARequest.h>

@class AAAccount, NSString;

@interface AAAuthenticateRequest : AARequest
{
    NSString *_username;
    NSString *_password;
    AAAccount *_account;
}

+ (Class)responseClass;
@property(copy, nonatomic) AAAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlCredential;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end
