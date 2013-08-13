/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "OCCancelDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface CMArchiveManager : NSObject <OCCancelDelegate>
{
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    unsigned int mPageCount;
    NSString *mPassphrase;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    float mCommitInterval;
    BOOL mAutoCommit;
}

+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;
+ (int)blipTypeToResourceType:(int)arg1;
@property(copy) NSString *passphrase; // @synthesize passphrase=mPassphrase;
- (BOOL)isCancelled;
- (void)setHTMLWidth:(int)arg1;
- (void)setHTMLHeight:(int)arg1;
- (BOOL)isProgressive;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (BOOL)isThumbnail;
- (void)setIsThumbnail:(BOOL)arg1;
- (id)appendResourcePathToName:(id)arg1;
- (id)resourcePathPrefix;
- (void)setResourcePathPrefix:(id)arg1;
- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (int)resourceCount;
- (BOOL)isOnPhone;
- (BOOL)setIsOnPhone:(BOOL)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)_validateData:(id)arg1 withType:(int *)arg2;
- (void)setAutoCommit:(BOOL)arg1;
- (void)setCommitInterval:(float)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithType:(int)arg1;
- (id)copyResourceWithName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

