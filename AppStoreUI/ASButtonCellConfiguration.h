/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUItemCellConfiguration.h"

@class UIBezierPath, UIImage;

@interface ASButtonCellConfiguration : SUItemCellConfiguration
{
    UIImage *_normalButtonImage;
    UIImage *_selectedButtonImage;
    UIBezierPath *_selectionClipPath;
}

+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
- (struct CGRect)_frameForImage:(id)arg1;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

