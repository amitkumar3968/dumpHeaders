/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMutableSet.h"

@interface MFEmailSet : NSMutableSet
{
    struct __CFSet *_set;
}

+ (id)set;
- (void)setSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_c73467ff *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)objectEnumerator;
- (id)allObjects;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (id)member:(id)arg1;
- (unsigned int)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end

