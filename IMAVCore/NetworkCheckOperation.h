/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IMAVCore/IMExtendedOperation.h>

@class IMAVChatParticipant;

@interface NetworkCheckOperation : IMExtendedOperation
{
    IMAVChatParticipant *_participant;
    unsigned int _foundActiveWiFi:1;
    unsigned int _foundUsableNetwork:1;
    unsigned int _showNetworkOptions:1;
    unsigned int _shouldWaitForWifi:1;
}

- (BOOL)hasValidNetwork;
- (BOOL)hasActiveWiFi;
- (void)main;
- (void)dealloc;
- (id)initWithParticipant:(id)arg1 shouldWaitForWifi:(BOOL)arg2 shouldShowNetworkOptions:(BOOL)arg3;

@end

