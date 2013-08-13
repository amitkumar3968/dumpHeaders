/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class NSBundle, NSString;

@interface Player : NSObject <AVAudioPlayerDelegate>
{
    NSString *_directory;
    NSBundle *_bundle;
}

+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)__nts_queuePlayerStatusChanged:(id)arg1;
+ (void)__nts_indicateEndOfQueuePlayback:(id)arg1;
+ (void)__deactivateAudioSession;
+ (void)__clearSharedPlayQueue;
+ (id)__sharedPlayQueue;
+ (id)__stringForAudioSessionError:(long)arg1;
+ (void)__audioSessionInterruptionDidEnd;
+ (void)__audioSessionInterruptionDidBegin;
+ (void)__initializeAudioSession;
+ (void)initialize;
- (void)stopAllSounds;
- (void)playSoundFilesInSequence:(id)arg1;
- (void)_addFileToQueue:(id)arg1;
@property(readonly, nonatomic) BOOL isPlaying; // @dynamic isPlaying;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;
- (id)_playerItemForFileNamed:(id)arg1;

@end
