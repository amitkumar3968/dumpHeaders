/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IMAVInvitationController : NSObject
{
}

+ (id)curentAVChatConnectedDate;
+ (id)curentAVChatRemoteUserID;
+ (unsigned int)currentAVChatEndedReason;
+ (unsigned int)currentAVChatState;
+ (id)delegate;
+ (void)setDelegate:(id)arg1;
+ (void)sendResponse:(unsigned int)arg1 toInvitationRequestFromBuddy:(id)arg2 forConference:(id)arg3;
+ (void)declineInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (void)acceptInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (void)setupIMAVInvitationController;
+ (void)_markSetup;

@end

