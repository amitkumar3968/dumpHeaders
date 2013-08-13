/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SAServerBoundCommand.h"

@class NSString, NSURL, SAFmfGeoFence;

@interface SAFmfGeoFenceSetCompleted : SABaseClientBoundCommand <SAServerBoundCommand>
{
}

+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSetCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *searchContext;
@property(retain, nonatomic) SAFmfGeoFence *geoFence;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

