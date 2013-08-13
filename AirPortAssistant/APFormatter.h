/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSFormatter.h"

@class NSCharacterSet;

@interface APFormatter : NSFormatter
{
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
    unsigned int _maxLength;
}

+ (id)ipv6AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)ipv4AddressSet;
+ (id)domainNameFormatter:(unsigned int)arg1;
+ (id)sharedDomainNameFormatter;
+ (id)hexFormatter:(unsigned int)arg1;
+ (id)ascii7BitFormatter:(unsigned int)arg1;
+ (id)asciiFormatter:(unsigned int)arg1;
+ (id)phoneNumberFormatter:(unsigned int)arg1;
+ (id)sharedPhoneNumberFormatter;
+ (id)nonZeroNumberOnly:(unsigned int)arg1;
+ (id)numberOnlyFormatter:(unsigned int)arg1;
+ (id)maxLengthFormatter:(unsigned int)arg1;
+ (id)multipleIPFormatter:(unsigned int)arg1;
+ (id)sharedMultipleIPFormatter;
+ (id)ipFormatter:(unsigned int)arg1;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedIPFormatter;
+ (id)romanFormatter:(unsigned int)arg1;
+ (id)formatterForBSFormatter:(int)arg1 withMaxLen:(long)arg2;
+ (id)domainNameSet;
+ (id)pogoPasswordSet;
+ (id)hexSet;
+ (id)ascii7BitSet;
+ (id)asciiSet;
+ (id)phoneNumberSet;
+ (id)multipleIpAddressesSet;
+ (id)romanSet;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)invertedCharacterSet;
- (void)setInvertedCharacterSet:(id)arg1;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithMaxLength:(unsigned int)arg1;
- (id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned int)arg2;
- (id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned int)arg2;

@end

