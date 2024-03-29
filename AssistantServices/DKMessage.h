/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface DKMessage : NSObject
{
    NSString *_name;
    NSMutableDictionary *_info;
    struct _xpc_connection_s *_x_reply_connection;
    void *_x_reply;
    NSMutableDictionary *_replyInfo;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)sendReply;
- (void *)_createXPCMessage;
- (id)_initWithXPCMessage:(void *)arg1;
- (BOOL)needsReply;
- (void)setReplyValue:(id)arg1 forKey:(id)arg2;
- (id)infoValueForKey:(id)arg1;
- (void)setInfoValue:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)setReplyWithError:(id)arg1;
- (BOOL)isErrorMessage;
- (id)errorFromInfo;
- (void)setInfoWithError:(id)arg1;

@end

