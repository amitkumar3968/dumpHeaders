/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    int mTextType;
    WDTableCell *mTableCell;
}

- (id)content;
- (BOOL)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)newBlockIterator;
- (id)blockIterator;
- (int)tableNestingLevel;
- (void)removeLastBlock;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addTableAtIndex:(int)arg1;
- (id)addTable;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addParagraph;
- (id)tableCell;
- (int)textType;
- (id)document;
- (void)addBlock:(id)arg1;
- (int)indexOfBlock:(id)arg1;
- (id)lastBlock;
- (id)blockAt:(int)arg1;
- (int)blockCount;
- (id)blocks;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;

@end

