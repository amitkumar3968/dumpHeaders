/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WebInspectorServerWebViewConnection;

__attribute__((visibility("hidden")))
@interface WebInspectorRemoteChannel : NSObject
{
    WebInspectorServerWebViewConnection *_remote;
    struct WebInspectorClient {
        void **;
        void **;
        id;
        struct RetainPtr<WebNodeHighlighter>;
        struct Page *;
        RetainPtr_d5c43307;
        int;
        id;
        struct WebInspectorFrontendClient *;
    } *_local;
}

+ (id)createChannelForPageId:(unsigned int)arg1 connection:(id)arg2;
- (void)sendMessageToBackend:(id)arg1;
- (void)sendMessageToFrontend:(id)arg1;
- (void)closeFromRemoteSide;
- (void)closeFromLocalSide;
- (id)initWithRemote:(id)arg1 local:(struct WebInspectorClient *)arg2;

@end

