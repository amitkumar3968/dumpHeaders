/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIImageView.h"

@class NSString, PLPhotoTilePlaceholderView, PLVideoView, UILabel, UIView;

@interface PLImageView : UIImageView
{
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UIView *_leftAccessoryView;
    UIView *_bottomRightAccessoryView;
    struct CGSize _leftAccessoryViewOffset;
    UILabel *_textBadge;
    unsigned int _shadowEnabled:1;
    unsigned int _suppressShadowDrawing:1;
    unsigned int _borderViewIsVisible:1;
    unsigned int _drawsBorder:1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    float _transitionProgress;
    BOOL _edgeAntialiasingEnabled;
    float _accessoryViewsAlpha;
    float _placeholderScale;
    BOOL _showsPlaceholder;
}

+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize)arg2;
+ (struct CGSize)badgeOffset;
+ (BOOL)shouldDrawShadows;
+ (void)initialize;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(nonatomic) struct CGSize leftAccessoryViewOffset; // @synthesize leftAccessoryViewOffset=_leftAccessoryViewOffset;
@property(readonly, nonatomic) BOOL showsPlaceholder; // @synthesize showsPlaceholder=_showsPlaceholder;
@property(nonatomic) float placeholderScale; // @synthesize placeholderScale=_placeholderScale;
@property(retain, nonatomic) UIView *bottomRightAccessoryView; // @synthesize bottomRightAccessoryView=_bottomRightAccessoryView;
@property(nonatomic) float accessoryViewsAlpha; // @synthesize accessoryViewsAlpha=_accessoryViewsAlpha;
@property(nonatomic) float transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) PLVideoView *videoView;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)setTextBadgeString:(id)arg1;
- (id)textBadgeString;
- (void)_updatePlaceholderAlpha;
- (void)_updatePlaceholderLayout;
@property(readonly, nonatomic) struct CGSize placeholderSize;
- (void)setShowsPlaceholder:(BOOL)arg1 withOpaqueState:(BOOL)arg2;
- (void)setEdgeAntialiasingEnabled:(BOOL)arg1;
@property(nonatomic, getter=isDimmed) BOOL dimmed;
@property(nonatomic) BOOL drawsBorder;
@property(nonatomic) float borderAndAccessoriesAlpha;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(BOOL)arg2;
- (void)parentDidLayout;
@property(nonatomic, getter=isBorderAndAccessoriesVisible) BOOL borderAndAccessoriesVisible;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
- (void)_setShadowEnabled:(BOOL)arg1 force:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)_updateShadowPath;
- (void)layoutSubviews;
- (struct CGRect)_bottomRightAccessoryViewFrame;
- (struct CGRect)_leftAccessoryViewFrame;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 allowRounding:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

