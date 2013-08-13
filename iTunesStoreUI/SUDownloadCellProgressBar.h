/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UISlider;

@interface SUDownloadCellProgressBar : UIView
{
    UISlider *_slider;
    int _style;
}

@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (id)_slider;
- (id)_newSliderWithEmptyImage:(id)arg1 fullImage:(id)arg2;
- (id)_newSliderForTable;
- (id)_newSliderForGrid;
- (void)sizeToFit;
- (void)layoutSubviews;
@property(nonatomic) float value;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end

