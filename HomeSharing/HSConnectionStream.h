/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HSConnectionStream : NSObject
{
    struct __CFReadStream *_readStream;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)sendCFHTTPMessage:(struct __CFHTTPMessage *)arg1 withResponseHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end

