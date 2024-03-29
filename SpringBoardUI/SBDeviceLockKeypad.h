/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "TPPhonePad.h"

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad
{
    UIButton *_deleteButton;
    UIButton *_cancelButton;
    BOOL _deleteEnabled;
    BOOL _playKeyboardClicks;
}

+ (struct CGSize)defaultSize;
+ (id)pressedImage;
+ (id)keypadImage;
@property(nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled; // @synthesize deleteEnabled=_deleteEnabled;
@property(readonly, nonatomic) BOOL emergencyKeyChar;
@property(readonly, nonatomic) BOOL cancelKeyChar;
@property(readonly, nonatomic) BOOL deleteKeyChar;
@property(nonatomic) BOOL showsEmergencyCallButton;
@property(nonatomic) BOOL playsKeyboardClicks;
- (id)initWithDefaultSizeForStyle:(int)arg1;
- (id)_pressedImage;
- (id)_keypadImage;
- (void)willBecomeVisible;
- (void)hiddenFromView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

