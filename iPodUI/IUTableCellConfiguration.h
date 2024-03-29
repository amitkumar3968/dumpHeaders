/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IUDownloadActionConfiguration, MPMediaItem, NSString;

@interface IUTableCellConfiguration : NSObject
{
    struct CGSize _backgroundSize;
    int _cacheTag;
    id _globalContext;
    BOOL _isNowPlaying;
    struct CGSize _layoutSize;
    unsigned int _isDeleteConfirmationVisible:1;
    unsigned int _needsDisplay:1;
    IUDownloadActionConfiguration *_purchaseActionConfiguration;
    struct CGSize _purchaseButtonSize;
    struct CGSize _downloadButtonSize;
    struct CGSize _downloadProgressIndicatorSize;
    BOOL _downloadable;
    BOOL _downloadInProgress;
    BOOL _canShowPurchasableMediaViews;
    struct CGPoint _downloadButtonOrigin;
    struct CGPoint _downloadProgressIndicatorOrigin;
}

+ (BOOL)showsUntruncationCallout;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (float)minimumRowHeight;
+ (BOOL)drawsRowsInAlternateStyle;
+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (id)customActionRowConfigurationWithSimpleCellConfiguration:(id)arg1;
+ (void)configureTableDisplaySettings:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) struct CGPoint downloadProgressIndicatorOrigin; // @synthesize downloadProgressIndicatorOrigin=_downloadProgressIndicatorOrigin;
@property(readonly, nonatomic) struct CGPoint downloadButtonOrigin; // @synthesize downloadButtonOrigin=_downloadButtonOrigin;
@property(readonly, nonatomic) BOOL canShowPurchasableMediaViews; // @synthesize canShowPurchasableMediaViews=_canShowPurchasableMediaViews;
@property(nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress; // @synthesize downloadInProgress=_downloadInProgress;
@property(nonatomic, getter=isDownloadable) BOOL downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) struct CGSize downloadProgressIndicatorSize; // @synthesize downloadProgressIndicatorSize=_downloadProgressIndicatorSize;
@property(nonatomic) struct CGSize downloadButtonSize; // @synthesize downloadButtonSize=_downloadButtonSize;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(nonatomic) struct CGSize purchaseButtonSize; // @synthesize purchaseButtonSize=_purchaseButtonSize;
@property(retain, nonatomic) IUDownloadActionConfiguration *purchaseActionConfiguration; // @synthesize purchaseActionConfiguration=_purchaseActionConfiguration;
@property(nonatomic) BOOL isNowPlaying; // @synthesize isNowPlaying=_isNowPlaying;
@property(readonly, nonatomic) MPMediaItem *mediaItem;
@property(nonatomic) BOOL isDeleteConfirmationVisible;
- (struct CGSize)offsetForLabelAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *untruncationCalloutString;
- (id)untruncationCalloutStringWithLinesByStringIndexes:(id)arg1;
@property(readonly, nonatomic) BOOL showsUntruncationCallout;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
@property(nonatomic) BOOL needsDisplay;
@property(retain, nonatomic) id globalContext;
@property(readonly, nonatomic) struct UIEdgeInsets selectionEdgeInsets;
- (void)reloadLayoutInformation;
- (void)reloadData;
@property(readonly, nonatomic) unsigned int numberOfLabels;
@property(readonly, nonatomic) unsigned int numberOfImages;
@property(readonly, nonatomic) Class layoutManagerClass;
- (void)invalidateDynamicTrackCaches;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (int)lineBreakModeForLabelAtIndex:(unsigned int)arg1;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)backgroundColorForImageAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect)frameForImageAtIndex:(unsigned int)arg1;
- (void)layoutSubviewLayoutViews:(id)arg1;
- (id)subviewLayoutViewsWithModifiers:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
@property(readonly, nonatomic) struct CGRect purchaseButtonFrame;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int preset;

@end

