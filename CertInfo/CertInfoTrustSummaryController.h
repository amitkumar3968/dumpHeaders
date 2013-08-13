/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

@class UIBarButtonItem, UITableViewCell;

@interface CertInfoTrustSummaryController : UITableViewController
{
    id <CertInfoTrustDescription> _description;
    id <CertInfoTrustSummaryControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    unsigned int _showsDoneButton:1;
}

@property(nonatomic) id <CertInfoTrustSummaryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)_descriptionCell;
- (id)_headerCell;
- (id)_cellForReuseIdentifier:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) BOOL showsDoneButton;
- (void)dealloc;
- (id)initWithTrustDescription:(id)arg1;

@end
