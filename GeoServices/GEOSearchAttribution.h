/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable
{
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain, nonatomic) NSMutableArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
@property(nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)attributionURLsAtIndex:(unsigned int)arg1;
- (unsigned int)attributionURLsCount;
- (void)addAttributionURLs:(id)arg1;
- (void)clearAttributionURLs;
- (void)dealloc;

@end

