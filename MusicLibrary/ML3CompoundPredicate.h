/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate
{
    NSArray *_predicates;
}

+ (id)predicateMatchingPredicates:(id)arg1;
@property(retain, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (void).cxx_destruct;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (void)bindToStatement:(id)arg1 bindingIndex:(inout int *)arg2;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *compoundOperatorJoiner; // @dynamic compoundOperatorJoiner;

@end

