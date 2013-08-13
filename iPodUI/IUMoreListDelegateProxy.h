/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UITableViewDelegate.h"

@class UINavigationController;

@interface IUMoreListDelegateProxy : NSObject <UITableViewDelegate>
{
    UINavigationController *_moreListNavigationController;
    id _originalTableDelegate;
}

- (id)_table;
- (id)_navigationControllerForRow:(int)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;

@end

