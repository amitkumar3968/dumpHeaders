/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol AccountSettingsUIPlugin <NSObject>
- (id)initWithParentController:(id)arg1;

@optional
- (void)invalidateParentController;
- (id)localizedDetailsForAccount:(id)arg1;
- (id)collectionNavigationTitle;
- (id)collectionDisplayName;
- (id)footerTextForGroupSpecifier;
- (id)commonSpecifiersWithOptions:(id)arg1;
- (id)displayName;
- (id)accountAddTypes;
- (id)accounts;
@end
