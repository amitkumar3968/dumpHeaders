/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADBulletProperties.h>

__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties
{
    int mSchemeType;
    int mStartIndex;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)startIndex;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned int)arg2;

@end

