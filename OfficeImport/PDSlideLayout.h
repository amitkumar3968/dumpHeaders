/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild
{
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)defaultTheme;
- (void)setSlideMaster:(id)arg1;
- (id)slideMaster;
- (void)setSlideLayoutType:(int)arg1;
- (int)slideLayoutType;
- (void)dealloc;
- (id)initWithSlideMaster:(id)arg1;

@end

