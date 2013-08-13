/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUTableView.h"

@class UIEvent, UIView;

@interface ASApplicationPageTableView : SUTableView
{
    UIEvent *_resetEventAfterAnimation;
    BOOL _snapLocked;
    float _snapToBottomY;
    UIView *_screenshotsView;
}

@property(nonatomic) float snapToBottomY; // @synthesize snapToBottomY=_snapToBottomY;
@property(retain, nonatomic) UIView *screenshotsView; // @synthesize screenshotsView=_screenshotsView;
- (void)_snapIntoPlaceIfNeededForEvent:(id)arg1;
- (void)_safeResetScrollingWithUIEvent:(id)arg1;
- (void)_reenableScrolling;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)screenshotsViewBeganScroll:(id)arg1;
- (void)resetAfterAnimation;
- (void)dealloc;

@end

