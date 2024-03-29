/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSURLRequest, SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding>
{
    SSURLRequestProperties *_requestProperties;
    BOOL _shouldMescalSign;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id)arg1;
- (BOOL)start;
@property(readonly) NSURLRequest *URLRequest;
- (void)startWithConnectionResponseBlock:(id)arg1;
@property BOOL shouldMescalSign;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) id <SSURLConnectionRequestDelegate> delegate; // @dynamic delegate;

@end

