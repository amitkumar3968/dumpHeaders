/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IUMediaDataSource, MPImageCache, MPImageCacheRequest, MPImageModifier, MPMediaQuery, UIColor, UIImage;

@interface IUAlbumGridCellContext : NSObject
{
    id <IUAlbumGridCellContextDelegate> _delegate;
    struct __CFDictionary *_groupMemberDataCache;
    MPImageCache *_imageCache;
    MPImageModifier *_imageModifier;
    int _imageContentMode;
    MPImageCacheRequest *_placeholderImageCacheRequest;
    UIImage *_unmodifiedPlaceholderImage;
    UIImage *_placeholderImage;
    MPMediaQuery *_query;
    struct __CFDictionary *_stringSizeCache;
    int _titleStyle;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    UIColor *_albumFillColor;
    BOOL _useTimedArtwork;
    BOOL _useUnmodifiedThumbnails;
    BOOL _drawShadow;
    BOOL _overlapIndexBar;
    IUMediaDataSource *_dataSource;
}

@property(nonatomic) BOOL useUnmodifiedThumbnails; // @synthesize useUnmodifiedThumbnails=_useUnmodifiedThumbnails;
@property(readonly, nonatomic) BOOL useTimedArtwork; // @synthesize useTimedArtwork=_useTimedArtwork;
@property(nonatomic) int titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) UIColor *albumFillColor; // @synthesize albumFillColor=_albumFillColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) UIImage *unmodifiedPlaceholderImage; // @synthesize unmodifiedPlaceholderImage=_unmodifiedPlaceholderImage;
@property(nonatomic) int imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(retain, nonatomic) MPImageCacheRequest *placeholderImageCacheRequest; // @synthesize placeholderImageCacheRequest=_placeholderImageCacheRequest;
@property(nonatomic) BOOL overlapIndexBar; // @synthesize overlapIndexBar=_overlapIndexBar;
@property(retain, nonatomic) MPImageModifier *imageModifier; // @synthesize imageModifier=_imageModifier;
@property(retain, nonatomic) MPImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) BOOL drawShadow; // @synthesize drawShadow=_drawShadow;
@property(nonatomic) id <IUAlbumGridCellContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IUMediaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (struct CGSize)_sizeForProperty:(int)arg1 ofEntityAtIndex:(unsigned int)arg2 withFont:(id)arg3;
- (struct CGSize)_sizeForCountStringOfEntityAtIndex:(unsigned int)arg1 withFont:(id)arg2;
- (id)_groupDataForEntityAtIndex:(unsigned int)arg1;
- (id)_countStringForEntityAtIndex:(unsigned int)arg1;
- (id)_expirationForMediaItem:(id)arg1;
- (struct CGSize)titleSizeForEntityAtIndex:(unsigned int)arg1 withFont:(id)arg2;
- (id)titleForEntityAtIndex:(unsigned int)arg1;
- (struct CGSize)subtitleSizeForEntityAtIndex:(unsigned int)arg1 withFont:(id)arg2;
- (id)subtitleForEntityAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) BOOL hasPlaceholderImage;
@property(retain, nonatomic) UIImage *placeholderImage;
- (void)setPlaceholderImageRequest:(id)arg1;
@property(readonly, nonatomic) struct CGPoint actualImageOrigin;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) unsigned int albumsPerRow;
- (void)dealloc;
- (id)init;

@end
