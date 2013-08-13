/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class UIColor;

@interface SUScriptColor : SUScriptObject
{
    UIColor *_color;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) float red;
@property(readonly) float green;
- (id)_className;
@property(readonly) float blue;
@property(readonly) float alpha;
- (void)setWhite:(float)arg1 alpha:(float)arg2;
- (void)setRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)stringRepresentation;
@property(readonly) UIColor *nativeColor;
- (struct CGColor *)copyCGColor;
- (void)dealloc;
- (id)initWithStyleString:(id)arg1;
- (id)initWithUIColor:(id)arg1;

@end

