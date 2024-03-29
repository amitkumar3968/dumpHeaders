/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <TelephonyUI/TPBottomBar.h>

@class NSArray, NSTimer, TPLockKnobView, TPLockTextView, TPWell, UIImageView, UIView;

@interface TPBottomLockBar : TPBottomBar
{
    NSArray *_labels;
    int _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    TPWell *_well;
    float _knobTrackInsetLeft;
    float _fontSize;
    float _deltaFromDefaultLabelWidth;
    UIImageView *_backgroundView;
}

+ (float)defaultLabelFontSize;
+ (struct CGSize)defaultSize;
- (void)setWellAlpha:(float)arg1;
- (void)setTextAlpha:(float)arg1;
- (void)setSuppressDrawingBackground:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_canDrawContent;
- (id)labelView;
- (void)setKnobWellWidthToDefault;
- (void)setKnobWellWidth:(float)arg1;
- (id)well;
- (float)knobTrackInsetRight;
- (float)knobTrackInsetLeft;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unlock;
- (void)freezeKnobInUnlockedPosition;
- (void)relock;
- (void)slideBack:(BOOL)arg1;
- (void)knobDragged:(float)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (void)cycleToLabelAtIndex:(int)arg1;
- (void)finishedCyclingLabelOut;
- (int)currentLabelIndex;
- (void)cycleToNextLabel;
- (void)stopCyclingLabels;
- (void)startCyclingLabels;
- (void)_setLabel:(id)arg1;
- (void)_adjustLabelOrigin;
- (void)_adjustKnobOrigin;
- (float)_calcKnobYOffset;
- (void)setLabel:(id)arg1;
- (void)upInKnob;
- (void)downInKnob;
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)knob;
- (void)dealloc;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (void)setKnobImage:(id)arg1;
- (void)setKnobColor:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 knobColor:(int)arg2;
- (id)_knobImageForColor:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 knobImage:(id)arg2;
- (BOOL)_shouldStopLabelAnimationForGrab;
- (BOOL)usesBackgroundImage;
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;
- (id)wellImageName;
- (float)defaultWellWidth;
- (void)drawRect:(struct CGRect)arg1;

@end

