/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
{
}

+ (void)updateCriticalState;
- (int)_runPingTestForChat:(id)arg1;
- (int)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (void)chatStateUpdated;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;

@end

