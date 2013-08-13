/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMusicTableViewCell.h>

@class NSMutableArray;

@interface IUMediaActionButtonsCell : IUMusicTableViewCell
{
    id <IUMediaActionButtonsCellDelegate> _delegate;
    NSMutableArray *_buttons;
}

@property(nonatomic) id <IUMediaActionButtonsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_newButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)_buttonImageForControlState:(unsigned int)arg1;
- (void)reconfigureWithButtonTitles:(id)arg1 animated:(BOOL)arg2;
- (void)_buttonAction:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_didCreateContentView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTitles:(id)arg1;

@end

