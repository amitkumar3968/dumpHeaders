/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ApplePushService/APSMessage.h>

@class NSDate;

@interface APSIncomingMessage : APSMessage
{
}

@property(nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property(nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property(copy, nonatomic) NSDate *timestamp;

@end

