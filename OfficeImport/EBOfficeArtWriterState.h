/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OABWriterState.h>

@class EBWriterState;

__attribute__((visibility("hidden")))
@interface EBOfficeArtWriterState : OABWriterState
{
    EBWriterState *mEBWriterState;
}

- (void)setTargetObject:(id)arg1 forSourceDrawable:(id)arg2;
- (void)cacheCHDChart:(id)arg1 forESDObject:(id)arg2;
- (id)ebWriterState;
- (void)dealloc;
- (id)initWithEBWriterState:(id)arg1;

@end

