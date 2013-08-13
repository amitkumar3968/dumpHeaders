/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GEOUIActionCapture : PBCodable
{
    double _duration;
    int _actionType;
    int _sequenceNumber;
    struct {
        unsigned int duration:1;
        unsigned int actionType:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasActionType;
- (void)dealloc;

@end

