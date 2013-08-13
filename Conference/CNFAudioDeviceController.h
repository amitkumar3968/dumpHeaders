/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVController, NSArray, NSDictionary, NSString;

@interface CNFAudioDeviceController : NSObject
{
    id <CNFAudioDeviceControllerProtocol> _delegate;
    AVController *_avController;
    NSDictionary *_pickedRoute;
    NSArray *_pickableRoutes;
    NSString *_currentAudioRoute;
}

@property(retain, nonatomic) NSString *currentAudioRoute; // @synthesize currentAudioRoute=_currentAudioRoute;
- (void)_registerForAVControllerNotifications;
- (void)_pickableRoutesChanged;
- (void)_mediaServerDied;
- (BOOL)_routeIsAirTunes:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_pickRoute:(id)arg1;
- (id)_pickableRoutes;
- (id)_pickedRoute;
- (BOOL)isUsingBlueToothLEA;
- (BOOL)isAirPlayMirroring;
- (void)pickRouteAtIndex:(unsigned int)arg1;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(char *)arg2;
- (BOOL)audioCategoryIsTTY;
- (BOOL)receiverRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (void)clearCachedRoutes;
- (void)restorePickedRoute;
- (BOOL)pickRouteWithUID:(id)arg1;
- (BOOL)pickHandsetRoute;
- (BOOL)pickSpeakerRoute;
- (int)numberOfAudioRoutes;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (void)setDelegate:(id)arg1;
- (void)invalidateAVController;
- (void)setAVController:(id)arg1;
- (void)dealloc;

@end

