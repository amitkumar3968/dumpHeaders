/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SUWebImagePool : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __CFDictionary *_images;
    int _poolIdentifier;
}

+ (id)_poolImageForURL:(id)arg1;
+ (id)_poolImageForPoolIdentifier:(int)arg1 imageIdentifier:(int)arg2;
+ (void)removeWebImagePool:(id)arg1;
+ (id)imageForURL:(id)arg1;
+ (void)addWebImagePool:(id)arg1;
- (id)_poolImageForImageIdentifier:(int)arg1;
- (int)_poolIdentifier;
- (void)removeImageForIdentifier:(int)arg1;
- (id)imageURLForImageIdentifier:(int)arg1;
- (id)imageForImageIdentifier:(int)arg1;
- (id)addImage:(id)arg1 withMIMEType:(id)arg2 identifier:(int)arg3;
- (void)dealloc;
- (id)init;

@end

