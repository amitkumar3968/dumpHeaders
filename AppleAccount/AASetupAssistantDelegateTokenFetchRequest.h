/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppleAccount/AARequest.h>

@class AASigningSession, NSDictionary;

@interface AASetupAssistantDelegateTokenFetchRequest : AARequest
{
    NSDictionary *accountParameters;
    AASigningSession *signingSession;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccountParameters:(id)arg1 signingSession:(id)arg2;

@end

