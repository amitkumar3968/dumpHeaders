/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class SASportsSeasonRange;

@interface SASportsSeason : AceObject <SAAceSerializable>
{
}

+ (id)seasonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)season;
@property(retain, nonatomic) SASportsSeasonRange *regularSeason;
@property(retain, nonatomic) SASportsSeasonRange *preSeason;
@property(retain, nonatomic) SASportsSeasonRange *postSeason;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

