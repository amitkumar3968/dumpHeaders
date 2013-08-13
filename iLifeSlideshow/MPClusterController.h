/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MPCluster, MPDocument, NSDate, NSMutableDictionary;

@interface MPClusterController : NSObject
{
    NSMutableDictionary *mSlides;
    NSMutableDictionary *mSlideClusters;
    MPCluster *mAllSlidesCluster;
    float mMinimumRequiredClusterRating;
    MPDocument *mAuthoredDocument;
    NSDate *mOldestSlideTimestamp;
    NSDate *mNewestSlideTimestamp;
}

+ (void)releaseSharedController;
+ (id)sharedController;
- (void)dumpSlidesStatistics;
- (void)dumpClustersStatistics;
- (void)updateRatingsForLocationClusters;
- (void)updateRatingsForKeywordClusters;
- (void)updateRatingsForMinuteOfYearClusters;
- (void)updateRatingsForHourOfYearClusters;
- (void)updateRatingsForDayOfYearClusters;
- (void)updateRatingsForMonthOfYearClusters;
- (void)updateRatingsForMonthClusters;
- (void)updateRatingsForYearClusters;
- (void)updateClusterRatings;
- (id)prioritizedSlideClustersDictionary;
- (id)orderedAndPrioritizedSlideClusters;
- (void)createLocationClustersForPaths:(id)arg1;
- (void)addPaths:(id)arg1 toUserDefinedCluster:(id)arg2;
- (id)minuteOfYearClusterForAssetAtPath:(id)arg1;
- (id)hourOfYearClusterForAssetAtPath:(id)arg1;
- (id)dayOfYearClusterForAssetAtPath:(id)arg1;
- (id)monthOfYearClusterForAssetAtPath:(id)arg1;
- (id)monthClusterForAssetAtPath:(id)arg1;
- (id)yearClusterForAssetAtPath:(id)arg1;
- (id)userProvidedClusters;
- (id)locationClusters;
- (id)keywordClusters;
- (id)minuteOfYearClusters;
- (id)hourOfYearClusters;
- (id)dayOfYearClusters;
- (id)monthOfYearClusters;
- (id)monthClusters;
- (id)yearClusters;
- (void)updateAllSlidesClusterWithSlide:(id)arg1;
- (void)removeAllSingleSlideClusters;
- (id)findBestClusterBasedOnUserDefinedSlideOrder:(id)arg1 startingWithSlide:(id)arg2;
- (id)findBestChronologicalCluster:(id)arg1 startingWithSlide:(id)arg2;
- (id)findBestCluster:(id)arg1;
- (void)flushClusters;
- (void)resetAllUsageCounters;
- (id)clustersBasedOnOrderedPaths:(id)arg1;
- (void)sortClusterSlidesChronologically:(id *)arg1;
- (id)clusterSlidesSortedByUserDefinedSortOrder:(id)arg1 userDefinedSlideOrder:(id)arg2;
- (id)clusterSlidesSortedChronologically:(id)arg1;
- (id)allSlidesSortedChronologically;
- (id)nextLeastUsedSlides:(int)arg1 forLayer:(id)arg2 markAsUsed:(BOOL)arg3;
- (id)allSlidesSortedByUsage;
- (id)slideForPath:(id)arg1;
- (id)allSlides;
- (void)addKeywords:(id)arg1 forSlide:(id)arg2;
- (int)addSlideForPath:(id)arg1 withIndex:(int)arg2;
- (void)setAuthoredDocument:(id)arg1;
- (void)flush;
- (void)dealloc;
- (id)init;
- (void)_removeAllSingleSlideClustersForClusterCategory:(id)arg1;

@end

