/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextContentView.h"

@class UILabel;

@interface CKTextContentView : UITextContentView
{
    UILabel *_defaultTextView;
    BOOL _isShowingDictationPlaceholder;
}

@property(readonly, nonatomic) BOOL isShowingDictationPlaceholder; // @synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (struct CGRect)_defaultTextFrame;
- (void)_updateCSSMargins;
- (void)_updateFontSize;
- (void)_updateDefaultText;
- (void)reflow;
- (void)_adjustForSingleLineHeightIfNecessary;
- (BOOL)hasContent;
- (void)willMoveToSuperview:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)hideDefaultText:(BOOL)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)setText:(id)arg1;
- (void)setDefaultText:(id)arg1;
- (void)fontSizeChanged;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)_wvSetupCSSWithMargins:(struct UIEdgeInsets)arg1;
- (void)_wvReflow;

@end

