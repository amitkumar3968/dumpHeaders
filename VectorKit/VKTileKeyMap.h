/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKTileKeyMap : NSObject
{
    int _type;
    void *_map;
}

- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (int)count;
- (void)removeObjectForKey:(const struct VKTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (id)objectForKey:(const struct VKTileKey *)arg1;
- (id)contentsDescription;
- (id)description;
- (void)dealloc;
- (id)initWithMapType:(int)arg1;

@end
