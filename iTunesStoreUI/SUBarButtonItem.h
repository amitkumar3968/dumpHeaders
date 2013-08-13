/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIBarButtonItem.h"

@class NSString, SUTouchCaptureView, SUUIAppearance, UINavigationItem, UIView;

@interface SUBarButtonItem : UIBarButtonItem
{
    UIView *_accessoryView;
    struct UIEdgeInsets _accessoryViewInsets;
    SUUIAppearance *_confirmationAppearance;
    UINavigationItem *_lastNavigationItem;
    NSString *_preConfirmationTitle;
    SUTouchCaptureView *_touchCaptureView;
}

+ (Class)classForNavigationButton;
@property(nonatomic) struct UIEdgeInsets accessoryViewInsets; // @synthesize accessoryViewInsets=_accessoryViewInsets;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_updateViewForAccessoryChange;
- (void)_setTitle:(id)arg1 isConfirmation:(BOOL)arg2 appearance:(id)arg3 animated:(BOOL)arg4;
- (void)_removeTouchCaptureView;
- (id)_navigationButton;
- (void)_addTouchCaptureViewForNavigationButton:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (void)configureFromScriptButton:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(BOOL)arg3;
@property(nonatomic, getter=isLoading) BOOL loading;
@property(readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
- (void)hideConfirmationWithAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;

@end

