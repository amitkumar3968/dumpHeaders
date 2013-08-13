/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextContentView.h"

@class NSString, UILabel;

@interface SUTextContentView : UITextContentView
{
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) NSString *placeholder;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end

