/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray;

@interface CNFHUDView : UIView
{
    NSArray *_buttons;
    int _style;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)undim;
- (void)dim;
- (void)setIconOrientation:(int)arg1;
- (void)setButton:(int)arg1 isSelected:(BOOL)arg2;
- (void)_buttonPressed:(id)arg1;
- (void)setTitleInset:(float)arg1 forButtonTag:(int)arg2;
- (void)setTitle:(id)arg1 image:(id)arg2 forButtonTag:(int)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 buttons:(id)arg2;
- (struct CGSize)_defaultButtonSizeForButton:(id)arg1;
- (struct CGRect)_frameForStyle:(int)arg1;
- (int)_buttonPositionForButton:(id)arg1;
- (id)_buttonForButtonTag:(int)arg1;

@end

