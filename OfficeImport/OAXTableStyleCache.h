/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject
{
    NSString *mDefaultStyleId;
    NSMutableDictionary *mCache;
}

- (struct _xmlNode *)defaultStyleNode;
- (struct _xmlNode *)styleNodeForId:(id)arg1;
- (void)setStyleNode:(struct _xmlNode *)arg1 forId:(id)arg2;
- (void)setDefaultStyleId:(id)arg1;
- (id)defaultStyleId;
- (void)dealloc;
- (id)init;

@end

