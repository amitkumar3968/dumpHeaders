/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRLoadable.h"
#import "MRRenderable.h"

@class MRImage, MRLayerEffect, NSDictionary, NSOperation, NSString;

@interface MREffect : NSObject <MRLoadable, MRRenderable>
{
    NSDictionary *mDescription;
    MRLayerEffect *mEffectLayer;
    MRImage *mOutputImage;
    NSString *mEffectID;
    NSDictionary *mAttributes;
    NSDictionary *mFlattenedAttributes;
    unsigned int mSeed;
    struct _NSRange mMultiImageSlideRange;
    BOOL mNeedsToUpdateSlides;
    BOOL mNeedsToUpdateTexts;
    BOOL mNeedsToUpdateAttributes;
    BOOL mIsNative3D;
    BOOL mIsOpaque;
    BOOL mIsAlphaFriendly;
    NSOperation *mPreloadOperation;
    struct CGSize mPixelSize;
    MRImage *mAccumulatedImage;
    BOOL mNeedsToUpdateAccumulatedImage;
    double mDefaultPhaseInDuration;
    double mDefaultMainDuration;
    double mDefaultPhaseOutDuration;
    double mPhaseInDuration;
    double mMainDuration;
    double mPhaseOutDuration;
}

+ (id)defaultEffectAttributesWithEffectID:(id)arg1 andSlideInformation:(id)arg2;
+ (id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5;
+ (BOOL)hasCustomTiming;
+ (id)retainedEffectWithEffectID:(id)arg1 forEffectLayer:(id)arg2;
+ (unsigned int)typicalSlideBatchSizeForEffectID:(id)arg1;
+ (BOOL)supportsDynamicExpansionForEffectID:(id)arg1;
@property(readonly, nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration=mPhaseOutDuration;
@property(readonly, nonatomic) double mainDuration; // @synthesize mainDuration=mMainDuration;
@property(readonly, nonatomic) double phaseInDuration; // @synthesize phaseInDuration=mPhaseInDuration;
@property(nonatomic) struct _NSRange multiImageSlideRange; // @synthesize multiImageSlideRange=mMultiImageSlideRange;
@property(retain, nonatomic) MRImage *accumulatedImage; // @synthesize accumulatedImage=mAccumulatedImage;
@property(nonatomic) BOOL needsToUpdateTexts; // @synthesize needsToUpdateTexts=mNeedsToUpdateTexts;
@property(nonatomic) BOOL needsToUpdateSlides; // @synthesize needsToUpdateSlides=mNeedsToUpdateSlides;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=mPixelSize;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property(readonly) NSString *effectID; // @synthesize effectID=mEffectID;
- (int)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
@property(readonly, nonatomic) BOOL isInfinite;
@property(readonly, nonatomic) BOOL isAlphaFriendly;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) BOOL isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadWithArguments:(id)arg1;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2;
- (void)setLiveAttributes:(id)arg1;
- (void)_cleanup;
- (double)_computeTimeForPhaseTime:(double)arg1;
- (double)_computePhaseTimeForTime:(double)arg1;
- (void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
- (BOOL)isRetainedByEffectLayer;
- (void)releaseByEffectLayer:(id)arg1;
- (void)retainByEffectLayer:(id)arg1;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)initWithEffectID:(id)arg1;
- (BOOL)needsMoreSlidesAtTime:(double)arg1;
- (unsigned int)firstSlideIndexStillNeededAtTime:(double)arg1;
@property(readonly, nonatomic) unsigned int typicalSlideBatchSize;
@property(readonly, nonatomic) BOOL supportsDynamicExpansion;
- (void)_unload;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

