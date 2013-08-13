/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUiPadVideoPartTableViewCell.h>

@class IUiPadVideoMovieChapterTableViewCellContentView, MPMediaItem;

@interface IUiPadVideoChapterTableViewCell : IUiPadVideoPartTableViewCell
{
    MPMediaItem *_mediaItem;
    unsigned int _chapterIndex;
}

+ (struct CGSize)videoImageSize;
+ (Class)contentViewClass;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (BOOL)imageRequestIsValid:(id)arg1;
- (id)videoImageRequest;
- (void)updateContentView;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setMediaItem:(id)arg1 chapterIndex:(unsigned int)arg2;

// Remaining properties
@property(readonly, nonatomic) IUiPadVideoMovieChapterTableViewCellContentView *videoChapterContentView; // @dynamic videoChapterContentView;

@end
