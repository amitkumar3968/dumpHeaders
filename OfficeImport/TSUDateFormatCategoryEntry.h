/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;
    struct __CFArray *mFormatters;
    NSMutableSet *mFormatStrings;
}

- (struct __CFDate *)createDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(BOOL)arg2 succesTSUlFormatString:(const struct __CFString **)arg3;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2;
- (unsigned short)separator;
- (void)dealloc;
- (id)initWithSeparator:(unsigned short)arg1;

@end

