/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSArray, UINavigationBar, UISegmentedControl, UITransitionView, UIView;

@interface IUSegmentedViewController : UIViewController
{
    id <IUSegmentedViewControllerDelegate> _delegate;
    NSArray *_viewControllers;
    NSArray *_pendingNonTransientViewControllers;
    unsigned int _selectedIndex;
    UITransitionView *_transitionView;
    UINavigationBar *_navigationBar;
    id _segmentedControl;
    int _segmentedControlAlignment;
    UIView *_accessoryView;
    UIView *_leftView;
    struct CGSize _accessoryViewOffset;
    unsigned int _autoHidesSegmentedControl:1;
    unsigned int _ownsNavigationBar:1;
    unsigned int _viewControllersAreTransient:1;
    unsigned int _editable:1;
    unsigned int _editing:1;
}

@property(nonatomic) struct CGSize accessoryViewOffset; // @synthesize accessoryViewOffset=_accessoryViewOffset;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) int segmentedControlAlignment; // @synthesize segmentedControlAlignment=_segmentedControlAlignment;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) id <IUSegmentedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_setNavigationControllerDelegate:(id)arg1;
- (void)_updateSegmentedControlVisibility;
- (id)_newSegmentedControl;
- (void)_layoutAccessoryAndTransitionView;
- (void)_destroySegmentControl;
- (id)_createDefaultNavigationBar;
- (void)childNavigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(BOOL)arg3;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_toggleEdit:(id)arg1;
- (void)_segmentedControlChanged:(id)arg1;
- (void)_updateFromSelectedSegmentedControlIndex;
- (void)_popTopViewController:(id)arg1;
- (BOOL)viewControllerEnabledAtIndex:(unsigned int)arg1;
- (void)setViewControllerEnabled:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)reloadSegmentedControl;
- (void)reloadEnabledState;
@property(retain, nonatomic) UIViewController *transientViewController;
- (void)setViewControllers:(id)arg1 transient:(BOOL)arg2;
@property(nonatomic) UIViewController *selectedViewController;
- (void)setSelectedIndex:(unsigned int)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)cancelEditing;
@property(nonatomic) BOOL editable;
@property(nonatomic) BOOL autoHidesSegmentedControl;
- (BOOL)_canReloadView;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

