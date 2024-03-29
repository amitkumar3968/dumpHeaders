/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "Message.h"

@class MFMessageInfo;

@interface MailMessage : Message
{
    unsigned long long _messageFlags;
    unsigned char _subjectPrefixLength;
    unsigned long long _modSequenceNumber;
    MFMessageInfo *_info;
}

+ (unsigned int)displayablePriorityForPriority:(int)arg1;
+ (unsigned int)validatePriority:(int)arg1;
+ (Class)dataMessageStoreToUse;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
- (void)dealloc;
- (id)externalConversationID;
- (id)copyMessageInfo;
- (BOOL)shouldSetSummary;
- (void)setSummary:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setMutableInfoFromMessage:(id)arg1;
- (unsigned short)numberOfAttachments;
- (id)URL;
- (id)originalMailboxURL;
- (id)remoteMailboxURL;
- (id)account;
- (id)loadMeetingMetadata;
- (id)loadMeetingData;
- (id)loadMeetingExternalID;
- (void)setSubject:(id)arg1;
- (id)subject;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subjectAndPrefixLength:(unsigned int *)arg1;
- (id)mailbox;
- (void)markAsNotFlagged;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsReplied;
- (void)markAsNotViewed;
- (void)markAsViewed;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)refreshedMessage;
- (int)priority;
- (void)setPriorityFromHeaders:(id)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageFlags:(unsigned long long)arg1;
- (unsigned long long)messageFlags;
@property unsigned long long modSequenceNumber;
- (id)mailMessageStore;
- (id)messageStore;

@end

