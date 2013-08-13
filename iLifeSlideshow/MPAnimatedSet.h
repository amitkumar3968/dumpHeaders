/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class MCContainerParallelizer, MUMathExpressionDoubleBased, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MPAnimatedSet : NSObject <NSCoding>
{
    NSString *mAnimatedSetID;
    NSDictionary *mDescription;
    MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;
    BOOL mTimeWraps;
    NSMutableDictionary *mSlides;
    NSMutableArray *mFeaturedSlidePositions;
    NSMutableArray *mFeaturingAttributes;
    double mStartTime;
    double mIntroDuration;
    double mMainDuration;
    double mOutroDuration;
    double mTotalNumberOfIntervals;
    double mDefaultFeaturingDuration;
    double mDefaultFeaturingAnimationDuration;
    NSDictionary *mDefaultFeaturingAnimationAttributes;
    NSDictionary *mAttributes;
    BOOL mEaseInEaseOutBetweenFeaturedSlides;
    BOOL mFirstSlideIsShared;
    BOOL mLastSlideIsShared;
    NSString *mIntroAnimationID;
    NSString *mOutroAnimationID;
    float mDistance;
    float mSpeed;
    MCContainerParallelizer *mContainer;
}

@property(readonly) MCContainerParallelizer *container; // @synthesize container=mContainer;
@property float speed; // @synthesize speed=mSpeed;
@property float distance; // @synthesize distance=mDistance;
@property(copy) NSString *outroAnimationID; // @synthesize outroAnimationID=mOutroAnimationID;
@property(copy) NSString *introAnimationID; // @synthesize introAnimationID=mIntroAnimationID;
@property BOOL lastSlideIsShared; // @synthesize lastSlideIsShared=mLastSlideIsShared;
@property BOOL firstSlideIsShared; // @synthesize firstSlideIsShared=mFirstSlideIsShared;
@property BOOL easeInEaseOutBetweenFeaturedSlides; // @synthesize easeInEaseOutBetweenFeaturedSlides=mEaseInEaseOutBetweenFeaturedSlides;
@property(copy) NSDictionary *attributes; // @synthesize attributes=mAttributes;
@property double defaultFeaturingAnimationDuration; // @synthesize defaultFeaturingAnimationDuration=mDefaultFeaturingAnimationDuration;
@property double defaultFeaturingDuration; // @synthesize defaultFeaturingDuration=mDefaultFeaturingDuration;
@property double startTime; // @synthesize startTime=mStartTime;
@property(readonly) BOOL timeWraps; // @synthesize timeWraps=mTimeWraps;
@property(readonly) NSString *animatedSetID; // @synthesize animatedSetID=mAnimatedSetID;
- (void)chooseAnOutroAnimation;
- (void)chooseAnIntroAnimation;
@property(readonly) double fullDuration;
- (void)setAnimationPathsForPlug:(id)arg1 atPosition:(unsigned int)arg2;
- (void)applyIntroAnimationPathsToPlug:(id)arg1 atPosition:(unsigned int)arg2;
- (double)timeOfGoodPositionForPosition:(int)arg1;
- (void)setAnimationPaths:(id)arg1 onPlug:(id)arg2 atPosition:(unsigned int)arg3 atTimeOffset:(double)arg4 withTimeOffsetKind:(int)arg5 forDuration:(double)arg6 withFunctionTimeOffset:(double)arg7 andFunctionTimeFactor:(double)arg8 easeIn:(BOOL)arg9 easeOut:(BOOL)arg10 otherAttributes:(id)arg11;
- (void)computeAnimationPathsForTime:(double)arg1 andPosition:(unsigned int)arg2 usingAnimationPaths:(id)arg3 otherAttributes:(id)arg4 plugTimeOffset:(double)arg5 plugTimeOffsetKind:(int)arg6 plugAnimationPaths:(id)arg7;
- (void)insertIntoContainer:(id)arg1;
- (void)updateContainer;
- (double)featuringTimeForSlideAtPosition:(unsigned int)arg1;
- (id)slides;
- (void)removeAllSlides;
- (void)removeSlideAtPosition:(unsigned int)arg1;
- (void)showSlide:(id)arg1 atPosition:(unsigned int)arg2 featuringAttributes:(id)arg3;
- (void)decodeFromSlides:(id)arg1;
@property(readonly) BOOL needsEvenNumberOfSlides;
@property(readonly) unsigned int maximumNumberOfSlides;
@property(readonly) unsigned int minimumNumberOfSlides;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnimatedSetID:(id)arg1;
- (double)time2OfGoodPositionForPosition:(int)arg1;
- (double)time1OfGoodPositionForPosition:(int)arg1;

@end

