/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UISegmentedControl.h"

@class UILabel;

@interface IUiPadVideosSegmentedControl : UISegmentedControl
{
    UILabel *_titleLabel;
}

- (id)_newTitleLabel;
- (void)removeSegmentAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

