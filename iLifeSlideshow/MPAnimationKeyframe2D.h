/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe2D : MPAnimationKeyframe
{
    struct CGPoint _point;
}

+ (id)keyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(int)arg3;
+ (id)keyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initKeyframe2DWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetType:(int)arg3;
- (id)keyframe;

@end
