/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class PSSpecifier;

@interface PSEditingPane : UIView
{
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard:1;
    struct CGRect _pinstripeRect;
    UIView *_pinstripeView;
}

+ (float)preferredHeight;
+ (id)defaultBackgroundColor;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)changed;
- (BOOL)handlesDoneButton;
- (void)doneEditing;
- (void)editMode;
- (void)addNewValue;
- (void)viewDidBecomeVisible;
- (BOOL)wantsNewButton;
- (id)specifierLabel;
@property(nonatomic) struct CGRect pinstripeRect;
- (BOOL)requiresKeyboard;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceSpecifier;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (struct CGRect)contentRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

