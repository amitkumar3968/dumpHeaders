/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOTileKeyMap : NSObject
{
    int _type;
    void *_map;
}

- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;
- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (id)objectForKey:(const struct _GEOTileKey *)arg1;
- (id)contentsDescription;
- (void)dealloc;
- (id)initWithMapType:(int)arg1;

@end

