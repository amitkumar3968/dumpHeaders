/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLStackViewDataSource.h"

@class PLWStackedImageCache;

@interface PLWStackedImageCacheCreator : NSObject <PLStackViewDataSource>
{
    PLWStackedImageCache *_stackedImageCache;
}

- (struct NSObject *)_albumForStack:(id)arg1;
- (id)stackView:(id)arg1 collapsedIndexesForCount:(unsigned int)arg2;
- (void)stackView:(id)arg1 saveStackedImage:(id)arg2 options:(id)arg3;
- (id)stackedImageForStackView:(id)arg1 options:(id *)arg2;
- (int)stackViewPosterItemIndex:(id)arg1;
- (id)stackView:(id)arg1 textBadgeStringForImageAtIndex:(int)arg2;
- (id)stackView:(id)arg1 itemViewAtIndex:(int)arg2 loadImagesSynchronously:(BOOL)arg3;
- (int)stackViewItemCount:(id)arg1;
- (void)createStackedImageForAlbum:(id)arg1;
- (void)dealloc;
- (id)init;

@end

