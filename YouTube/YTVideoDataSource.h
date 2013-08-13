/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject
{
    BOOL _hasLoaded;
    NSMutableArray *_videos;
    YTSearchRequest *_searchRequest;
    unsigned int _startIndex;
    unsigned int _videosRemaining;
    NSError *_lastError;
}

+ (BOOL)shouldRemoveOldDefaults;
+ (void)setShouldRemoveOldDefaults;
+ (id)sharedDataSource;
+ (void)saveDataSources;
- (void)_clearVideos;
- (void)addVideos:(id)arg1 toTop:(BOOL)arg2;
- (void)_setVideos:(id)arg1;
- (void)_setLastError:(id)arg1;
- (void)_didChange;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_saveToDefaults;
- (id)_deprecatedVideosDefaultsKey;
- (void)removeAllVideos;
- (void)removeVideoAtIndex:(int)arg1;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (unsigned int)maxVideosToSave;
- (void)loadMore;
- (unsigned int)videosRemaining;
- (id)lastError;
- (void)loadFromDefaults;
- (BOOL)hasLoaded;
- (BOOL)isLoading;
- (void)reloadData;
- (id)videos;
- (void)dealloc;
- (id)init;

@end

