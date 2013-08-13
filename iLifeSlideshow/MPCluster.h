/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MPCluster : NSObject
{
    NSMutableArray *mSlides;
    NSMutableSet *mPathsInCluster;
    NSString *mName;
    float mRating;
    NSMutableDictionary *mUsageCounterPerLayer;
}

@property(retain) NSMutableDictionary *usageCounterPerLayer; // @synthesize usageCounterPerLayer=mUsageCounterPerLayer;
@property float rating; // @synthesize rating=mRating;
@property(copy) NSString *name; // @synthesize name=mName;
@property(retain) NSMutableArray *items; // @synthesize items=mSlides;
- (id)description;
- (void)detailedDescription;
- (id)usageCountDescription;
- (void)resetAllUsageCounters;
- (float)usageCountForLayer:(id)arg1;
- (void)setUsageCountForLayer:(id)arg1 to:(float)arg2;
- (id)allSlidesSortedChronologically;
- (BOOL)clusterContainsSlideAtPath:(id)arg1;
- (id)allSlides;
- (int)slideCount;
- (void)removeAllSlides;
- (void)addSlide:(id)arg1;
- (void)dealloc;
- (id)init;

@end
