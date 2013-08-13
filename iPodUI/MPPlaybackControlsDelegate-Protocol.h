/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MPPlaybackControlsDelegate <NSObject>

@optional
- (BOOL)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (unsigned int)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
- (BOOL)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickFastForwardButton:(id)arg1;
- (void)controlsOverlayDidClickRewindButton:(id)arg1;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;
- (unsigned int)repeatTypeForPlaybackControls:(id)arg1;
- (BOOL)hideGeniusButtonForPlaybackControls:(id)arg1;
- (BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
- (BOOL)playbackControlsDidTapGeniusButton:(id)arg1;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
@end

