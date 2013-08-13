/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject
{
    CDStruct_1ef3fb1f *_vertices;
    NSMutableArray *_trafficSegments;
    double _expirationTime;
}

+ (double)expirationTimeInterval;
+ (id)createWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSMutableArray *trafficSegments; // @synthesize trafficSegments=_trafficSegments;
@property(nonatomic) CDStruct_1ef3fb1f *vertices; // @synthesize vertices=_vertices;
- (void)dealloc;
- (id)initWithData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;

@end

