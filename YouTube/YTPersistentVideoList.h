/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface YTPersistentVideoList : NSObject
{
    NSString *_categoryName;
    NSMutableArray *_videos;
}

+ (id)persistPathWithCategoryName:(id)arg1;
- (void)addVideo:(id)arg1;
- (id)videos;
- (void)removeFromDisk;
- (void)persist;
- (void)dealloc;
- (id)initWithCategoryName:(id)arg1;

@end

