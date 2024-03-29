/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptCell.h>

@class CKEntity, UILabel;

@interface CKEntityCell : CKTranscriptCell
{
    UILabel *_label;
    CKEntity *_entity;
    float _bottomMargin;
}

+ (struct CGSize)sizeForEntity:(id)arg1;
+ (struct CGSize)sizeForEntity:(id)arg1 withWidth:(float)arg2;
+ (float)defaultWidth;
- (void)sizeToFit;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBottomMargin:(float)arg1;
- (void)setEntity:(id)arg1;
- (void)updateFontSize;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

