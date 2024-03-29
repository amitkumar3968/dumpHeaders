/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "ISURLOperationDelegate.h"
#import "SUMenuViewControllerDelegate.h"
#import "SUPreviewOverlayContainer.h"
#import "UIPopoverControllerDelegate.h"

@class ISURLRequestPerformance, NSString, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties, SUNavigationMenuViewController, SUPageSectionGroup, SUSearchFieldController, SUSegmentedControl, SUStorePageProtocol, UIPopoverController;

@interface SUStorePageViewController : SUViewController <SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    struct __CFSet *_allowedInterfaceOrientations;
    double _expirationTime;
    int _pageType;
    SUViewController *_pendingChildViewController;
    NSString *_scriptUserInfo;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    BOOL _canMoveToOverlay;
    BOOL _externalRequest;
    BOOL _loadingForSectionChange;
    BOOL _loadsWhenHidden;
    BOOL _reloadOnAppear;
    BOOL _reloadsWhenCacheExpired;
    SSAuthenticationContext *_authContext;
    SSMutableURLRequestProperties *_urlRequestProperties;
    BOOL _needsAuthentication;
    int _activeSectionIndex;
    SUPageSectionGroup *_sectionsGroup;
    SUSegmentedControl *_segmentedControl;
    id <SUStorePageViewControllerDelegate> _delegate;
    BOOL _lastLoadDidFail;
    id _loadBlock;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _useWebViewFastPath;
}

@property(nonatomic) BOOL canMoveToOverlay; // @synthesize canMoveToOverlay=_canMoveToOverlay;
@property(readonly, nonatomic) SUSegmentedControl *sectionSegmentedControl; // @synthesize sectionSegmentedControl=_segmentedControl;
@property(readonly, nonatomic) SUPageSectionGroup *sectionGroup; // @synthesize sectionGroup=_sectionsGroup;
@property(readonly, nonatomic) SUSearchFieldController *searchFieldController; // @synthesize searchFieldController=_searchFieldController;
@property(copy, nonatomic) NSString *scriptUserInfo; // @synthesize scriptUserInfo=_scriptUserInfo;
@property(nonatomic, getter=_reloadsWhenCacheExpired, setter=_setReloadsWhenCacheExpired:) BOOL _reloadsWhenCacheExpired; // @synthesize _reloadsWhenCacheExpired;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) BOOL loadsWhenHidden; // @synthesize loadsWhenHidden=_loadsWhenHidden;
@property(nonatomic, getter=isExternalRequest) BOOL externalRequest; // @synthesize externalRequest=_externalRequest;
@property(nonatomic) id <SUStorePageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authContext;
@property(readonly, nonatomic) SUViewController *activeChildViewController; // @synthesize activeChildViewController=_activeChildViewController;
- (void)_verifyStorePageProtocol:(id)arg1;
- (void)_tearDownNavigationMenu;
- (void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1;
- (BOOL)_shouldReloadForAppearance;
- (BOOL)_shouldDisplayControlsInNavigationBar;
- (BOOL)_shouldFetchAutomatically;
- (void)_setRightNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(int)arg2;
- (void)_setAllowedOrientations:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2;
- (BOOL)_sectionIsNetworkConstrained;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_renderStorePage:(id)arg1 withType:(int)arg2 viewController:(id)arg3 block:(id)arg4;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (void)_reloadSectionButtons;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)_reloadNavigationMenus;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationBar;
- (void)_reloadForAppearance:(BOOL)arg1;
- (void)_performActionForProtocolButton:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(int)arg2 withButtonItem:(id)arg3;
- (void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (BOOL)_isInTransientViewController;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (void)_handleFailureWithError:(id)arg1;
- (struct CGRect)_frameForActiveViewController;
- (void)_finishSuccessfulLoad;
- (void)_finishHandlingFailure;
- (void)_fetchPage:(BOOL)arg1;
- (double)_expirationTime;
- (void)_displaySegmentedControl:(id)arg1;
- (void)_dismissNavigationMenuViewController;
- (void)_applyPropertiesToViewController:(id)arg1;
- (id)_activePageSection;
- (id)_activeChildViewController;
- (BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1;
- (void)_setSegmentedControl:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic, getter=_isCacheExpired) BOOL _cacheExpired;
- (void)_sectionControlAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_navigationButtonAction:(id)arg1;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_scriptEventNotification:(id)arg1;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (void)_documentBoundsChangeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (BOOL)isShowingPreviewOverlay;
- (void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didTapButton:(id)arg2;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)viewIsReady;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (BOOL)reloadWithURLRequestProperties:(id)arg1;
- (void)reload;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3;
- (id)newRotationController;
- (id)navigationItemForScriptInterface;
- (void)loadView;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1;
- (id)iTunesStoreUI_searchFieldController;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)invalidateForMemoryPurge;
- (void)invalidate;
- (void)handleStoreFailureWithError:(id)arg1;
- (void)handleApplicationURL:(id)arg1;
@property(readonly, nonatomic) struct CGRect documentBounds;
- (id)displayedURL;
- (void)didMoveToParentViewController:(id)arg1;
- (double)defaultPNGExpirationTime;
- (id)copyScriptViewController;
- (id)copyScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)URLRequest;
- (id)urlBagKey;
- (void)setURLRequest:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties;
- (void)showPlaceholderViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 ofType:(int)arg2 forURL:(id)arg3;
- (BOOL)isLoaded;
- (void)handleFailureWithError:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id *)arg3;
- (id)newPlaceholderViewController;
- (id)newFetchOperation;
- (void)enqueueFetchOperationForPageSection:(id)arg1;
- (void)enqueueFetchOperation;
- (void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
@property(readonly, nonatomic) BOOL canBeResolved;
- (void)dealloc;
- (id)init;

@end

