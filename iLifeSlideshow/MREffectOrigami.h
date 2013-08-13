/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iLifeSlideshow/MREffect.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface MREffectOrigami : MREffect
{
    NSArray *mPatchworkAtBeginning;
    NSArray *mPatchworkAtEnd;
    NSMutableDictionary *mSprites;
    NSMutableArray *mSpriteKeysWatcher;
    NSMutableArray *mAnimationTimeBounds;
    NSMutableArray *mItemInfos;
    double mDurationStretchFactor;
    float mDescriptionAspectRatio;
    float mPixelUnit;
    BOOL mIsOrigami2Effect;
    BOOL mIsHorizontal;
    BOOL mIsOriginallyHorizontal;
}

+ (void)initialize;
- (void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2;
- (BOOL)_needsRenderingAtTime:(double)arg1 remainingStillDurationAfter:(double *)arg2;
- (double)_stretchTime:(double)arg1;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderUnfoldingFlowerAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipDiagonalAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFold4LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)render1To3LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)render1To3DownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFoldDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFoldLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFlipLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderBreakAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (BOOL)_checkPanoramaAbsoluteSizeForImage:(id)arg1 inRect:(struct CGRect *)arg2;
- (void)renderStillAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)renderFallAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(struct CGRect)arg5 withAttributes:(id)arg6;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_setTargetSizeOfImageProviders;
- (void)_unload;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;

@end

