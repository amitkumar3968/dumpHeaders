/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate.h"

@class NSString, UILabel, UIView;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate>
{
    NSString *_wifiName;
    NSString *_wifiPassword;
    BOOL _guestNetworkEnabled;
    int _guestNetSecMode;
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
}

@property(retain, nonatomic) UILabel *justTextLabel; // @synthesize justTextLabel;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
@property(nonatomic) int guestNetSecMode; // @synthesize guestNetSecMode=_guestNetSecMode;
@property(nonatomic) BOOL guestNetworkEnabled; // @synthesize guestNetworkEnabled=_guestNetworkEnabled;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned int)arg2 isOn:(BOOL)arg3;
- (BOOL)validateAndSetValues;
- (void)setupInitialTableHeaderConfiguration;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initUI;
- (void)validateAndUpdateNextButton;
- (void)addGuestNetworkPasswordSection;
- (void)addGuestNetworkIsEnabledSection;
- (void)updateTable;
- (void)setupTable;

@end

