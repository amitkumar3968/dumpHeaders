/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPPodcastCollection : SAMPCollection
{
}

+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)podcastCollection;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSString *artist;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

