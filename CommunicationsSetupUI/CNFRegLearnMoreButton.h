/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class NSString;

@interface CNFRegLearnMoreButton : UIButton
{
    int _style;
    NSString *_buttonText;
    BOOL _usesImage;
    BOOL _alwaysUnderline;
}

@property(nonatomic) BOOL alwaysUnderline; // @synthesize alwaysUnderline=_alwaysUnderline;
@property(nonatomic) BOOL usesImage; // @synthesize usesImage=_usesImage;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupArrowImageForCurrentStyle;
- (void)_setupLearnMoreTextForCurrentStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 text:(id)arg3;

@end

