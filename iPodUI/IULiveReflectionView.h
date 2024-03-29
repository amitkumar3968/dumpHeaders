/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class CAGradientLayer, CALayer, IUReplicatorView;

@interface IULiveReflectionView : UIView
{
    UIView *_containerView;
    CAGradientLayer *_gradientLayer;
    IUReplicatorView *_replicatorView;
    float _reflectionDistance;
}

+ (id)_gradientLocationsForReflectionDistance:(float)arg1;
+ (float)_containerHeightForReflectionDistance:(float)arg1 boundsHeight:(float)arg2;
+ (id)gradientAnimationToReflectionDistance:(float)arg1;
@property(retain, nonatomic) IUReplicatorView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)dealloc;
@property(nonatomic) float reflectionDistance;
@property(nonatomic, getter=isReflectionEnabled) BOOL reflectionEnabled;
@property(readonly, nonatomic) CALayer *containerLayer;
@property(nonatomic) struct CGColor *endColor;
@property(nonatomic) struct CGColor *startColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)containerAnimationToReflectionDistance:(float)arg1;

@end

