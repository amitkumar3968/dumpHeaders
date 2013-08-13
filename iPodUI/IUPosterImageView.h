/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CALayer, UIImage;

@interface IUPosterImageView : UIView
{
    UIImage *_image;
    struct CGRect _imageSubRect;
    CALayer *_shinyLayer;
}

@property(readonly, nonatomic) struct CGRect imageSubRect; // @synthesize imageSubRect=_imageSubRect;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 imageSubRect:(struct CGRect)arg2;
@property(nonatomic) BOOL shiny;
@property(nonatomic) BOOL bordered;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

