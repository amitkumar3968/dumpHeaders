/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink;

@interface CNFVideoGroupView : UIControl <UIGestureRecognizerDelegate>
{
    CADisplayLink *_displayLink;
    struct CGPoint _velocity;
    struct CGPoint _target;
    struct CGRect _cornerLocationsRect;
    BOOL _startedThrowAnimation;
    int _corner;
}

@property(nonatomic) struct CGRect cornerLocationsRect; // @synthesize cornerLocationsRect=_cornerLocationsRect;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelThrowAnimation;
- (void)finishedThrowAnimation;
- (void)updateThrowAnimation:(id)arg1;
- (void)startThrowAnimation;
- (float)_gridViewRubberBandValueForValue:(float)arg1 target:(float)arg2 timeInterval:(float)arg3 velocity:(float *)arg4;
- (void)handlePanDetected:(id)arg1;
- (void)handlePanGestureFinished:(id)arg1;
- (void)addPanningGestureRecognizer;
- (void)refreshPositionInCorner;
- (struct CGPoint)centerPointForCurrentVideoGroupCorner;
- (void)setCorner:(int)arg1;
- (void)setTransformForNewCenter:(struct CGPoint)arg1;
- (struct CGPoint)transformedCenter;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

