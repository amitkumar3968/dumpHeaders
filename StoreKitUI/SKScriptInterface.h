/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SUScriptInterface.h"

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface
{
    SKProductPageViewController *_parentProductPageViewController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
@property(nonatomic) __weak SKProductPageViewController *parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2;
- (id)makeStoreSheetRequest;

@end

