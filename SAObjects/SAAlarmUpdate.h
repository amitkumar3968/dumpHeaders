/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmUpdate : SABaseClientBoundCommand
{
}

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *removedFrequency;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSNumber *enabled;
@property(copy, nonatomic) NSURL *alarmId;
@property(copy, nonatomic) NSArray *addedFrequency;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

