/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock
{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

- (BOOL)isEmpty;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (void)removeLastCharacter:(unsigned short)arg1;
- (float)maxReflectionDistance;
- (id)addDateTime:(id)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addBookmark;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addFieldMarker:(int)arg1;
- (id)addFieldMarker;
- (id)addEndnote;
- (id)addFootnote;
- (id)addAnnotation:(int)arg1;
- (id)addCharacterRun;
- (void)clearRuns;
- (void)removeRun:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addRun:(id)arg1;
- (id)runAt:(int)arg1;
- (int)runCount;
- (id)runs;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (id)initWithText:(id)arg1;
- (BOOL)isContinuationOf:(id)arg1;
- (BOOL)isTextFrame;

@end

