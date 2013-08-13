/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PSViewController.h"

#import "CNFRegFirstRunExperience.h"

@class CNFRegController, CNFRegLearnMoreButton, UIBarButtonItem;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience>
{
    CNFRegLearnMoreButton *_learnMoreButton;
    id <CNFRegFirstRunDelegate> _delegate;
    CNFRegController *_regController;
}

@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @dynamic customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton; // @dynamic customLeftButton;
@property(readonly, nonatomic) int currentAppearanceStyle; // @dynamic currentAppearanceStyle;
- (id)_shadowedLabelWithFont:(id)arg1 text:(id)arg2;
- (id)_shadowLabelColor;
- (void)_getStartedPressed:(id)arg1;
- (void)_learnMorePressed:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willBecomeActive;
- (void)loadView;
- (float)_startingYOffset;
- (id)splashImage;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL showSplash;

@end

