/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SALocalSearchGetNavigationStatus : SABaseClientBoundCommand
{
}

+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatus;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *getRoute;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
