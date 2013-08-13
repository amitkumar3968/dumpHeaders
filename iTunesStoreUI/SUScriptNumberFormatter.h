/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject
{
    NSNumberFormatter *_numberFormatter;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(retain) NSString *style;
@property(retain) NSString *localeIdentifier;
- (id)stringFromNumber:(id)arg1;
- (id)numberFromString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

