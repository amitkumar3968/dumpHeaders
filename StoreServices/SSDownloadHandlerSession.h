/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSDownloadSession.h>

@class NSString;

@interface SSDownloadHandlerSession : SSDownloadSession
{
}

- (void)_setBool:(BOOL)arg1 forSessionProperty:(const char *)arg2;
- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (void)setStatusDescription:(id)arg1;
- (void)setPercentComplete:(float)arg1;
@property BOOL needsPowerAssertion;
@property BOOL canBePaused;
@property BOOL blocksOtherDownloads;
- (void)releaseSessionControl;
- (void)finishSessionWithSuccess:(BOOL)arg1 error:(id)arg2;
@property(readonly) NSString *downloadPhase;
- (void)disavowSessionWithError:(id)arg1;

@end

