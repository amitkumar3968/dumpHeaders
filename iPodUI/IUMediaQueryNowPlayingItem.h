/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MPMediaQueryNowPlayingItem.h"

@interface IUMediaQueryNowPlayingItem : MPMediaQueryNowPlayingItem
{
    BOOL _loggingEnabled;
}

+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (void)setDefaultScaleMode:(unsigned int)arg1;
+ (unsigned int)defaultScaleMode;
- (void)_updateRentalsPlistForFinish;
- (id)_mediaSelectionOptionFromGroup:(id)arg1 withTrackID:(int)arg2;
- (id)_fallbackAudioOptionFromOptions:(id)arg1 locale:(id)arg2 strict:(BOOL)arg3;
- (void)setupPlaybackInfo;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (id)imageCacheRequestWithSize:(struct CGSize)arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (id)imageCache;
- (BOOL)hasDisplayableText;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (float)defaultPlaybackRate;
- (id)initWithMediaItem:(id)arg1;

@end

