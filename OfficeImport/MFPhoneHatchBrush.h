/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/MFPhoneBrush.h>

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPhoneHatchBrush : MFPhoneBrush
{
    TSUColor *m_colour;
    int m_style;
}

+ (id)hatchBrushWithColour:(id)arg1:(int)arg2;
- (void)fillPath:(id)arg1:(struct CGPath *)arg2;
- (void)dealloc;
- (id)initWithColour:(id)arg1:(int)arg2;

@end

