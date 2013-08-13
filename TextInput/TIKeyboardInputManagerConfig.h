/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface TIKeyboardInputManagerConfig : NSObject
{
    BOOL allowsSpaceCorrections;
    NSString *dynamicDictionaryPath;
    NSString *inputMode;
    NSString *ngramModelPath;
    NSString *staticDictionaryPath;
    BOOL testing;
    BOOL usesTextChecker;
    BOOL usesAutocorrectionLists;
    BOOL usesExtendedLearning;
    BOOL usesRetrocorrection;
}

+ (id)configurationFromUIKit;
@property(nonatomic) BOOL usesRetrocorrection; // @synthesize usesRetrocorrection;
@property(nonatomic) BOOL usesExtendedLearning; // @synthesize usesExtendedLearning;
@property(nonatomic) BOOL usesAutocorrectionLists; // @synthesize usesAutocorrectionLists;
@property(nonatomic) BOOL usesTextChecker; // @synthesize usesTextChecker;
@property(nonatomic, getter=isTesting) BOOL testing; // @synthesize testing;
@property(copy, nonatomic) NSString *staticDictionaryPath; // @synthesize staticDictionaryPath;
@property(copy, nonatomic) NSString *ngramModelPath; // @synthesize ngramModelPath;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode;
@property(copy, nonatomic) NSString *dynamicDictionaryPath; // @synthesize dynamicDictionaryPath;
@property(nonatomic) BOOL allowsSpaceCorrections; // @synthesize allowsSpaceCorrections;
- (void)dealloc;

@end

