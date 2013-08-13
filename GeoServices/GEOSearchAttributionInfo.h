/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject
{
    NSString *_identifier;
    unsigned int _version;
    NSString *_logoPath;
    NSString *_snippetLogoPath;
    NSString *_displayName;
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
}

@property(nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(retain, nonatomic) NSArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *snippetLogoPath; // @synthesize snippetLogoPath=_snippetLogoPath;
@property(retain, nonatomic) NSString *logoPath; // @synthesize logoPath=_logoPath;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPath:(id)arg3 snippetLogoPath:(id)arg4;

@end
