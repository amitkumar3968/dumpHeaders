/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAlbumChangeObserver.h"
#import "PLAlbumListChangeObserver.h"
#import "PLAlbumStreamActivityDelegate.h"
#import "PLAlbumStreamingOptionsViewControllerDelegate.h"
#import "PLDismissableViewController.h"
#import "PLPhotoLibraryShouldReloadObserver.h"
#import "PLPhotosPickerSessionParticipant.h"

@class NSArray, NSDate, NSObject<PLAlbumContainer>, NSObject<PLAssetContainer>, NSString, PLAlbumStreamActivity, PLAlbumStreamingOptionsViewController, PLPhotosPickerSession, PLSyncProgressView, UIAlertView, UIBarButtonItem, UIImage;

@interface PLAbstractLibraryViewController : UIViewController <PLAlbumStreamingOptionsViewControllerDelegate, PLAlbumStreamActivityDelegate, PLAlbumListChangeObserver, PLAlbumChangeObserver, PLPhotoLibraryShouldReloadObserver, PLDismissableViewController, PLPhotosPickerSessionParticipant>
{
    struct NSObject *_albumList;
    int _contentMode;
    struct NSObject *_hiddenAlbum;
    struct NSObject *_openAlbum;
    NSArray *_syncProgressAlbums;
    UIBarButtonItem *_customRightButton;
    UIAlertView *_createAlbumAlert;
    PLAlbumStreamingOptionsViewController *_albumSharingOptionsController;
    PLAlbumStreamActivity *_createSharedStreamActivity;
    id <PLAbstractLibraryViewControllerDelegate> _delegate;
    unsigned int _previousAlbumsCount;
    unsigned int _ignoreReorderNotificationCount;
    NSDate *_lastForegroundedDate;
    unsigned int _lastPendingCount;
    unsigned int _totalItemsCount;
    PLPhotosPickerSession *_currentPickerSession;
    id _didSelectAlbumHandler;
    struct {
        unsigned int hasContent:1;
        unsigned int allowsEditingAlbums:1;
        unsigned int albumsListViewInSync:1;
        unsigned int syncProgressVisible:1;
        unsigned int visible:1;
        unsigned int delegateImplementsShouldEnableAlbum:1;
        unsigned int reserved:27;
    } _alcFlags;
    UIImage *_listHeaderImage;
    NSString *_listHeaderLabel;
    id _listHeaderActionHandler;
}

@property(copy, nonatomic) id listHeaderActionHandler; // @synthesize listHeaderActionHandler=_listHeaderActionHandler;
@property(nonatomic) id <PLAbstractLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *listHeaderLabel; // @synthesize listHeaderLabel=_listHeaderLabel;
@property(retain, nonatomic) UIImage *listHeaderImage; // @synthesize listHeaderImage=_listHeaderImage;
@property(retain, nonatomic) PLPhotosPickerSession *currentPickerSession; // @synthesize currentPickerSession=_currentPickerSession;
@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @synthesize customRightButton=_customRightButton;
@property(copy, nonatomic) id didSelectAlbumHandler; // @synthesize didSelectAlbumHandler=_didSelectAlbumHandler;
@property(readonly, nonatomic) NSObject<PLAlbumContainer> *albumList; // @synthesize albumList=_albumList;
@property(retain, nonatomic) NSObject<PLAssetContainer> *hiddenAlbum; // @synthesize hiddenAlbum=_hiddenAlbum;
- (void)_updateAlbumsSortOrderIfNeeded;
- (void)_updateAlbumsWithNotification:(id)arg1;
- (void)_updateSyncProgress;
- (void)_updateHasContent;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject *)arg2;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)_addLocalAlbum:(id)arg1;
- (void)_addStreamedAlbum:(id)arg1;
- (void)addAlbum:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)_appWillEnterForeground:(id)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)canNavigateIntoAlbum:(struct NSObject *)arg1;
- (BOOL)albumIsDisplayedEnabled:(struct NSObject *)arg1;
- (id)_syncProgressAlbums;
- (void)setHiddenAlbum:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) BOOL allowsEditingAlbums;
- (void)setAlbumList:(struct NSObject *)arg1 contentMode:(int)arg2;
@property(readonly, nonatomic) int interfaceIdiom;
@property(readonly, nonatomic) int contentMode;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (void)editStreamOptionsForAlbum:(id)arg1;
- (id)subtitleForAlbum:(struct NSObject *)arg1;
- (BOOL)checkAndAlertSubscribedStreamsLimitReachedForAlbum:(id)arg1;
- (BOOL)subtitleForAlbumAllowsEmail;
- (void)deleteAlbum:(struct NSObject *)arg1;
- (void)increaseIgnoreReorderNotificationCount;
@property(readonly, nonatomic) BOOL hasContent;
@property(nonatomic) BOOL albumsListViewInSync;
@property(readonly, nonatomic) BOOL libraryViewVisible;
@property(retain, nonatomic) NSObject<PLAssetContainer> *openAlbum;
@property(getter=isSyncProgressVisible) BOOL syncProgressVisible;
@property(readonly, nonatomic) PLSyncProgressView *syncProgressView;
- (id)visibleCellViewForAlbumAtIndex:(unsigned int)arg1;
- (void)updateNavigationItemButtons;
- (void)updateAlbumListHeader;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 isReordering:(BOOL)arg4 needsFullReload:(BOOL)arg5;
- (void)updateInterfaceForHasContentChange;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)dismissSharedStreamOptionsViewController;
- (void)presentSharedStreamOptionsViewController:(id)arg1;
- (void)showInvitationConfirmationForAlbum:(id)arg1;
- (void)cancelAddPhotosSessionAnimated:(BOOL)arg1;
- (void)beginAddPhotosSessionForAlbum:(id)arg1 didShowHandler:(id)arg2 completionHandler:(void)arg3;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)hideAlbum:(struct NSObject *)arg1;

@end

