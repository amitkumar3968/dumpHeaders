/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "MPImageRequestDelegate.h"

@class IUiPadVideoPartTableViewCellContentView, MPImageCache, MPImageCacheRequest, UIImage, UIImageView, UIView;

@interface IUiPadVideoPartTableViewCell : UITableViewCell <MPImageRequestDelegate>
{
    IUiPadVideoPartTableViewCellContentView *_videoChapterContentView;
    MPImageCache *_imageCache;
    UIView *_topBevel;
    UIView *_bottomBevel;
    UIImageView *_videoImageView;
}

+ (struct CGSize)videoImageSize;
+ (Class)contentViewClass;
@property(readonly, nonatomic) IUiPadVideoPartTableViewCellContentView *videoChapterContentView; // @synthesize videoChapterContentView=_videoChapterContentView;
@property(nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)_createVideoImageView;
- (id)_imageForImageRequest:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (void)dealloc;
@property(nonatomic) BOOL drawAsDisabled; // @dynamic drawAsDisabled;
- (BOOL)imageRequestIsValid:(id)arg1;
- (void)updateContentView;
@property(readonly, nonatomic) MPImageCacheRequest *videoImageRequest;
@property(retain, nonatomic) UIImage *videoImage;

@end

