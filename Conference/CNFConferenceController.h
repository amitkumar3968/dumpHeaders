/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMAVControllerDelegate.h"
#import "IMAVInvitationControllerDelegate.h"

@class IMAVChat, NSMutableArray;

@interface CNFConferenceController : NSObject <IMAVControllerDelegate, IMAVInvitationControllerDelegate>
{
    BOOL _isConnected;
    int _type;
    IMAVChat *_activeAVChat;
    NSMutableArray *_avChatList;
}

+ (struct __CFPhoneNumber *)newPhoneNumberRefForDestinationId:(id)arg1 useNetworkCountryCode:(BOOL)arg2;
+ (BOOL)disconnect;
+ (BOOL)connect;
+ (int)conferenceControllerType;
+ (id)sharedInstance;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) IMAVChat *avChat; // @synthesize avChat=_activeAVChat;
- (id)currentCallConnectedDate;
- (id)currentCallRemoteUserId;
- (void)activateFaceTime;
- (int)activationState;
- (void)faceTimeHistoryChanged:(id)arg1;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (void)avChatStateChanged:(id)arg1;
- (void)_handleConferenceEnded:(id)arg1 withReason:(unsigned int)arg2 withError:(int)arg3;
- (void)_handleConferenceConnecting:(id)arg1;
- (void)avChatStateChangedFrom:(unsigned int)arg1 to:(unsigned int)arg2 reason:(unsigned int)arg3;
- (void)conference:(id)arg1 receivedCancelledInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 handleMissedInvitationFromIMHandle:(id)arg2;
- (void)conference:(id)arg1 receivedInvitationFromIMHandle:(id)arg2;
- (void)inviteFailedFromIMHandle:(id)arg1 reason:(int)arg2;
- (void)invitedToIMAVChat:(id)arg1;
- (BOOL)faceTimeInvitationExists;
- (BOOL)inFaceTime;
- (BOOL)_chat:(id)arg1 isCrossInvitationWithChat:(id)arg2;
- (unsigned int)_currentChatState;
- (void)endFaceTime;
- (struct CGSize)localCameraAspectRatioForOrientation:(unsigned int)arg1;
@property(readonly, nonatomic) struct CGSize remoteCameraAspectRatio;
@property(readonly, nonatomic) unsigned int remoteCameraOrientation;
@property(readonly, nonatomic) unsigned int remoteCameraType;
@property(readonly, nonatomic) unsigned int localCameraType;
- (void)setFaceTimePaused:(BOOL)arg1;
- (BOOL)faceTimePaused;
- (void)setFaceTimeMuted:(BOOL)arg1;
- (BOOL)faceTimeMuted;
- (void)declineFaceTimeInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (void)acceptFaceTimeInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (id)avChatForConferenceID:(id)arg1;
- (id)sendFaceTimeInvitationTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)sendFaceTimeInvitationTo:(id)arg1;
- (BOOL)canSendFaceTimeInvitationTo:(id)arg1;
- (BOOL)validFaceTimeAccountExistsForDestinationID:(id)arg1;
- (id)remoteParticipant;
- (BOOL)_activeChatExists;
- (void)_handleEndAVChat:(id)arg1 withReason:(unsigned int)arg2 error:(int)arg3;
- (void)_handleAVChatStateChangeFromState:(unsigned int)arg1 to:(unsigned int)arg2 withReason:(unsigned int)arg3;
- (void)_handleCanceledInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (void)_handleInvitationForConferenceID:(id)arg1 fromHandle:(id)arg2;
- (BOOL)faceTimeIsAvailable;
- (BOOL)isInvitationListener;
@property(readonly, nonatomic) BOOL isFullConferenceCapable; // @dynamic isFullConferenceCapable;
- (void)_cleanUpAfterAVChat;
- (id)_imHandleFromURL:(id)arg1;
- (id)_imHandleFromID:(id)arg1 countryCode:(id)arg2;
- (id)_countryCode;
- (void)setNeedsPushReliability:(BOOL)arg1;
- (void)disconnectFromService;
- (void)iChatAgentDisconnected;
- (void)iChatAgentConnected;
- (void)connectToService;
- (void)dealloc;
- (id)_initWithType:(int)arg1;
- (id)init;

@end

