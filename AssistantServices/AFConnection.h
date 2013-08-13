/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AFManagedStore.h"

@class DKConnection, NSMutableDictionary, NSString;

@interface AFConnection : NSObject <AFManagedStore>
{
    DKConnection *_connection;
    id <AFAssistantUIService> _delegate;
    id <AFSpeechDelegate> _speechDelegate;
    float _averagePower;
    float _peakPower;
    NSString *_outstandingRequestClass;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    unsigned int _replyContextMayInitiateCall:1;
    BOOL _hasActiveRequest;
    NSMutableDictionary *_replies;
}

+ (void)defrost;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)isAvailable;
+ (void)beginMonitoringAvailability;
+ (void)_reachabilityDidChange:(id)arg1;
+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (BOOL)assistantIsEnabled;
+ (void)initialize;
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;
- (id)domainObjectForKey:(id)arg1;
- (void)clearUndoStack;
- (void)redoRequest;
- (void)undoRequest;
- (void)clearAndSetApplicationContextWithBulletins:(id)arg1;
- (void)clearAndSetApplicationContext;
- (void)clearContext;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (BOOL)replyContextMayInitiateCall;
- (float)peakPower;
- (float)averagePower;
- (BOOL)shouldSpeak;
@property(readonly, nonatomic) BOOL isRecording;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)rollbackRequest;
- (void)cancelRequest;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)cancelSpeech;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)startRequestWithText:(id)arg1 timeout:(double)arg2;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (BOOL)setLanguageCode:(id)arg1 error:(id *)arg2;
- (void)preheat;
- (void)endSession;
- (void)_willCompleteRequest;
- (void)_willFailRequest;
- (void)_willCancelRequest;
- (void)_willStartRequest;
- (void)_requestStateUpdate;
- (void)_cancelRequestTimeout;
- (void)_scheduleRequestTimeout:(double)arg1;
- (void)_invokeRequestTimeout;
- (void)_clearConnection;
- (id)_connection;
- (void)_handleMessage:(id)arg1;
- (void)_unhandledMessage:(id)arg1;
- (void)_msgSpeechRecognitionDidFail:(id)arg1;
- (void)_msgSpeechRecognized:(id)arg1;
- (void)_msgSpeechRecordingDidFail:(id)arg1;
- (void)_msgSpeechRecordingDidCancel:(id)arg1;
- (void)_msgSpeechRecordingDidEnd:(id)arg1;
- (void)_msgSpeechLevelUpdate:(id)arg1;
- (void)_msgSpeechRecordingDidBegin:(id)arg1;
- (void)_msgSpeechRecordingWillBegin:(id)arg1;
- (void)_msgReplyMayInitiateCall:(id)arg1;
- (void)_msgStateUpdate:(id)arg1;
- (void)_msgRequestError:(id)arg1;
- (void)_msgDismissAssistant:(id)arg1;
- (void)_msgOpenURL:(id)arg1;
- (void)_msgRequestCompleted:(id)arg1;
- (void)_msgDoCommand:(id)arg1;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 logAggregateData:(BOOL)arg2;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_asyncBarrierWithBlock:(id)arg1;
- (void)_barrier;
- (void)_sendMessage:(id)arg1 withReplySync:(id)arg2;
- (void)_sendMessage:(id)arg1 withReply:(id)arg2;

@end

