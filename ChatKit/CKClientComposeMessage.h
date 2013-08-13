/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKMessage.h"

@class CKConversation, CKEntity, IMService, NSArray, NSAttributedString, NSCalendarDate, NSDate, NSDictionary, NSError, NSString;

@interface CKClientComposeMessage : NSObject <CKMessage>
{
    NSArray *_recipients;
    NSArray *_parts;
    NSAttributedString *_subject;
    NSString *_markup;
    NSString *_text;
    NSCalendarDate *_calendarDate;
    double _date;
    NSString *_guid;
    NSDictionary *_attachmentParts;
}

@property(readonly, nonatomic) NSDictionary *attachmentParts; // @synthesize attachmentParts=_attachmentParts;
@property(readonly, nonatomic) NSCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
- (void)deleteMessageParts:(id)arg1;
- (BOOL)containsAllDisplayableMessageParts:(id)arg1;
- (BOOL)isFirstDisplayablePart:(id)arg1;
@property(readonly, nonatomic) BOOL shouldPlayReceivedTone;
@property(readonly, nonatomic) int failedSendCount;
@property(readonly, nonatomic) int sentCount;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic) int pendingCount;
@property(readonly, nonatomic) int rowID;
@property(readonly, nonatomic) int outgoingBubbleColor;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL isToEmailAddress;
@property(readonly, nonatomic) BOOL isRead;
@property(readonly, nonatomic) BOOL supportsDeliveryReceipts;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) BOOL isOutgoing;
@property(readonly, nonatomic) BOOL isFromFilteredSender;
@property(readonly, nonatomic) BOOL isWaitingForDelivery;
@property(readonly, nonatomic) BOOL isDelivered;
@property(readonly, nonatomic) BOOL isTypingIndicator;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) BOOL partiallyFailedSend;
@property(readonly, nonatomic) BOOL isSMS;
@property(readonly, nonatomic) BOOL isiMessage;
@property(readonly, nonatomic) BOOL wantsSendStatus;
@property(readonly, nonatomic) BOOL failedSend;
@property(readonly, nonatomic) BOOL hasBeenSent;
@property(nonatomic) BOOL isFromDowngrading;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSDate *timeRead;
@property(readonly, nonatomic) IMService *service;
@property(readonly, nonatomic) int sequenceNumber;
@property(nonatomic) CKConversation *conversation;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *previewText;
@property(readonly, nonatomic) NSString *guid;
- (void)setGroupID:(id)arg1;
- (id)groupID;
@property(readonly, nonatomic) NSString *markup;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) unsigned int messagePartCount;
@property(readonly, nonatomic) NSArray *parts;
- (void)resetParts;
- (void)loadParts;
@property(readonly, nonatomic) CKEntity *sender;
- (void)dealloc;
- (id)initWithMarkup:(id)arg1 parts:(id)arg2 attachmentParts:(id)arg3 subject:(id)arg4 guid:(id)arg5;

@end
