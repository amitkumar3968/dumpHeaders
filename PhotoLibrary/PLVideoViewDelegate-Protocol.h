/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PLVideoViewDelegate <NSObject>

@optional
- (BOOL)videoViewCanManageStatusBar:(id)arg1;
- (id)videoViewSelectedAirTunesService:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidBeginScrubbing:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (float)videoViewScrubberWidth:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2;
@end

