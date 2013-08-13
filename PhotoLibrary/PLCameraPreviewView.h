/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, NSMutableDictionary, PLCameraFocusLockView, PLCameraFocusPointView, PLCameraFocusView;

@interface PLCameraPreviewView : UIView
{
    UIView *_maskingContainerView;
    UIView *_previewContainer;
    CALayer *_previewLayer;
    UIView *_focusContainerView;
    PLCameraFocusPointView *_focusView;
    PLCameraFocusView *_autoFocusView;
    PLCameraFocusLockView *_lockFocusView;
    struct CGPoint _touchLocation;
    UIView *_facesContainerView;
    NSMutableDictionary *_faceIDsToViews;
    UIView *_disabledView;
    UIView *_snapshotView;
    UIView *_dimmingView;
    float _dimmingStrength;
    unsigned int _canShowFocus:1;
    unsigned int _controlsAreVisible:1;
}

@property(nonatomic) float dimmingStrength; // @synthesize dimmingStrength=_dimmingStrength;
@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void)fadeOutFaceTrackingViews;
- (void)showFaceTrackingViewsForFaces:(id)arg1;
- (void)setDimmingStrength:(float)arg1 duration:(double)arg2;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)focusDidEnd;
- (void)removeAutofocusView;
- (void)showAutofocusView;
- (void)removeAllFocusViews;
- (void)setCameraIsChangingModes:(BOOL)arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)zoomToFactor:(float)arg1;
- (void)animateFocusScaleDown;
- (void)animateFocusLock;
- (void)showLockFocusAtPoint:(struct CGPoint)arg1;
- (void)showFocusAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
