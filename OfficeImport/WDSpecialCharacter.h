/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun
{
    WDCharacterProperties *mProperties;
    int mType;
}

- (id)initWithParagraph:(id)arg1;
- (void)setCharacterType:(int)arg1;
- (int)characterType;
- (int)runType;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;

@end

