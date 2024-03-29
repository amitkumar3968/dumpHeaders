/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "CKTextBalloonContentView.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface CKLazyTextView : UIView <CKTextBalloonContentView>
{
    NSAttributedString *_attributedText;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
    int _textAlignment;
    float _lineHeight;
    BOOL _webViewNeedsUpdate;
    NSString *_fontCSS;
    NSString *_textColorCSS;
    NSString *_textShadowCSS;
    NSString *_textAlignmentCSS;
    NSString *_lineHeightCSS;
}

@property(copy, nonatomic) NSString *lineHeightCSS; // @synthesize lineHeightCSS=_lineHeightCSS;
@property(copy, nonatomic) NSString *textAlignmentCSS; // @synthesize textAlignmentCSS=_textAlignmentCSS;
@property(copy, nonatomic) NSString *textShadowCSS; // @synthesize textShadowCSS=_textShadowCSS;
@property(copy, nonatomic) NSString *textColorCSS; // @synthesize textColorCSS=_textColorCSS;
@property(copy, nonatomic) NSString *fontCSS; // @synthesize fontCSS=_fontCSS;
@property(nonatomic) BOOL webViewNeedsUpdate; // @synthesize webViewNeedsUpdate=_webViewNeedsUpdate;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)updateTextShadowCSS;
- (void)setWebViewNeedsUpdate;
- (void)updateWebViewIfNeeded;
- (void)updateWebView;
- (id)styleString;
- (id)textView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CKTextInteractionDelegate> interactionDelegate;

@end

