/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDCommonBehaviorData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateEffectBehavior : PDCommonBehaviorData
{
    NSString *mFilter;
    int mTransition;
}

- (void)setTransition:(int)arg1;
- (int)transition;
- (void)setFilter:(id)arg1;
- (id)filter;
- (void)dealloc;
- (id)init;

@end

