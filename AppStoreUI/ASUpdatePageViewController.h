/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUViewController.h"

#import "ISURLOperationDelegate.h"

@class ASUpdatePageView, SUStructuredPage;

@interface ASUpdatePageViewController : SUViewController <ISURLOperationDelegate>
{
    SUStructuredPage *_page;
    ASUpdatePageView *_pageView;
}

- (void)_updatePageView;
- (id)_newApplicationIconOperationForItemImage:(id)arg1;
- (id)_itemArtworkImage;
- (id)_applicationIconURL;
- (id)_applicationIcon;
- (id)_activeItem;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

