/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    TSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (id)createFontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(BOOL)arg2;
- (id)fontWithName:(id)arg1;
- (void)clear;
- (int)count;
- (void)dealloc;
- (id)init;

@end

