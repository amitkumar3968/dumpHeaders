/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest
{
    AAAccount *_account;
}

@property(retain, nonatomic) AAAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

