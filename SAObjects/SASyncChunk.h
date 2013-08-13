/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSArray, NSString;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunk;
@property(copy, nonatomic) NSString *validity;
@property(copy, nonatomic) NSArray *toRemove;
@property(copy, nonatomic) NSArray *toAdd;
@property(copy, nonatomic) NSString *preGen;
@property(copy, nonatomic) NSString *postGen;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

