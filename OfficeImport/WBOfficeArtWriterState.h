/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OABWriterState.h>

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface WBOfficeArtWriterState : OABWriterState
{
    TSUPointerKeyDictionary *mZIndicesInProgress;
}

- (unsigned int)indexForChild:(id)arg1 parentContainer:(id)arg2;
- (void)dealloc;
- (id)initWithClient:(id)arg1;

@end

