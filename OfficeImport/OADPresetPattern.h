/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADPattern.h>

__attribute__((visibility("hidden")))
@interface OADPresetPattern : OADPattern
{
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)presetPatternHeader;
+ (id)namedBitmapDataForPresetPatternType:(int)arg1;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

