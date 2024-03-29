/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

__attribute__((visibility("hidden")))
@interface VKPTrafficStyle : PBCodable
{
    unsigned int _fillColor;
    int _pattern;
    float _spacing;
    float _widthFraction;
    struct {
        unsigned int fillColor:1;
        unsigned int pattern:1;
        unsigned int spacing:1;
        unsigned int widthFraction:1;
    } _has;
}

@property(nonatomic) unsigned int fillColor; // @synthesize fillColor=_fillColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSpacing;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) BOOL hasPattern;
@property(nonatomic) int pattern; // @synthesize pattern=_pattern;
@property(nonatomic) BOOL hasFillColor;
@property(nonatomic) BOOL hasWidthFraction;
@property(nonatomic) float widthFraction; // @synthesize widthFraction=_widthFraction;
- (void)dealloc;

@end

