/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol IMAVInvitationControllerDelegate

@optional
- (void)avChatStateChangedFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (BOOL)conference:(id)arg1 requiresWiFiAssociationForInvitationFromIMHandle:(id)arg2 isWiFiEnabled:(BOOL)arg3 foundActiveWiFi:(BOOL)arg4;
- (void)avChatStateChangedFrom:(unsigned int)arg1 to:(unsigned int)arg2 reason:(unsigned int)arg3;
- (void)conference:(id)arg1 handleMissedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedCancelledInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedInvitationFromIMHandle:(id)arg2;
@end

