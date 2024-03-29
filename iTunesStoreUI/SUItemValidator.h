/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject
{
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

+ (id)purchaseValidator;
@property(readonly, nonatomic) NSArray *validationTests;
- (BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id *)arg3;
- (BOOL)validateItems:(id)arg1 error:(id *)arg2;
- (void)removeValidationTest:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)addCollectionValidationTests:(id)arg1;
- (void)dealloc;

@end

