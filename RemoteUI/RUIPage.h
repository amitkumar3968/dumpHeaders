/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, RUIObjectModel, RUITableView, RUIWebView, UIBarButtonItem, UIToolbar, UIView;

@interface RUIPage : UIViewController <UIWebViewDelegate>
{
    NSString *_pageID;
    UIView *_containerView;
    RUITableView *_tableViewOM;
    RUIWebView *_webViewOM;
    NSString *_validationFunction;
    BOOL _isLoading;
    NSString *_navTitle;
    NSString *_loadingTitle;
    NSDictionary *_rightNavigationBarButton;
    NSDictionary *_leftNavigationBarButton;
    BOOL _hidesBackButton;
    UIToolbar *_toolbar;
    NSDictionary *_rightToolbarButton;
    NSDictionary *_leftToolbarButton;
    UIBarButtonItem *_leftToolbarItem;
    UIBarButtonItem *_rightToolbarItem;
    UIBarButtonItem *_middleFlexSpace;
    UIBarButtonItem *_leftFlexSpace;
    RUIObjectModel *_objectModel;
    RUIPage *_parentPage;
    NSMutableArray *_childPages;
}

@property(readonly, nonatomic) RUIPage *parentPage; // @synthesize parentPage=_parentPage;
@property(nonatomic) RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(readonly, nonatomic) NSArray *childPages; // @synthesize childPages=_childPages;
@property(nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIBarButtonItem *leftToolbarItem; // @synthesize leftToolbarItem=_leftToolbarItem;
@property(retain, nonatomic) UIBarButtonItem *rightToolbarItem; // @synthesize rightToolbarItem=_rightToolbarItem;
@property(retain, nonatomic) NSDictionary *leftToolbarButton; // @synthesize leftToolbarButton=_leftToolbarButton;
@property(retain, nonatomic) NSDictionary *rightToolbarButton; // @synthesize rightToolbarButton=_rightToolbarButton;
@property(retain, nonatomic) NSDictionary *leftNavigationBarButton; // @synthesize leftNavigationBarButton=_leftNavigationBarButton;
@property(retain, nonatomic) NSDictionary *rightNavigationBarButton; // @synthesize rightNavigationBarButton=_rightNavigationBarButton;
@property(copy, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(retain, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)populatePostbackDictionary:(id)arg1;
- (BOOL)hasWebView;
@property(readonly, nonatomic) RUIWebView *webViewOM;
- (BOOL)hasTableView;
@property(readonly, nonatomic) RUITableView *tableViewOM;
- (void)_updateParentPage;
- (void)_updateWithCompletedChild:(id)arg1;
- (void)_addChildPage:(id)arg1;
- (void)_setParentPage:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (float)_getKeyboardIntersectionHeight;
- (void)_leftToolbarButtonPressed:(id)arg1;
- (void)_rightToolbarButtonPressed:(id)arg1;
- (void)_leftNavigationBarButtonPressed:(id)arg1;
- (void)_rightNavigationBarButtonPressed:(id)arg1;
- (void)_barButtonPressed:(id)arg1 isRight:(BOOL)arg2 isNavbar:(BOOL)arg3;
- (void)_updateToolbar;
- (void)setButton:(id)arg1 enabled:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *buttons;
- (id)_barButtonItemForDict:(id)arg1 action:(SEL)arg2;
- (void)setHasToolbar;
- (void)_updateNavItemTitle;
- (id)description;
- (id)init;

@end

