/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CoreDAVResourceTypeItem.h"

@class CoreDAVItemWithNoChildren;

@interface CoreDAVResourceTypeItem (BookmarkDAVExtensions)
@property(retain) CoreDAVItemWithNoChildren *bookmarkMenuFolder;
@property(retain) CoreDAVItemWithNoChildren *bookmarkBarFolder;
@property(retain) CoreDAVItemWithNoChildren *bookmarkFolder;
- (void)setExtraChild:(id)arg1 forNameSpace:(id)arg2 name:(id)arg3;
- (id)extraChildWithNameSpace:(id)arg1 name:(id)arg2;
@end

