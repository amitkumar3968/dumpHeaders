/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "OADClient.h"
#import "OADTextClient.h"

@class OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient>
{
    WDAAnchor *mAnchor;
    WDATextBox *mTextBox;
    OADDrawable *mDrawable;
    int mTextType;
}

+ (Class)classForType:(unsigned short)arg1;
@property(readonly, nonatomic) WDAAnchor *anchor; // @synthesize anchor=mAnchor;
- (BOOL)hasText;
- (BOOL)floating;
- (void)setTextType:(int)arg1;
- (int)textType;
- (_Bool)isTopLevelObject;
- (_Bool)isLine;
- (_Bool)isShape;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)setTextBox:(id)arg1;
- (id)textBox;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (BOOL)hasBounds;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (void)clearAnchor;
- (id)createAnchor;
- (void)dealloc;
- (id)init;

@end
