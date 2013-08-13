/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSKeyValueStore;

@interface SUScriptKeyValueStore : SUScriptObject
{
    NSString *_domain;
    SSKeyValueStore *_keyValueStore;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)_popStoreWithDomain:(id)arg1;
+ (id)_checkOutStoreWithDomain:(id)arg1;
- (id)_className;
- (id)valueForKey:(id)arg1;
- (void)setValueForKey:(id)arg1 value:(id)arg2;
- (void)removeValueForKey:(id)arg1;
- (void)removeAllValues;
- (void)getValueForKey:(id)arg1 usingFunction:(id)arg2;
- (void)dealloc;
- (id)initWithDomain:(id)arg1;

@end

