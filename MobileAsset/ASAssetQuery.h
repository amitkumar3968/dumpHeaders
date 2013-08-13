/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSPredicate, NSString;

@interface ASAssetQuery : NSObject
{
    NSArray *_results;
    NSString *_assetType;
    BOOL _queriesLocalAssetInformationOnly;
    NSPredicate *_predicate;
}

+ (id)queryPredicateForProperties:(id)arg1;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) BOOL queriesLocalAssetInformationOnly; // @synthesize queriesLocalAssetInformationOnly=_queriesLocalAssetInformationOnly;
@property(copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void)stopQuery;
- (void)startQuery:(id)arg1;
- (id)runQueryAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithAssetType:(id)arg1;

@end

