/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject
{
    WDText *mText;
}

- (void)clearProperties;
- (BOOL)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)initWithText:(id)arg1;
- (id)init;
- (int)textType;
- (id)document;
- (id)text;
- (int)blockType;

@end

