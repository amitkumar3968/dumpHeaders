/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIImageView.h"

@class TPButton;

@interface TPCallWaitingButton : UIImageView
{
    TPButton *_innerButton;
    unsigned int _type:1;
}

+ (float)defaultVerticalCenteringOffset;
+ (struct CGSize)defaultSizeForType:(int)arg1;
+ (id)_buttonForType:(int)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (void)removeTarget:(id)arg1 forControlEvents:(unsigned int)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)dealloc;
- (id)initBottomForTTYWithTitle:(id)arg1;
- (id)initBottomForSecondIncomingCallWaiting;
- (id)initBottomForIncomingCallWaiting;
- (id)initTopForTTY;
- (id)initTopForIncomingCallWaiting;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

