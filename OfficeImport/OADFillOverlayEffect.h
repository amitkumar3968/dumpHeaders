/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADEffect.h>

@class OADFill;

__attribute__((visibility("hidden")))
@interface OADFillOverlayEffect : OADEffect
{
    int mBlendMode;
    OADFill *mFill;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (void)dealloc;
- (id)init;

@end

