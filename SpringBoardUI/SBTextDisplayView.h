/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIColor, UIFont;

@interface SBTextDisplayView : UIView
{
    NSString *_text;
    UIFont *_font;
    UIColor *_fontColor;
}

- (id)_scriptingInfo;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFontColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)_updateText;
- (void)dealloc;
- (id)initWithWidth:(float)arg1 font:(id)arg2 fontColor:(id)arg3;

@end

