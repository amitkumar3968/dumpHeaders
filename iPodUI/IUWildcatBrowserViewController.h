/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

@class IUiPodSegmentedViewController;

@interface IUWildcatBrowserViewController : IUiPodViewController
{
    IUiPodSegmentedViewController *_segmentedViewController;
}

+ (Class)navigationBarClass;
@property(readonly, nonatomic) IUiPodViewController *topViewController;
@property(readonly, nonatomic) IUiPodSegmentedViewController *segmentedViewController; // @synthesize segmentedViewController=_segmentedViewController;
- (id)createSegmentedController;
- (id)createNavigationBar;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) int style; // @dynamic style;

@end

