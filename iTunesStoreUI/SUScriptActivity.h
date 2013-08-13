/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUActivity, SUScriptFunction, WebScriptObject;

@interface SUScriptActivity : SUScriptObject
{
    SUScriptFunction *_actionFunction;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_performActionFunctionWithItems:(id)arg1;
- (id)_nativeActivity;
@property(readonly) NSString *activityImageNameWishlistMusicStore;
@property(readonly) NSString *activityImageNameWishlistAppStore;
@property(readonly) NSString *activityImageNamePingMusicStore;
@property(readonly) NSString *activityImageNamePingAppStore;
@property(readonly) NSString *activityImageNameGiftMusicStore;
@property(readonly) NSString *activityImageNameGiftAppStore;
- (void)setActivityImageWithURL:(id)arg1 scale:(id)arg2;
- (void)setActivityImageWithName:(id)arg1;
@property(copy) NSString *activityType;
@property(copy) NSString *activityTitle;
@property(retain) WebScriptObject *actionFunction;
- (id)_className;
@property(readonly, nonatomic) SUActivity *nativeActivity;
- (void)dealloc;

@end

