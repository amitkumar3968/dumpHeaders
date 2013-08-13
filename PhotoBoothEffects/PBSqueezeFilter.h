/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBSqueezeFilter : PBFilter
{
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputScale;
    float _inputAmount;
    _Bool firstTime;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint; // @synthesize inputPoint;
- (BOOL)needsWrapMirror;
- (id)ciFilterName;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect)arg2;
@property float inputAmount; // @dynamic inputAmount;
- (void)setDefaults;

@end

