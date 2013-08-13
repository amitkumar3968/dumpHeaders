/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableData;

@interface GEOVectorTile : NSObject
{
    struct _GEOTileKey _key;
    CDStruct_a206f7ef *_lines;
    unsigned int _linesCount;
    unsigned int _linesVertexCount;
    CDStruct_183601bc **_namedRoads;
    unsigned int _namedRoadsCount;
    unsigned int _namedRoadsVertexCount;
    CDStruct_183601bc **_namedPoints;
    unsigned int _namedPointsCount;
    CDStruct_183601bc **_namedPolygons;
    unsigned int _namedPolygonsCount;
    CDStruct_a206f7ef *_coastlines;
    unsigned int _coastlinesCount;
    CDStruct_93ef8124 *_polygons;
    unsigned int _polygonsCount;
    unsigned int _polygonsVertexCount;
    CDStruct_b2fbf00d *_polygonLabelPositions;
    unsigned int _polygonLabelPositionsCount;
    CDStruct_4b86db91 *_buildingFootprints;
    NSMutableData *_extrusionHeightsPool;
    unsigned int _buildingFootprintsCount;
    CDStruct_0f5ec4c6 *_threeDBuildings;
    unsigned int _threeDBuildingsCount;
    CDStruct_79c5bb7e *_pois;
    unsigned int _poisCount;
    CDStruct_f6a177db *_overpasses;
    CDStruct_7523a67d *_junctions;
    unsigned int _junctionsCount;
    BOOL _hasComputedJunctions;
    CDStruct_7523a67d *_laneConnections;
    unsigned int _laneConnectionsCount;
    CDStruct_7523a67d *_pointsOnRoad;
    unsigned int _pointsOnRoadCount;
    CDStruct_183601bc **_sortedPointsOnRoad;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
    } *_laneGeometry;
    CDStruct_1105677d *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    CDStruct_1105677d *_lineVertices;
    CDStruct_1105677d *_polygonVertices;
    CDStruct_1105677d *_coastlineVertices;
    CDStruct_1105677d *_footprintVertices;
    NSData *_labelPool;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        char *_field3;
    } *_labelPoolLanguages;
    unsigned int _labelPoolLanguagesLength;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    CDStruct_29923528 *_labelIndex;
    unsigned int _labelIndexCount;
    struct GEOFeatureShield *_shieldIndex;
    unsigned int _shieldIndexCount;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned char _field3;
    } *_localizationTable;
    unsigned int _localizationTableCount;
    NSMutableArray *_uniqueAttributes;
    CDStruct_dab2d0bd *_lineCharacteristicPoints;
    unsigned int _lineCharacteristicPointCount;
    CDStruct_dab2d0bd *_polygonCharacteristicPoints;
    unsigned int _polygonCharacteristicPointCount;
    CDStruct_dab2d0bd *_coastlineCharacteristicPoints;
    unsigned int _coastlineCharacteristicPointCount;
}

@property(readonly, nonatomic) struct _GEOTileKey tileKey; // @synthesize tileKey=_key;
@property(readonly, nonatomic) unsigned int coastlineCharacteristicPointCount; // @synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *coastlineCharacteristicPoints; // @synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints;
@property(readonly, nonatomic) unsigned int polygonCharacteristicPointCount; // @synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *polygonCharacteristicPoints; // @synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints;
@property(readonly, nonatomic) unsigned int lineCharacteristicPointCount; // @synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount;
@property(readonly, nonatomic) CDStruct_dab2d0bd *lineCharacteristicPoints; // @synthesize lineCharacteristicPoints=_lineCharacteristicPoints;
@property(readonly, nonatomic) unsigned int laneConnectionsCount; // @synthesize laneConnectionsCount=_laneConnectionsCount;
@property(readonly, nonatomic) CDStruct_7523a67d *laneConnections; // @synthesize laneConnections=_laneConnections;
@property(readonly, nonatomic) unsigned int pointsOnRoadCount; // @synthesize pointsOnRoadCount=_pointsOnRoadCount;
@property(readonly, nonatomic) BOOL hasComputedJunctions; // @synthesize hasComputedJunctions=_hasComputedJunctions;
@property(readonly, nonatomic) unsigned int junctionsCount; // @synthesize junctionsCount=_junctionsCount;
@property(readonly, nonatomic) CDStruct_7523a67d *junctions; // @synthesize junctions=_junctions;
@property(readonly, nonatomic) CDStruct_f6a177db *overpasses; // @synthesize overpasses=_overpasses;
@property(readonly, nonatomic) unsigned int poisCount; // @synthesize poisCount=_poisCount;
@property(readonly, nonatomic) CDStruct_79c5bb7e *pois; // @synthesize pois=_pois;
@property(readonly, nonatomic) unsigned int threeDBuildingsCount; // @synthesize threeDBuildingsCount=_threeDBuildingsCount;
@property(readonly, nonatomic) CDStruct_0f5ec4c6 *threeDBuildings; // @synthesize threeDBuildings=_threeDBuildings;
@property(readonly, nonatomic) unsigned int buildingFootprintsCount; // @synthesize buildingFootprintsCount=_buildingFootprintsCount;
@property(readonly, nonatomic) CDStruct_4b86db91 *buildingFootprints; // @synthesize buildingFootprints=_buildingFootprints;
@property(readonly, nonatomic) unsigned int polygonsCount; // @synthesize polygonsCount=_polygonsCount;
@property(readonly, nonatomic) CDStruct_93ef8124 *polygons; // @synthesize polygons=_polygons;
@property(readonly, nonatomic) unsigned int coastlinesCount; // @synthesize coastlinesCount=_coastlinesCount;
@property(readonly, nonatomic) CDStruct_a206f7ef *coastlines; // @synthesize coastlines=_coastlines;
@property(readonly, nonatomic) unsigned int namedPolygonsCount; // @synthesize namedPolygonsCount=_namedPolygonsCount;
@property(readonly, nonatomic) CDStruct_183601bc **namedPolygons; // @synthesize namedPolygons=_namedPolygons;
@property(readonly, nonatomic) unsigned int namedPointsCount; // @synthesize namedPointsCount=_namedPointsCount;
@property(readonly, nonatomic) CDStruct_183601bc **namedPoints; // @synthesize namedPoints=_namedPoints;
@property(readonly, nonatomic) unsigned int namedRoadsCount; // @synthesize namedRoadsCount=_namedRoadsCount;
@property(readonly, nonatomic) CDStruct_183601bc **namedRoads; // @synthesize namedRoads=_namedRoads;
@property(readonly, nonatomic) unsigned int linesCount; // @synthesize linesCount=_linesCount;
@property(readonly, nonatomic) CDStruct_a206f7ef *lines; // @synthesize lines=_lines;
@property(readonly, nonatomic) BOOL dataIncludesConnectivity;
@property(readonly, nonatomic) unsigned int polygonsVertexCount; // @synthesize polygonsVertexCount=_polygonsVertexCount;
@property(readonly, nonatomic) unsigned int namedRoadsVertexCount;
@property(readonly, nonatomic) unsigned int linesVertexCount; // @synthesize linesVertexCount=_linesVertexCount;
- (void)forEachJunctionInRoad:(CDStruct_a206f7ef *)arg1 visitor:(id)arg2;
- (void)forEachEdgeInRoad:(CDStruct_a206f7ef *)arg1 visitTwice:(BOOL)arg2 visitor:(id)arg3;
- (void)forEachJunction:(id)arg1;
- (void)forEachEdgeOnJunction:(CDStruct_7523a67d *)arg1 visitor:(id)arg2;
- (void)forEachRoad:(id)arg1;
- (CDStruct_b2fbf00d *)polygonLabelPositions;
- (id)extrusionHeightsPool;
- (CDStruct_183601bc **)sortedPointsOnRoad;
@property(readonly, nonatomic) CDStruct_7523a67d *pointsOnRoad; // @synthesize pointsOnRoad=_pointsOnRoad;
@property(readonly, nonatomic) CDStruct_1105677d *curveLineVertices;
@property(readonly, nonatomic) CDStruct_1105677d *lineVertices;
- (id)description;
- (void)dealloc;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (void)_trimWhitespace;
- (void)_sortStyleAttributes;
- (void)_findOverpasses;
- (void)_findJunctions;
- (void)_buildSortedFeatureLists;
- (void)_attachRoadPoints;
- (id)_initWithVMP3:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (BOOL)_handleGenericTile:(CDStruct_b123d8da *)arg1;
- (BOOL)_addGenericPolygonWithAttributes:(int *)arg1;
- (BOOL)_read3DBuildings:(CDStruct_b123d8da *)arg1;
- (BOOL)_readCoastlines:(CDStruct_b123d8da *)arg1;
- (BOOL)_readWrappingCoastlines:(CDStruct_ef964b09 *)arg1 tile:(CDStruct_b123d8da *)arg2;
- (BOOL)_readSimpleCoastlines:(CDStruct_ef964b09 *)arg1 tile:(CDStruct_b123d8da *)arg2;
- (BOOL)_readPois:(CDStruct_b123d8da *)arg1;
- (BOOL)_readPolygons:(CDStruct_b123d8da *)arg1;
- (BOOL)_readPolygons:(CDStruct_b123d8da *)arg1 ofType:(unsigned short)arg2;
- (BOOL)_readLines:(CDStruct_b123d8da *)arg1;
- (unsigned int)_makeSpaceForShields:(unsigned int)arg1;
- (unsigned int)_makeSpaceForLabels:(unsigned int)arg1;
- (BOOL)_readLabels:(CDStruct_b123d8da *)arg1;
- (BOOL)_readInfoChapter:(CDStruct_b123d8da *)arg1;

@end

