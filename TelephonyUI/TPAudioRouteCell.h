/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@interface TPAudioRouteCell : UITableViewCell
{
    BOOL _checked;
}

+ (id)highlightedBackground;
+ (id)normalBackground;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)enabledIcon;
- (id)highlightedIcon;
- (id)_shadowHighlightedColor;
- (id)_shadowColor;

@end

