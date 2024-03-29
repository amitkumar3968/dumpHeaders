/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "CKOverlayViewProtocol.h"

@class CKAtomListView, NSArray, UIImageView, UIScrollView;

@interface CKRecipientListView : UIView <CKOverlayViewProtocol>
{
    UIScrollView *_recipientScrollView;
    CKAtomListView *_toField;
    UIImageView *_recipientSeparatorShadow;
    NSArray *_recipients;
    int _style;
    struct CGSize _contentSize;
    id _delegate;
}

+ (float)separatorHeight;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void)_setupToField;
- (void)_adjustContentSize;
- (void)_clearToField;
- (void)atomListView:(id)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)addressAtomClicked:(id)arg1;
@property(nonatomic, getter=isSeparatorShadowHidden) BOOL separatorShadowHidden; // @dynamic separatorShadowHidden;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (float)heightWithoutSeparator;
- (void)layoutSubviews;
- (void)timerFired:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 toFieldRecipients:(id)arg2 style:(int)arg3 delegate:(id)arg4;

@end

