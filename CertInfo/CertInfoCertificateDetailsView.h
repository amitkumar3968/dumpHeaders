/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "UITableViewDataSource.h"

@class NSMutableArray, UITableView;

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_tableSections;
}

- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_detailForIndexPath:(id)arg1;
- (id)_titleForIndexPath:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 certificateProperties:(id)arg2;
- (id)_sectionsFromProperties:(id)arg1;
- (id)_sectionInfoForCertSection:(id)arg1 title:(id)arg2;
- (id)_cellInfosForSection:(id)arg1;
- (void)appendInfoFromCertView:(id)arg1;

@end

