/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesNode : NSObject
{
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    NSMutableSet *_resourceIdentifiers;
    NSMutableArray *_attributions;
}

@property(readonly, nonatomic) NSArray *attributions; // @synthesize attributions=_attributions;
@property(readonly, nonatomic) NSSet *resourceIdentifiers; // @synthesize resourceIdentifiers=_resourceIdentifiers;
- (void)addAttribution:(id)arg1;
- (void)addResourceName:(id)arg1 type:(int)arg2;
- (BOOL)containsTileKey:(struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)initWithX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;

@end

