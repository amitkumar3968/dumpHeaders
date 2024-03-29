/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class NSString;

@interface TIUserDictionaryWord : NSManagedObject
{
    NSString *_sectionIndex;
}

+ (BOOL)userWord:(id)arg1 duplicatesTarget:(id)arg2 andShortcut:(id)arg3;
+ (int)validateWithNewTarget:(id)arg1 newShortcut:(id)arg2 otherWords:(id)arg3;
+ (id)predicateFilteringForSearchText:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1 shortcut:(id)arg2;
+ (id)sortDescriptors;
+ (id)entityDescription;
@property(copy, nonatomic) NSString *sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(copy, nonatomic) NSString *shortcut; // @dynamic shortcut;
@property(copy, nonatomic) NSString *target; // @dynamic target;
- (id)changeDescription;
- (id)filteredValues:(id)arg1;
- (id)changeDescriptionKey:(id)arg1;
- (BOOL)hasChangesToTargetOrShortcut;
- (void)updateTimestamp;
- (id)copyWithContext:(id)arg1;
- (void)takeValuesFrom:(id)arg1 overwriteExistingValues:(BOOL)arg2;
- (int)compare:(id)arg1;
- (void)dealloc;

@end

