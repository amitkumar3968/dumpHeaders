/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIDocument.h"

@class NSDictionary, NSMutableDictionary, TIUserDictionaryController;

__attribute__((visibility("hidden")))
@interface TIUbiquitousUserDictionary : UIDocument
{
    NSMutableDictionary *_inputStrings;
    NSDictionary *_topLevelDictionary;
    TIUserDictionaryController *delegate;
}

@property(nonatomic) TIUserDictionaryController *delegate; // @synthesize delegate;
- (void)documentStateChanged:(id)arg1;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)pullWordsFromDelegate;
- (id)allWordsAsWordKeyPairs;
- (void)pushWordsToDelegate;
- (void)mergeRevisionsFromConflictVersions:(id)arg1;
- (void)mergeRevisionsFromDictionary:(id)arg1;
- (void)mergeConflictEntries:(id)arg1 intoCurrentEntries:(id)arg2;
- (id)setTarget:(id)arg1 forShortcut:(id)arg2;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end
