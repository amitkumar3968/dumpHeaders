/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CAKeyframeAnimation, NSArray;

@interface PLCameraFocusView : UIView
{
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    BOOL _fadingOut;
}

- (void)focusDidEnd;
- (void)_fadeOutDidFinish;
- (void)_fadeOut;
- (void)stopAnimating;
- (void)startAnimating;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (void)_loadImagesWithImageSize:(struct CGSize *)arg1;
- (void)dealloc;
- (id)init;

@end

