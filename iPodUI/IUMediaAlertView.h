/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIAlertView.h"

@interface IUMediaAlertView : UIAlertView
{
}

+ (id)_willBeginRentalPlaybackAlertWithRentalData:(id)arg1 mediaItem:(id)arg2;
+ (id)_notEnoughRentalTimeRemainingAlertWithMediaItem:(id)arg1;
+ (id)playbackAlertWithRentalMediaItem:(id)arg1 style:(int *)arg2;
- (void)show;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithError:(id)arg1;

@end

