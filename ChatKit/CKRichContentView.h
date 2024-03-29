/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKTextContentView.h>

#import "DOMEventListener.h"

@interface CKRichContentView : CKTextContentView <DOMEventListener>
{
    id _richContentDelegate;
}

@property(nonatomic) id richContentDelegate; // @synthesize richContentDelegate=_richContentDelegate;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)insertHTML:(id)arg1;
- (void)setHTML:(id)arg1;
- (id)html;
- (id)DOMDocument;
- (void)_wvInsertHTML:(id)arg1;
- (void)_wvHelperThawSelectionTag;
- (id)createDocumentFragment;
- (id)nodeForImageSize:(struct CGSize)arg1 ID:(id)arg2 URL:(id)arg3;
- (id)brElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

