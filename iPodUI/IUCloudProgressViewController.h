/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

@class NSTimer, UIImageView, UIProgressView;

@interface IUCloudProgressViewController : IUiPodViewController
{
    UIImageView *_cloudImageView;
    NSTimer *_cloudProgressTimer;
    UIProgressView *_cloudProgressView;
}

- (void)_updateInProgressDidChangeNotification:(id)arg1;
- (void)_updateProgressTimerDidFire:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

