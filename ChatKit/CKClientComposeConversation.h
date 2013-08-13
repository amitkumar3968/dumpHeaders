/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKConversation.h>

@class NSMutableArray;

@interface CKClientComposeConversation : CKConversation
{
    NSMutableArray *_composeRecipients;
    BOOL _supportsAttachments;
    BOOL _forceMMS;
}

+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (id)_xpcConnection;
+ (double)maxTrimDurationForMediaType:(int)arg1;
+ (id)_newMessageWithComposition:(id)arg1 guid:(id)arg2;
+ (id)_copyEntityForAddressString:(id)arg1;
@property(nonatomic) BOOL forceMMS; // @synthesize forceMMS=_forceMMS;
- (void)addRecipientAddress:(id)arg1;
- (id)copyEntityForAddressString:(id)arg1;
- (BOOL)restrictMediaObjects;
- (BOOL)canSendMessageComposition:(id)arg1 error:(id *)arg2;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;
- (BOOL)isValidAddress:(id)arg1;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (void)newMessageContentChangedWithComposition:(id)arg1;
- (BOOL)shouldShowCharacterCount;
- (id)serviceDisplayName;
- (int)buttonColor;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)groupID;
- (void *)abRecord;
- (id)recipient;
- (id)recipients;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (void)loadAllMessages;
- (void)addMessage:(id)arg1;
- (id)newMessageWithComposition:(id)arg1;
- (id)newMessageWithComposition:(id)arg1 addToConversation:(BOOL)arg2;
- (id)newMessageWithComposition:(id)arg1 guid:(id)arg2 addToConversation:(BOOL)arg3;
- (id)preferredServiceWithCanSend:(char *)arg1 error:(int *)arg2;
- (id)_preferredServiceCheckWithServer:(BOOL)arg1 canSend:(char *)arg2 error:(int *)arg3;
- (BOOL)reloadIfStale;
- (id)unsentComposition;
- (void)dealloc;
- (id)initWithChat:(id)arg1 updatesDisabled:(BOOL)arg2 supportsAttachments:(BOOL)arg3;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (int)_maxAttachmentCount;

@end
