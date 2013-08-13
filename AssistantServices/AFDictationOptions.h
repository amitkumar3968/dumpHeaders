/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AFDictationOptions : NSObject
{
    NSString *_applicationName;
    NSString *_applicationVersion;
    NSString *_fieldLabel;
    NSString *_fieldIdentifier;
    NSString *_interactionIdentifier;
    int _keyboardType;
    NSString *_prefixText;
    NSString *_postfixText;
    NSString *_selectedText;
    int _returnKeyType;
    NSString *_languageCodeOverride;
}

@property(copy, nonatomic) NSString *languageCodeOverride; // @synthesize languageCodeOverride=_languageCodeOverride;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *postfixText; // @synthesize postfixText=_postfixText;
@property(copy, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(copy, nonatomic) NSString *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (void).cxx_destruct;
- (id)initWithDKPlistRepresentation:(id)arg1;
- (id)dkPlistRepresentation;

@end

