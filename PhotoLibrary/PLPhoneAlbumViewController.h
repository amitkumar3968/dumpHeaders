/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PhotoLibrary/PLAlbumViewController.h>

#import "MFMailComposeViewControllerDelegate.h"
#import "PLAbstractAlbumPickerViewControllerDelegate.h"
#import "PLActivityViewControllerDelegate.h"
#import "PLPhotosPickerSessionParticipant.h"
#import "PLSlideshowSettingsViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSTimer, PLActivityViewController, PLAlbumPickerViewController, PLManagedAsset, PLPhotosPickerSession, PLProgressView, PLSegmentedControl, PLVideoRemaker, UIActionSheet, UIAlertView, UIBarButtonItem, UINavigationController, UIViewController;

@interface PLPhoneAlbumViewController : PLAlbumViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, PLAbstractAlbumPickerViewControllerDelegate, PLActivityViewControllerDelegate, PLPhotosPickerSessionParticipant, PLSlideshowSettingsViewControllerDelegate>
{
    PLSegmentedControl *_filterControl;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_addToFromItem;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_doneItem;
    NSMutableArray *_shareButtonTitles;
    UINavigationController *_composeNavigationController;
    UIActionSheet *_actionSheet;
    NSArray *_moveSheetActions;
    PLAlbumPickerViewController *_albumPickerController;
    UIAlertView *_createAlbumAlert;
    unsigned int _dataInsertionCount;
    unsigned int _showPhotosVideosFilter:1;
    unsigned int _remaking:1;
    unsigned int _trimmingForMMS:1;
    unsigned int _didSetPublishCapabilities:1;
    unsigned int _deviceCannotShareVideo:1;
    unsigned int _remakingWasCancelled:1;
    unsigned int _toolbarWasHiddenWhenSelfWasPushed:1;
    unsigned int _forceHideToolbar:1;
    unsigned int _didSetHDVideoUploadCapability:1;
    unsigned int _canUploadHDVideoOver3G:1;
    unsigned int _remakeAfterPublish:1;
    unsigned int _canPlaySlideshow:1;
    unsigned int _ignoreAlbumDidChangeNotification:1;
    unsigned int _hasChangesInEditSession:1;
    int _selectedImageCount;
    int _selectedVideoCount;
    int _selectedUnknownCount;
    int _selectedPlaceholderCount;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    SEL _completionSelector;
    PLManagedAsset *_currentVideo;
    NSDictionary *_trimDictionary;
    int _previousAlbumFilter;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLPhotosPickerSession *_currentPickerSession;
    PLActivityViewController *_activityViewController;
    UIViewController *_slideshowSettingsViewController;
    id _nextViewDidLayoutSubviewsHandler;
    id _activityTarget;
    SEL _activityAction;
    int allowedAlbumViewActions;
}

@property(retain, nonatomic) PLPhotosPickerSession *currentPickerSession; // @synthesize currentPickerSession=_currentPickerSession;
@property int allowedAlbumViewActions; // @synthesize allowedAlbumViewActions;
@property(retain, nonatomic) UIBarButtonItem *doneItem;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayService:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayService:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)_sendViaMMS;
- (void)_sendViaEmail;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2 completionSelector:(SEL)arg3;
- (BOOL)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (void)_showRemakerProgressView:(BOOL)arg1;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_clearPublishingAgentIfCurrent:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_updateProgressView;
- (id)_currentPublishingAgent;
- (void)_showMMSCompositionForVideo:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)_showTextMessageComposition:(id)arg1;
- (void)_showMailCompositionForVideo:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showMailCompositionForPhotos:(id)arg1;
- (void)_fadeOutAnimation:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_fadeOut;
- (id)editButtonItem;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)selectedPhotos;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_dismissActionSheet;
- (void)_presentActionSheet;
- (void)_showCreateAlbumDialogWithPhotos:(id)arg1;
- (void)_showAlbumPickerToAddPhotos:(id)arg1 removeFromCurrentAlbum:(BOOL)arg2;
- (void)_showDeleteConfirmation:(id)arg1;
- (void)_removeSelectedItems;
- (void)_deleteSelectedItems;
- (void)_saveAssetsToCameraRoll:(id)arg1;
- (void)_showMoveActions:(id)arg1;
- (void)_copySelectedItems:(id)arg1;
- (void)activityViewControllerDidDismiss:(id)arg1;
- (void)_displayActivitySheet:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject *)arg1;
- (void)_toggleEditing:(id)arg1;
- (void)_playSlideshow;
- (void)_endSlideshowSettings;
- (void)_showSlideshowSettings:(id)arg1;
- (void)_updateTopRightButtonAnimated:(BOOL)arg1;
- (void)_updateActionButtons;
- (id)_actionToolbarItems;
- (id)_defaultToolbarItems;
- (id)_tabBar;
@property BOOL canPlaySlideshow;
- (BOOL)_shouldShowActionButton;
- (void)_updateToolbarVisibilityAnimated:(BOOL)arg1 updateItems:(BOOL)arg2;
- (void)_mailAccountsDidChange:(id)arg1;
- (void)libraryDidChange:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)_filterWasToggled:(id)arg1;
- (BOOL)_isPerformingModalTransitionFromCamera;
- (BOOL)_allowSavingToCameraRoll;
- (int)_allowedDeleteOperation;
- (BOOL)_canAddToAssets;
- (BOOL)_canAddAssets;
- (BOOL)_isCameraAlbum;
- (BOOL)_shouldApplyRecentsFilterInitially;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)_restoreAlbumViewSelectionFromPickerSession;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)albumPickerController:(id)arg1 shouldEnableAlbum:(id)arg2;
- (BOOL)_canEmailMedia;
- (BOOL)_canUploadHDVideo;
- (void)albumView:(id)arg1 didTapPhotoAtIndexPath:(id)arg2;
- (void)albumViewSelectionDidChange:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (BOOL)albumView:(id)arg1 canSelectPhotoAtIndexPath:(id)arg2;
- (void)albumViewPhotoMoveDidComplete:(id)arg1;
- (void)albumView:(id)arg1 movePhotoAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)performBlockAfterNextViewDidLayoutSubviews:(id)arg1;
- (void)scrollToRevealPhoto:(id)arg1 animated:(BOOL)arg2;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 toComment:(id)arg2 animated:(BOOL)arg3;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 animated:(BOOL)arg2;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 animated:(BOOL)arg2 delayImageLoading:(BOOL)arg3;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 toComment:(id)arg2 animated:(BOOL)arg3 delayImageLoading:(BOOL)arg4;
- (void)setCurrentFilter:(int)arg1;
@property(nonatomic) BOOL showPhotosVideosFilter;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)setShowingEmptyAlbumView:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_loadConfiguration:(id)arg1;
- (void)_saveConfiguration:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1;

@end

