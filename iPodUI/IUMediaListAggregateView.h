/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIImageView.h"

@class IUMediaListAggregateViewConfiguration, IUReflectionImageView, NSMutableArray;

@interface IUMediaListAggregateView : UIImageView
{
    id _delegate;
    IUMediaListAggregateViewConfiguration *_configuration;
    IUReflectionImageView *_artworkView;
    NSMutableArray *_configurationSubviews;
    BOOL _needsViewsLoaded;
    unsigned int _drawAsDisabled:1;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)_setNeedsViewsLoaded;
- (void)_reloadViews;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration:(BOOL)arg1;
- (void)_reloadArtworkView;
@property(retain, nonatomic) IUMediaListAggregateViewConfiguration *configuration;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)reloadData;
- (id)initWithConfiguration:(id)arg1;

@end

