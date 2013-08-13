/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOTileDBWriteEntry : NSObject
{
    struct _GEOTileKey _key;
    NSData *_data;
    unsigned int _tileEdition;
    unsigned int _tileSet;
}

@property(readonly, nonatomic) unsigned int tileSet; // @synthesize tileSet=_tileSet;
@property(readonly, nonatomic) unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) struct _GEOTileKey key; // @synthesize key=_key;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithKey:(struct _GEOTileKey)arg1 data:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4;

@end

