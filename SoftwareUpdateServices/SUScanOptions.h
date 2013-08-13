/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions : NSObject <NSCoding>
{
    NSString *_identifier;
    BOOL _forced;
    NSMutableSet *_types;
}

@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
@property(nonatomic, getter=isForced) BOOL forced; // @synthesize forced=_forced;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)clearTypes;
- (BOOL)findsAnyUpdate;
- (BOOL)containsType:(int)arg1;
- (void)removeType:(int)arg1;
- (void)addType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

