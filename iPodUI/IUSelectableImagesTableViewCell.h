/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class CALayer, NSArray, NSMutableArray;

@interface IUSelectableImagesTableViewCell : UITableViewCell
{
    NSMutableArray *_selectableImageViews;
    CALayer *_dimmerLayer;
    int _selectedViewIndex;
}

@property(readonly, nonatomic) int selectedViewIndex; // @synthesize selectedViewIndex=_selectedViewIndex;
@property(readonly, nonatomic) NSArray *selectableImageViews; // @synthesize selectableImageViews=_selectableImageViews;
- (void)updateConnectionProgress:(float)arg1 forLibraryAtIndex:(unsigned int)arg2;
- (void)_updateSelectedImage;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)clearSelectableImageViews;
- (void)addSelectableImageView:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

