/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationSearch : SABaseClientBoundCommand
{
}

+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *locationId;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

