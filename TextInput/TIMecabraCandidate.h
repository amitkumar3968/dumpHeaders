/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIKeyboardCandidate.h"

@class NSString;

@interface TIMecabraCandidate : UIKeyboardCandidate
{
    void *_candidate;
    NSString *_displayReading;
    NSString *_firstSyllable;
}

- (BOOL)isForShortcutConversion;
- (BOOL)isEmojiCandidate;
- (BOOL)isExtensionCandidate;
@property(readonly, nonatomic) NSString *displayReading;
- (void *)mecabraCandidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMecabraCandidate:(const void *)arg1;
- (id)initConversionCandidateWithSurface:(id)arg1 andInput:(id)arg2;
@property(readonly, nonatomic) NSString *firstSyllable;
@property(readonly, nonatomic) NSString *convertedInput;
- (id)input;
- (id)candidate;

@end

