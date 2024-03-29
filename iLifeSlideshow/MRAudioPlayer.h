/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRAudioPlayer.h"

@class AVPlayer, NSArray;

@interface MRAudioPlayer : NSObject <MRAudioPlayer>
{
    NSArray *_audioItems;
    AVPlayer *_avPlayer;
    double _duration;
    double _parentDuration;
    double _localTime;
    float _volume;
    double _fadeInDuration;
    double _fadeOutDuration;
    float _duckLevel;
    double _duckInDuration;
    double _duckOutDuration;
    int _priority;
    float _currentVolume;
    BOOL _shouldBePlaying;
}

@property(nonatomic) BOOL shouldBePlaying; // @synthesize shouldBePlaying=_shouldBePlaying;
@property(readonly) float currentVolume; // @synthesize currentVolume=_currentVolume;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) double duckOutDuration; // @synthesize duckOutDuration=_duckOutDuration;
@property(nonatomic) double duckInDuration; // @synthesize duckInDuration=_duckInDuration;
@property(nonatomic) float duckLevel; // @synthesize duckLevel=_duckLevel;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double localTime; // @synthesize localTime=_localTime;
@property(nonatomic) double parentDuration; // @synthesize parentDuration=_parentDuration;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
- (void)resyncAudioItem;
- (void)processWithDuckLevel:(float)arg1;
@property(readonly) float currentDuckLevel;
- (void)syncVolumeToAudioPlaylist:(id)arg1;
- (void)dealloc;
- (id)initWithAudioItems:(id)arg1 andAudioPlaylist:(id)arg2;

@end

