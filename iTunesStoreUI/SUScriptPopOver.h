/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, UIPopoverController;

@interface SUScriptPopOver : SUScriptObject
{
    BOOL _ignoreDismiss;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_showAsModalViewController;
- (BOOL)_shouldDisplayAsPopover;
- (void)_setNativeViewController:(id)arg1;
- (void)_setIgnoresDismiss:(BOOL)arg1;
- (id)_popOverController;
- (BOOL)_isViewControllerVisible;
- (id)_nativeViewController;
- (id)_activeViewController;
- (void)_dismissAnimated:(BOOL)arg1;
- (void)_viewControllerDidDismiss:(id)arg1;
- (void)_overlayWillShowNotification:(id)arg1;
@property(readonly) int backgroundStyleShare;
@property(readonly) int backgroundStyleDefault;
@property(readonly) int backgroundStyleCream;
@property(readonly) int backgroundStyleClear;
@property(readonly) int backgroundStyleBlack;
@property(retain) SUScriptViewController *viewController;
@property float contentWidth;
@property float contentHeight;
@property int backgroundStyle;
@property(readonly) SUScriptViewController *presentingViewController;
- (id)_className;
- (BOOL)showFromNavigationItem:(id)arg1;
- (BOOL)showFromElement:(id)arg1;
- (void)setContentWidth:(float)arg1 height:(float)arg2 animated:(BOOL)arg3;
- (void)dismissAnimated:(id)arg1;
- (void)tearDownUserInterface;
- (BOOL)isVisible;
@property(retain, nonatomic) UIPopoverController *nativePopoverController;
- (void)dealloc;
- (id)init;

@end

