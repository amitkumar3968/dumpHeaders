/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface LoupeView : UIView
{
    UIImageView *_foreground;
    UIImageView *_background;
    unsigned int _displayedIndex;
}

@property(nonatomic) unsigned int displayedIndex; // @synthesize displayedIndex=_displayedIndex;
- (id)image;
- (void)setImage:(id)arg1;
- (id)init;

@end
