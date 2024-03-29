/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class IUMusicCoverFlowLayer, IUProtocolForwarder, NSSet, UITouch;

@interface IUMusicCoverFlowView : UIView
{
    NSSet *_ignoreImageSet;
    IUMusicCoverFlowLayer *_coverFlowLayer;
    unsigned int _coverCount;
    int _ignoredTicks;
    UITouch *_trackingTouch;
    double _lastEventTime;
    UIView *_rightAdornmentView;
    UIView *_leftAdornmentView;
    UIView *_overlay;
    int _displayedDeviceOrientation;
    id _delegate;
    IUProtocolForwarder *_cfdelegateShim;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)coverFlow:(id)arg1 transitionDidEnd:(unsigned int)arg2;
- (void)coverFlow:(id)arg1 selectionDidChange:(unsigned int)arg2;
- (void)coverFlowFlipDidEnd:(id)arg1;
- (id)coverFlow:(id)arg1 requestFlipLayerAtIndex:(unsigned int)arg2;
- (void)coverFlow:(id)arg1 requestImageAtIndex:(unsigned int)arg2 quality:(unsigned int)arg3;
- (BOOL)coverFlow:(id)arg1 prefetch:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)displayTick;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_cancelTouchTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)_coverFlowPointForTouch:(id)arg1;
- (BOOL)isIdle;
- (void)flipSelectedCover;
- (int)displayedDeviceOrientation;
- (void)setDisplayedDeviceOrientation:(int)arg1 animate:(BOOL)arg2;
- (int)indexOfSelectedCover;
- (void)selectCoverAtIndex:(int)arg1;
- (void)setImage:(id)arg1 atIndex:(unsigned int)arg2 type:(unsigned int)arg3 imageSubRect:(struct CGRect)arg4;
- (void)forceCurrentTransitionToEnd;
- (void)transitionOut:(float)arg1 toFrame:(struct CGRect)arg2;
- (void)transitionIn:(float)arg1 fromFrame:(struct CGRect)arg2;
- (void)transition:(unsigned int)arg1 withCoverFrame:(struct CGRect)arg2;
- (void)setInfoView:(id)arg1;
- (id)coverFlowLayer;
- (void)setLeftAdornmentView:(id)arg1;
- (void)setRightAdornmentView:(id)arg1;
- (void)setOverlay:(id)arg1;
- (id)overlay;
- (void)_updateSubviewsForDeviceOrientation:(BOOL)arg1;
- (void)_positionAdornmentView:(id)arg1 normalPosition:(int)arg2;
- (BOOL)_displayIsFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

