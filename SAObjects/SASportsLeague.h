/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable>
{
}

+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)league;
@property(copy, nonatomic) NSString *sport;
@property(retain, nonatomic) SASportsSeason *season;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSNumber *displayTeamLocationOverName;
@property(copy, nonatomic) NSString *diplayedText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

