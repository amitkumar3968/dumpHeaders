/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSMergePolicy.h"

@interface NoteResurrectionMergePolicy : NSMergePolicy
{
}

+ (id)sharedNoteResurrectionMergePolicy;
- (BOOL)resolveConflicts:(id)arg1 error:(id *)arg2;
- (id)snapshotFromRecord:(id)arg1;
- (id)localStoreForNote:(id)arg1;

@end

