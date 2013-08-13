/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKCacheNode : NSObject
{
    struct VKCacheKey _key;
    id _value;
    VKCacheNode *_next;
    VKCacheNode *_previous;
}

@property(nonatomic) VKCacheNode *previous; // @synthesize previous=_previous;
@property(retain, nonatomic) VKCacheNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) struct VKCacheKey key; // @synthesize key=_key;
- (id).cxx_construct;
- (void)dealloc;

@end

