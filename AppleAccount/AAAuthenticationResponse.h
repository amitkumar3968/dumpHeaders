/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *fmipToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

