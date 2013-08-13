/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/_CKTextBalloonView.h>

@class NSString, UIImage, UIImageView, UIView<CKTextBalloonContentView>;

@interface CKGenericFileBalloonView : _CKTextBalloonView
{
    UIView<CKTextBalloonContentView> *_subtextView;
    UIImageView *_iconImageView;
}

+ (struct UIEdgeInsets)contentInsetsForBalloonOrientation:(int)arg1;
+ (BOOL)needsSingleTapGestureRecognizer;
+ (BOOL)fixedWidth;
+ (float)entryFieldBalloonAdditionalHeight;
+ (struct CGPoint)entryFieldBalloonOffset;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView<CKTextBalloonContentView> *subtextView; // @synthesize subtextView=_subtextView;
@property(retain, nonatomic) UIImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *subtext; // @dynamic subtext;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)updateTextColor;
- (id)textColor;
- (void)updateTextShadow;
- (void)updateFontSize;
- (void)copyToPasteboard;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

@end

