/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEOTileSourceCallbacks : NSObject
{
    NSMutableSet *_callbacks;
    BOOL _allowNetwork;
}

@property(nonatomic) BOOL allowNetwork; // @synthesize allowNetwork=_allowNetwork;
@property(readonly, nonatomic) NSMutableSet *callbacks; // @synthesize callbacks=_callbacks;
- (id)description;
- (void)dealloc;
- (id)init;

@end

