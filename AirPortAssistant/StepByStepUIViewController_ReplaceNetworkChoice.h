/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker.h"

@class UILabel, UIView;

@interface StepByStepUIViewController_ReplaceNetworkChoice : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
}

@property(retain, nonatomic) UILabel *justTextLabel; // @synthesize justTextLabel;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)setupDevices;
- (void)updateNavigationButtons;
- (void)prepareParams;
- (void)setupHeaderAndFooter;

@end

