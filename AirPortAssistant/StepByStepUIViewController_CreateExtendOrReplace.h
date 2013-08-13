/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate.h"

@class UILabel, UIView;

@interface StepByStepUIViewController_CreateExtendOrReplace : StepByStepUIViewController <TableViewManagerDelegate>
{
    UIView *tableHeaderContainerView;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
}

@property(retain, nonatomic) UILabel *justTextLabel; // @synthesize justTextLabel;
@property(retain, nonatomic) UIView *justTextContainerView; // @synthesize justTextContainerView;
@property(retain, nonatomic) UIView *tableHeaderContainerView; // @synthesize tableHeaderContainerView;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initUI;
- (void)setupTable;
- (void)setupInitialTableHeaderConfiguration;
- (void)dealloc;
- (void)handleSelectorChoiceWithTag:(unsigned int)arg1;

@end

