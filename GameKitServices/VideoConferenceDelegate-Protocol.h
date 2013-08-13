/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol VideoConferenceDelegate
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 error:(id)arg4;

@optional
- (void)videoConference:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(int)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(int)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(int)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
@end

