/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier
{
    SEL bestGuess;
    NSString *_placeholder;
}

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)dealloc;

@end

