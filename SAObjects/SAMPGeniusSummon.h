/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, SAMPMediaItem;

@interface SAMPGeniusSummon : SABaseClientBoundCommand
{
}

+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummon;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAMPMediaItem *mediaItem;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

