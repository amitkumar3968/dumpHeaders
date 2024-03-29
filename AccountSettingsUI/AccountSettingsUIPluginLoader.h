/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, PSViewController;

@interface AccountSettingsUIPluginLoader : NSObject
{
    PSViewController *_parentController;
    NSMutableArray *_bundles;
    BOOL _includeNonAccountBundles;
}

- (void)invalidatePluginParentController;
- (id)pluginsWithCommonsSpecifiers;
- (id)pluginsWithLazilyLoadedCommonSpecifiers;
- (id)pluginsWithEagerlyLoadedCommonSpecifiers;
- (id)_pluginsWithCommonSpecifierMode:(int)arg1;
- (id)orderedPluginsForAdd;
- (id)pluginsForAccountTypes:(id)arg1;
@property(readonly) NSArray *plugins;
- (void)dealloc;
- (id)initWithParentController:(id)arg1 includeNonAccountBundles:(BOOL)arg2;
- (void)_addBundleWithName:(id)arg1 commonSpecifierMode:(int)arg2 accountTypes:(id)arg3;

@end

