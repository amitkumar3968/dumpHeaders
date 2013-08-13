/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/PSViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView;

@interface PSMovableListController : PSViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    struct __CFArray *_ordering;
    struct __CFSet *_disabledDomains;
    BOOL _isDirty;
}

- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateCell:(id)arg1 forDomain:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)_saveIfNecessary;
- (int)domainForIndexRow:(unsigned int)arg1;
- (id)stringForDomain:(int)arg1;
- (id)init;
- (void)_loadEnabledState;
- (void)_loadOrdering;
- (id)displayNameForExtendedDomain:(int)arg1;
- (void)removeUnwantedDomains;
- (void)defaultOrdering;
- (id)keyForDomain:(int)arg1;
- (int)domainCount;
- (int)domainForKey:(id)arg1;
- (id)allDomainKeys;
- (struct __CFString *)defaultDomain;
- (struct __CFString *)disabledKey;
- (struct __CFString *)reorderingKey;

@end
