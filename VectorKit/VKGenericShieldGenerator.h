/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class VKGenericShieldDrawStyle;

__attribute__((visibility("hidden")))
@interface VKGenericShieldGenerator : NSObject
{
    VKGenericShieldDrawStyle *_defaultStyle;
}

+ (id)sharedGenerator;
- (id)newArtworkWithScale:(float)arg1 style:(id)arg2 mode:(int)arg3 extraScale:(float)arg4;
- (void)dealloc;

@end

