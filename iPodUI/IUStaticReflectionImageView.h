/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUGridImageView.h>

@class CALayer, IUBlurredStaticReflectionTitleView, IUCircleProgressView, IUStaticReflectionTitleView, UIImageView, UILabel;

@interface IUStaticReflectionImageView : IUGridImageView
{
    CALayer *_dimmerLayer;
    BOOL _downloadable;
    UIImageView *_downloadableImageView;
    BOOL _embossedProgressIndicatorVisible;
    UILabel *_embossedTitleLabel;
    BOOL _hidingTitles;
    struct CGRect _imageSubRect;
    UIImageView *_imageView;
    BOOL _opaque;
    float _progress;
    IUCircleProgressView *_progressView;
    UIImageView *_reflectionView;
    float _reflectionDistance;
    UIImageView *_shineImageView;
    IUBlurredStaticReflectionTitleView *_titleShadowView;
    IUBlurredStaticReflectionTitleView *_titleReflectionView;
    int _titleStyle;
    IUStaticReflectionTitleView *_titleView;
}

@property(nonatomic, getter=isEmbossedProgressIndicatorVisible) BOOL embossedProgressIndicatorVisible; // @synthesize embossedProgressIndicatorVisible=_embossedProgressIndicatorVisible;
@property(nonatomic) int titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) float reflectionDistance; // @synthesize reflectionDistance=_reflectionDistance;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
- (void)_removeTitleViews;
- (void)_createTitleViews:(id)arg1;
@property(nonatomic) BOOL reflectionHidden;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
- (void)setDownloadable:(BOOL)arg1;
- (BOOL)isDownloadable;
- (void)setTitleHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1 imageSubRect:(struct CGRect)arg2;
- (struct CGRect)imageSubRect;
- (id)image;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

