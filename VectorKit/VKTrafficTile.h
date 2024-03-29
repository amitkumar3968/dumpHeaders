/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKVectorTile.h>

@class NSArray, NSData, NSMutableArray, VKTileKeyMap;

__attribute__((visibility("hidden")))
@interface VKTrafficTile : VKVectorTile
{
    struct _GEOTileKey _dataKey;
    NSData *_data;
    VKTileKeyMap *_dynamicTiles;
    NSMutableArray *_incidents;
    struct TrafficSkeletonTile _trafficData;
}

@property(readonly, nonatomic) VKTileKeyMap *dynamicTiles; // @synthesize dynamicTiles=_dynamicTiles;
@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)writeDataToDirectory:(id)arg1 error:(id *)arg2;
- (void)buildTrafficMeshWithRoadData:(id)arg1;
- (void)buildIncidentsForDynamic:(id)arg1;
- (void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 ribbonMaker:(struct VKRibbonMakerData_t *)arg3 trafficAccum:(struct TrafficAccum *)arg4 styleSession:(id)arg5;
- (BOOL)_buildStartOffset:(float *)arg1 endOffset:(float *)arg2 forLine:(CDStruct_a206f7ef *)arg3 forSkeleton:(const struct Record *)arg4 forRange:(struct _NSRange)arg5 forFlow:(const struct Flow *)arg6 forPoints:(CDStruct_6e3f967a *)arg7;
- (void)buildSkeletonMeshForDebug:(id)arg1;
- (void)buildSkeletonMap;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3;
@property(nonatomic) const struct _GEOTileKey *dataKey;

@end

