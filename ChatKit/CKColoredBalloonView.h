/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKBalloonView.h>

@interface CKColoredBalloonView : CKBalloonView
{
    int _outgoingColor;
}

@property(nonatomic) int outgoingColor; // @synthesize outgoingColor=_outgoingColor;
- (void)updateHighlightedImage;
- (void)updateImage;
- (void)setOrientation:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)description;

@end
