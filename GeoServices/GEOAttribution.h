/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOAttribution : PBCodable
{
    NSString *_badge;
    NSString *_logo;
    NSString *_name;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUrl;
@property(readonly, nonatomic) BOOL hasName;
@property(readonly, nonatomic) BOOL hasLogo;
@property(readonly, nonatomic) BOOL hasBadge;
- (void)dealloc;

@end

