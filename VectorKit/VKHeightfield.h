/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VKHeightfield : NSObject
{
    float *_zBins;
    unsigned int _rowCount;
    unsigned int _columnCount;
}

- (void)dealloc;
- (id)initWithFootprintTile:(id)arg1 heightfieldRows:(unsigned int)arg2 heightfieldColumns:(unsigned int)arg3;
- (id)initWithRows:(unsigned int)arg1 columns:(unsigned int)arg2;

@end

