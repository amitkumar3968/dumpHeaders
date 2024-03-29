/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEONameInfo, NSMutableArray, NSString;

@interface GEOStep : PBCodable
{
    CDStruct_bf9e66ee *_laneGuidances;
    unsigned int _laneGuidancesCount;
    unsigned int _laneGuidancesSpace;
    CDStruct_e02beb0c *_junctionElements;
    unsigned int _junctionElementsCount;
    unsigned int _junctionElementsSpace;
    unsigned int _distance;
    GEONameInfo *_exitNumber;
    unsigned int _expectedTime;
    int _hintFirstAnnouncementZilchIndex;
    NSString *_instructions;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    NSMutableArray *_maneuverNames;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    NSString *_notice;
    int _overrideDrivingSide;
    int _overrideTransportType;
    NSMutableArray *_signposts;
    unsigned int _stepID;
    struct {
        unsigned int distance:1;
        unsigned int expectedTime:1;
        unsigned int hintFirstAnnouncementZilchIndex:1;
        unsigned int junctionType:1;
        unsigned int maneuverEndBasicIndex:1;
        unsigned int maneuverEndZilchIndex:1;
        unsigned int maneuverStartZilchIndex:1;
        unsigned int maneuverType:1;
        unsigned int overrideDrivingSide:1;
        unsigned int overrideTransportType:1;
        unsigned int stepID:1;
    } _has;
}

@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) GEONameInfo *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(nonatomic) int overrideDrivingSide; // @synthesize overrideDrivingSide=_overrideDrivingSide;
@property(nonatomic) int overrideTransportType; // @synthesize overrideTransportType=_overrideTransportType;
@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasNotice;
@property(readonly, nonatomic) BOOL hasInstructions;
@property(readonly, nonatomic) BOOL hasExitNumber;
@property(nonatomic) BOOL hasOverrideDrivingSide;
@property(nonatomic) BOOL hasOverrideTransportType;
@property(nonatomic) BOOL hasHintFirstAnnouncementZilchIndex;
@property(nonatomic) int hintFirstAnnouncementZilchIndex; // @synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex;
- (id)signpostAtIndex:(unsigned int)arg1;
- (unsigned int)signpostsCount;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (void)setJunctionElements:(CDStruct_e02beb0c *)arg1 count:(unsigned int)arg2;
- (CDStruct_e02beb0c)junctionElementAtIndex:(unsigned int)arg1;
- (void)addJunctionElement:(CDStruct_e02beb0c)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) CDStruct_e02beb0c *junctionElements;
@property(readonly, nonatomic) unsigned int junctionElementsCount;
@property(nonatomic) BOOL hasJunctionType;
@property(nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
- (void)setLaneGuidances:(CDStruct_bf9e66ee *)arg1 count:(unsigned int)arg2;
- (CDStruct_bf9e66ee)laneGuidanceAtIndex:(unsigned int)arg1;
- (void)addLaneGuidance:(CDStruct_bf9e66ee)arg1;
- (void)clearLaneGuidances;
@property(readonly, nonatomic) CDStruct_bf9e66ee *laneGuidances;
@property(readonly, nonatomic) unsigned int laneGuidancesCount;
- (id)maneuverNameAtIndex:(unsigned int)arg1;
- (unsigned int)maneuverNamesCount;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) BOOL hasExpectedTime;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) BOOL hasManeuverEndZilchIndex;
@property(nonatomic) int maneuverEndZilchIndex; // @synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex;
@property(nonatomic) BOOL hasManeuverStartZilchIndex;
@property(nonatomic) int maneuverStartZilchIndex; // @synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex;
@property(nonatomic) BOOL hasManeuverEndBasicIndex;
@property(nonatomic) int maneuverEndBasicIndex; // @synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex;
@property(nonatomic) BOOL hasStepID;
- (void)dealloc;
@property(readonly, nonatomic) int hintFirstAnnouncementIndex;
@property(readonly, nonatomic) BOOL hasHintFirstAnnouncementIndex;
@property(readonly, nonatomic) unsigned int maneuverStartIndex;
@property(readonly, nonatomic) unsigned int maneuverEndIndex;

@end

