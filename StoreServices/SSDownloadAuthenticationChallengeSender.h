/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLAuthenticationChallengeSender.h"

@class NSObject<OS_dispatch_queue>, SSDownloadAuthenticationSession;

__attribute__((visibility("hidden")))
@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadAuthenticationSession *_session;
}

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
@property(readonly) SSDownloadAuthenticationSession *authenticationSession;
- (void)dealloc;
- (id)initWithAuthenticationSession:(id)arg1;

@end

