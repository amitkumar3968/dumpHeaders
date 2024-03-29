/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUImageModifier.h"

@interface ASSoftwareIconImageModifier : SUImageModifier
{
    int _iconOptions;
    BOOL _isNewsstandIcon;
}

@property(nonatomic, getter=isNewsstandIcon) BOOL newsstandIcon; // @synthesize newsstandIcon=_isNewsstandIcon;
@property(nonatomic) int iconOptions; // @synthesize iconOptions=_iconOptions;
- (int)_iconVariantForImage:(id)arg1;
- (id)newImageForImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

