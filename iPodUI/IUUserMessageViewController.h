/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

@class IUUserMessageView;

@interface IUUserMessageViewController : IUiPodViewController
{
    IUUserMessageView *_messageView;
    BOOL _didAppearShouldAttemptReturnToSourceController;
    BOOL _didDisappearShouldAttemptReturnToSourceController;
}

- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)setContext:(id)arg1;
- (void)reloadData;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)scheduleAttemptReturnToSourceController;
- (void)attemptReturnToSourceController;
- (void)loadView;
- (id)copyArchivableContexts;
- (void)dealloc;
- (id)init;

@end

