/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate
{
    id _value;
    NSString *_transformFunction;
    int _comparison;
    BOOL _caseInsensitive;
    BOOL _treatNullAsBlank;
}

+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(int)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsBlank:(BOOL)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
@property(copy, nonatomic) NSString *transformFunction; // @synthesize transformFunction=_transformFunction;
@property(nonatomic) BOOL treatNullAsBlank; // @synthesize treatNullAsBlank=_treatNullAsBlank;
@property(nonatomic) BOOL caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(nonatomic) int comparison; // @synthesize comparison=_comparison;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)bindToStatement:(id)arg1 bindingIndex:(inout int *)arg2;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
@property(readonly, nonatomic) NSString *operator;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsBlank:(BOOL)arg6;

@end

