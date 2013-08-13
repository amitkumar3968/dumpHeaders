/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AXDialectMap, NSMutableOrderedSet, NSString;

@interface AXLanguageTag : NSObject
{
    struct _NSRange _range;
    NSString *_content;
    AXDialectMap *_unambiguousDialect;
    NSMutableOrderedSet *_ambiguousDialects;
    BOOL _wasPredicted;
}

+ (id)tagWithDialect:(id)arg1 range:(struct _NSRange)arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;
@property(nonatomic) BOOL wasPredicted; // @synthesize wasPredicted=_wasPredicted;
@property(retain, nonatomic) NSMutableOrderedSet *ambiguousDialects; // @synthesize ambiguousDialects=_ambiguousDialects;
@property(retain, nonatomic) AXDialectMap *unambiguousDialect; // @synthesize unambiguousDialect=_unambiguousDialect;
@property(nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (id)description;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addAmbiguousDialect:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) AXDialectMap *dialect;
@property(readonly, nonatomic) NSString *contentSubstring;
@property(readonly, nonatomic) AXDialectMap *preferredAmbiguousDialect;

@end

