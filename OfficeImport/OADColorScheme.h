/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject
{
    NSMutableDictionary *mColors;
}

- (BOOL)isEqual:(id)arg1;
- (void)addDefaultColors;
- (void)setColor:(id)arg1 index:(int)arg2;
- (void)addColor:(id)arg1 index:(int)arg2;
- (id)colorForIndex:(int)arg1;
- (unsigned int)colorCount;
- (void)dealloc;
- (id)init;

@end

