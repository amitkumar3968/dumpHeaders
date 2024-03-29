/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, PLSyncProgressView, UILabel;

@interface PLAlbumFooterView : UIView
{
    UILabel *_titleLabel;
    PLSyncProgressView *_syncProgressView;
    UILabel *_subtitleLabel;
    unsigned int _imageCount;
    unsigned int _videoCount;
    unsigned int _otherCount;
    unsigned int _pendingCount;
    int _importOperation;
    int _style;
    UIView *_accessoryView;
    NSString *_subtitle;
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)setImageCount:(unsigned int)arg1 videoCount:(unsigned int)arg2 otherCount:(unsigned int)arg3 pendingCount:(unsigned int)arg4 importOperation:(int)arg5;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

