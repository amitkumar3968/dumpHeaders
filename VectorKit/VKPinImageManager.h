/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VKPinImageManager : NSObject
{
    NSMapTable *_imageTable;
    NSMapTable *_bounceImagesTable;
}

+ (id)sharedManager;
- (id)bounceImagesType:(int)arg1 style:(int)arg2;
- (id)imageType:(unsigned int)arg1 style:(int)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (id)init;

@end

