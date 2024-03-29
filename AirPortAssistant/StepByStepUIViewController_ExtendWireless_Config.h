/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>

#import "StepByStepUIDevicePicker.h"

@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker>
{
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    NSString *personalizedBaseName;
    BOOL isReallyJoin;
}

@property(retain, nonatomic) NSString *personalizedBaseName; // @synthesize personalizedBaseName;
@property(retain, nonatomic) UILabel *justTextLabel; // @synthesize justTextLabel;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)validateAndUpdateNextButton;
- (void)setupDevices;
- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (void)updateNavigationButtons;
- (void)selectedDeviceUpdated;
- (void)primaryActionSelected:(BOOL)arg1;
- (void)setupHeaderAndFooter;
- (void)setupAndShowEditableBaseStationName;
- (void)viewDidLoad;

@end

