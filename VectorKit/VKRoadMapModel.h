/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

@class VKRoadPainter;

__attribute__((visibility("hidden")))
@interface VKRoadMapModel : VKVectorMapModel
{
    VKRoadPainter *_roadPainter;
    BOOL _drawRoads;
}

@property(nonatomic) BOOL drawRoads; // @synthesize drawRoads=_drawRoads;
- (void)dealloc;
- (id)init;
- (void)drawDebugScene:(id)arg1 WithContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;

@end

