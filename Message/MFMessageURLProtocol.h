/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSURLProtocol.h"

@class MessageTextAttachment, MonitoredInvocation, NSThread, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol
{
    NSURL *_url;
    MessageTextAttachment *_attachment;
    MonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (void)initialize;
- (void)dealloc;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)_downloadAttachment;
- (void)stopLoading;
- (void)startLoading;

@end

