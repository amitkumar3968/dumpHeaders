/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IUFoldingTransitionView, IUWildcatVideoDetailViewController, IUWildcatVideosViewController;

@interface IUAlbumGridViewControllerTransitionCache : NSObject
{
    unsigned int _selectedAlbumIndex;
    IUWildcatVideosViewController *_wildcatViewController;
    IUWildcatVideoDetailViewController *_controllerToPush;
    IUFoldingTransitionView *_foldingTransitionView;
}

@property(retain, nonatomic) IUFoldingTransitionView *foldingTransitionView; // @synthesize foldingTransitionView=_foldingTransitionView;
@property(retain, nonatomic) IUWildcatVideoDetailViewController *controllerToPush; // @synthesize controllerToPush=_controllerToPush;
@property(retain, nonatomic) IUWildcatVideosViewController *wildcatViewController; // @synthesize wildcatViewController=_wildcatViewController;
@property(nonatomic) unsigned int selectedAlbumIndex; // @synthesize selectedAlbumIndex=_selectedAlbumIndex;
- (void)dealloc;

@end

