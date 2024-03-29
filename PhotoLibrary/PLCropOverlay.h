/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class PLCropOverlayBottomBar, PLCropOverlayCropView, PLToolbar, TPBottomDoubleButtonBar, TPButton, TPCameraButton, UIButton, UIImageView, UILabel, UIProgressHUD;

@interface PLCropOverlay : UIView
{
    id _delegate;
    PLCropOverlayCropView *_cropView;
    PLCropOverlayBottomBar *_bottomBar;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect _cropRect;
    PLToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    TPBottomDoubleButtonBar *_oldBottomBar;
    TPButton *_cancelPushButton;
    TPCameraButton *_okPushButton;
    UIProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    unsigned int _previewMode:1;
    unsigned int _cropRectIsVisible:1;
    unsigned int _offsetStatusBar:1;
    unsigned int _tookPhoto:1;
    unsigned int _showsCropRegion:1;
    unsigned int _controlsAreVisible:1;
    unsigned int _isDisplayedInPopover:1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
}

- (void)_updateTitle;
@property(nonatomic) BOOL previewMode;
- (void)setTitleHidden:(BOOL)arg1 animationDuration:(float)arg2;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setProgressDone;
- (void)removeProgress;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setCancelButtonHidden:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOKButtonColor:(int)arg1;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (struct CGRect)cropRect;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)_pauseButtonPressed:(id)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarToggleButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarDoneButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarCancelButtonClicked:(id)arg1;
- (void)okButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (void)dismiss;
- (void)setDelegate:(id)arg1;
- (void)statusBarHeightDidChange:(id)arg1;
- (void)dealloc;
- (int)mode;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)didCaptureVideo;
- (void)didCapturePhoto;
- (void)_setMode:(int)arg1;
- (void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2;
- (id)modeSwitch;
- (void)setModeSwitch:(id)arg1;
- (id)telephonyUIBottomBar;
- (id)telephonyUIShutterButton;
- (id)toggleButton;
- (id)shutterButton;
- (struct CGRect)bottomBarFrame;
- (id)bottomBar;
- (void)insertIrisView:(id)arg1;
- (void)_createCropView;
- (id)_irisView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;
- (void)setOverlayContainerView:(id)arg1;
- (id)overlayContainerView;
- (void)setControlsAreVisible:(BOOL)arg1;
- (BOOL)controlsAreVisible;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3 isDisplayedInPopover:(BOOL)arg4 buttonBarStyle:(int)arg5;
- (id)_newOverlayViewWithFrame:(struct CGRect)arg1 lighterEdgeOnTop:(BOOL)arg2;
- (void)layoutSubviews;
- (void)_updateCropRectInRect:(struct CGRect)arg1;
- (void)_updateToolbarItems:(BOOL)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;

@end

