/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface AppleSpell : NSObject
{
    void *_proofReaderConnection;
    struct __CFDictionary *_databaseConnections;
    NSMutableDictionary *_bindicts;
    NSData *_globalBindictData;
    NSData *_globalNegBindictData;
    NSMutableDictionary *_autocorrections;
    NSString *_lastLanguage;
    NSArray *_userPreferredLanguages;
    NSMutableDictionary *_learnedResponses;
    NSMutableArray *_diagnosticInfo;
    NSMutableSet *_foundNames;
    double _lastFindNames;
    NSMutableDictionary *_lastSampleCollected;
    unsigned int _numberOfSamplesCollected;
    double _lastSampleCollection;
    NSMutableArray *_retainedSamples;
    NSMutableDictionary *_lastSampleRecorded;
    double _lastSampleRecording;
    BOOL _userPrefersUncheckedLatinLanguage;
}

- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 suggestWordWithLengthInRange:(struct _NSRange)arg2 language:(id)arg3;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestGuessesForWordRange:(struct _NSRange)arg2 inString:(id)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned int)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(int *)arg7;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int *)arg4 countOnly:(BOOL)arg5 correction:(id *)arg6;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int *)arg4 countOnly:(BOOL)arg5;
- (struct _NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(struct _NSRange)arg3 languages:(id)arg4 orthography:(id)arg5 checkOrthography:(BOOL)arg6 mutableResults:(id)arg7 offset:(unsigned int)arg8 autocorrect:(BOOL)arg9 keyEventData:(id)arg10 appIdentifier:(id)arg11 wordCount:(int *)arg12 countOnly:(BOOL)arg13 correction:(id *)arg14;
- (id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2;
- (struct _NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id *)arg4;
- (struct _NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(struct _NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned int)arg7 details:(id *)arg8;
- (BOOL)_checkGrammarInString:(id)arg1 range:(struct _NSRange)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 bufIO:(struct _PR_BUF_IO *)arg6 errorRange:(struct _NSRange *)arg7 details:(id *)arg8;
- (BOOL)validateWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 connection:(struct _PR_DB_IO *)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(unsigned int)arg12;
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4 connection:(struct _PR_DB_IO *)arg5 sender:(id)arg6;
- (BOOL)validateWordPrefixBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO *)arg3;
- (BOOL)validateWordBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO *)arg3;
- (BOOL)globalCheckNegativeWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4;
- (BOOL)globalCheckWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4;
- (BOOL)checkWordBuffer:(char *)arg1 length:(unsigned int)arg2 language:(id)arg3 encoding:(unsigned long)arg4 index:(unsigned int)arg5;
- (id)autocorrectionDictionaryForLanguage:(id)arg1;
- (id)globalNegativeBindictData;
- (id)globalBindictData;
- (id)bindictDataForLanguage:(id)arg1 index:(unsigned int)arg2;
- (struct _PR_DB_IO *)databaseConnectionForLanguage:(id)arg1;
- (unsigned long)encodingForLanguage:(id)arg1;
- (id)fallbackLocalizationForLanguage:(id)arg1;
- (id)localizationForLanguage:(id)arg1;
- (id)localizationsForLanguage:(id)arg1;
- (id)bundle;
- (id)init;
- (void)resetTimer;
- (void)timeout:(id)arg1;
- (BOOL)_checkEnglishGrammarInString:(id)arg1 range:(struct _NSRange)arg2 indexIntoBuffer:(unsigned int)arg3 bufferLength:(unsigned int)arg4 language:(id)arg5 connection:(struct _PR_DB_IO *)arg6 sender:(id)arg7 bufIO:(struct _PR_BUF_IO *)arg8 retval:(int *)arg9 errorRange:(struct _NSRange *)arg10 details:(id *)arg11;
- (id)_detailWithRange:(struct _NSRange)arg1 description:(id)arg2 corrections:(id)arg3;
- (id)_correctionForSuggestedPhrase:(const char *)arg1 originalBuffer:(const char *)arg2 length:(unsigned int)arg3;
- (id)_modifiedGrammarDescriptionForDescription:(id)arg1;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)_crudePreviousWordInString:(id)arg1 inRange:(struct _NSRange)arg2 precededBy:(id *)arg3;
- (id)_crudeNextWordInString:(id)arg1 inRange:(struct _NSRange)arg2;
- (BOOL)onNoContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (BOOL)onContractionList:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (BOOL)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (BOOL)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3 sender:(id)arg4;
- (BOOL)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(struct _PR_DB_IO *)arg3;
- (id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned int)arg2 maximumLength:(unsigned int)arg3 language:(id)arg4;
- (id)spellServer:(id)arg1 suggestCompletionsForPartialWord:(id)arg2 inLanguage:(id)arg3;
- (id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3;
- (id)_correctionForString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned int)arg5 dictionary:(id)arg6 language:(id)arg7 connection:(struct _PR_DB_IO *)arg8 keyEventData:(id)arg9;
- (id)_japaneseCorrectionForString:(id)arg1 connection:(struct _PR_DB_IO *)arg2;
- (id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2;
- (id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(BOOL)arg3;
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned int)arg2;
- (id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2;
- (id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2;
- (unsigned int)_getSplitIndexes:(unsigned int *)arg1 maxCount:(unsigned int)arg2 forPinyinInputString:(id)arg3;
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1 restricted:(BOOL)arg2;
- (void)addModifiedPartialPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO *)arg2 fromIndex:(unsigned int)arg3 prevIndex:(unsigned int)arg4 prevPrevIndex:(unsigned int)arg5 prePrevPrevIndex:(unsigned int)arg6 startingModificationsAt:(unsigned int)arg7 inBuffer:(char *)arg8 length:(unsigned int)arg9 initialSyllableCount:(unsigned int)arg10 initialScore:(unsigned int)arg11 prevScore:(unsigned int)arg12 prevPrevScore:(unsigned int)arg13 lastSyllableScore:(unsigned int)arg14;
- (void)addModifiedPinyinToArray:(id)arg1 connection:(struct _PR_DB_IO *)arg2 fromIndex:(unsigned int)arg3 prevIndex:(unsigned int)arg4 prevPrevIndex:(unsigned int)arg5 startingModificationsAt:(unsigned int)arg6 inBuffer:(char *)arg7 length:(unsigned int)arg8 initialSyllableCount:(unsigned int)arg9 initialScore:(unsigned int)arg10 prevScore:(unsigned int)arg11 prevPrevScore:(unsigned int)arg12 lastSyllableScore:(unsigned int)arg13 couldBeAbbreviatedPinyin:(BOOL)arg14;
- (void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char *)arg2 length:(unsigned int)arg3 atEnd:(BOOL)arg4;
- (id)englishStringFromWordBuffer:(char *)arg1 length:(unsigned int)arg2 connection:(struct _PR_DB_IO *)arg3 ignoreLength:(BOOL)arg4;

@end

