/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class FTCConnectionHandler, NSObject<OS_xpc_object>;

@interface CKClientComposeServer : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    FTCConnectionHandler *_connectionHandler;
}

+ (id)sharedInstance;
- (void)_finishSendingClientComposedMessageForMarkup:(id)arg1 subject:(id)arg2 handles:(id)arg3 attachments:(id)arg4 guid:(id)arg5 forceService:(id)arg6 forceSMS:(BOOL)arg7;
- (void)_sendClientComposedMessageForMarkup:(id)arg1 subject:(id)arg2 recipients:(id)arg3 attachments:(id)arg4 guid:(id)arg5 forceSMS:(BOOL)arg6;
- (id)_serviceForHandles:(id)arg1;
- (void)_stopListeningForClientComposeNotifications;
- (void)_startListeningForClientComposeNotifications;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

