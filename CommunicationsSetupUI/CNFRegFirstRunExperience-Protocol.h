/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIBarButtonItem;

@protocol CNFRegFirstRunExperience <NSObject>
@property(retain, nonatomic) UIBarButtonItem *customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton;
@property(readonly, nonatomic) int currentAppearanceStyle;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate;
- (id)initWithRegController:(id)arg1 account:(id)arg2;

@optional
@property(nonatomic) BOOL showSplash;
@end

