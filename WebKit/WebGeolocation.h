/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WebGeolocationPrivate;

__attribute__((visibility("hidden")))
@interface WebGeolocation : NSObject
{
    WebGeolocationPrivate *_private;
}

- (void)dealloc;
- (void)setIsAllowed:(BOOL)arg1;
- (id)_initWithWebCoreGeolocation:(struct Geolocation *)arg1;

@end

