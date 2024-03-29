/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView;

@interface TPAudioDeviceView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_deviceTableView;
    UIView *_topBGView;
    UIView *_bottomBGView;
    UIView *_buttonView;
    UIView *_tableView;
    UIView *_subbedView;
    id _delegate;
    BOOL _subbedOutTable;
}

- (void)setDelegate:(id)arg1;
- (void)selectRow:(int)arg1;
- (void)reloadData;
- (void)setActiveRow:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_setupSurroundingTableViews;
- (void)_takedownTable;
- (void)_setupTable;
- (void)showTable;
- (void)suboutTable;
- (void)muteButtonPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)_takedownButtons;
- (void)_setupButtons;
- (id)_muteButtonForFrame:(struct CGRect)arg1;
- (struct CGRect)_frameForTable;
- (struct CGRect)_frameForNumButtons:(int)arg1;
- (id)_tableFooterImage;
- (id)_tableHeaderImage;
- (id)_muteImage;
- (id)_activeImage;
- (id)_unselectedImage;
- (id)_selectedImage;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

