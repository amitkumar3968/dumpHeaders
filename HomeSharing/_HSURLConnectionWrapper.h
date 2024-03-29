/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSObject<OS_dispatch_queue>, NSURLConnection, NSURLRequest, NSURLResponse;

@interface _HSURLConnectionWrapper : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id _completionHandler;
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSURLResponse *_response;
    NSURLRequest *_request;
}

@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)startWithCompletionHandler:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

