/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VKImage;

__attribute__((visibility("hidden")))
@interface VKTrafficImageManager : NSObject
{
    VKImage *_accidentImage;
    VKImage *_constructionImage;
    VKImage *_closedImage;
    VKImage *_warningImage;
}

+ (id)sharedManager;
- (id)warningImage;
- (id)closedImage;
- (id)constructionImage;
- (id)accidentImage;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)init;

@end

