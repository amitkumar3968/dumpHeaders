/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSDate, NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRequestOrigin;
@property(copy, nonatomic) NSDate *timestamp;
@property(copy, nonatomic) NSString *status;
@property(nonatomic) double speed;
@property(nonatomic) double direction;
@property(copy, nonatomic) NSString *desiredAccuracy;
@property(nonatomic) double altitude;
@property(retain, nonatomic) NSNumber *age;
@property(nonatomic) double horizontalAccuracy;
@property(nonatomic) double verticalAccuracy;
@property(nonatomic) double longitude;
@property(nonatomic) double latitude;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

