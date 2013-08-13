/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CALayer.h"

__attribute__((visibility("hidden")))
@interface TileLayer : CALayer
{
    struct TileGrid *_tileGrid;
    unsigned int _paintCount;
}

@property(nonatomic) unsigned int paintCount; // @synthesize paintCount=_paintCount;
- (void)setTileGrid:(struct TileGrid *)arg1;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

@end

