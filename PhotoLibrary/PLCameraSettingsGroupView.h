/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UILabel, UISwitch;

@interface PLCameraSettingsGroupView : UIView
{
    int type;
    NSString *title;
    BOOL shouldCenterTitle;
    UILabel *titleLabel;
    UISwitch *accessorySwitch;
}

@property(retain, nonatomic) UISwitch *accessorySwitch; // @synthesize accessorySwitch;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) BOOL shouldCenterTitle; // @synthesize shouldCenterTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int type; // @synthesize type;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

