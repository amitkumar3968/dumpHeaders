/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class IUAlbumGridCellContext, IUAlbumGridRowView;

@interface IUAlbumGridRowCell : UITableViewCell
{
    struct CGSize _artworkSize;
    IUAlbumGridRowView *_gridRowView;
    float _topPadding;
    BOOL _dimTouchedAlbum;
    id <IUAlbumGridRowCellDelegate> _delegate;
    unsigned int _delegateRespondsToNewGridImageView;
    BOOL _shouldLoadLocalImagesSynchronously;
}

+ (struct CGSize)thumbnailSizeForContext:(id)arg1;
+ (float)rowHeightForContext:(id)arg1;
@property(nonatomic) BOOL shouldLoadLocalImagesSynchronously; // @synthesize shouldLoadLocalImagesSynchronously=_shouldLoadLocalImagesSynchronously;
@property(nonatomic) id <IUAlbumGridRowCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float topPadding; // @synthesize topPadding=_topPadding;
@property(readonly, nonatomic) IUAlbumGridRowView *gridRowView; // @synthesize gridRowView=_gridRowView;
@property(nonatomic) BOOL dimTouchedAlbum; // @synthesize dimTouchedAlbum=_dimTouchedAlbum;
@property(nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
- (void)deleteAlbumAtIndex:(unsigned int)arg1;
- (id)thumbnailImageForAlbumAtIndex:(unsigned int)arg1;
- (struct CGRect)thumbnailFrameForAlbumAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) struct CGSize edgeConstraints;
@property(nonatomic) unsigned int rowIndex;
@property(retain, nonatomic) IUAlbumGridCellContext *context;
- (void)prepareForReuse;
- (void)_longPressed:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)newGridImageView;
- (void)setTitlesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)unhideAlbums;
- (void)setAlbumHidden:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)refreshImages;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

