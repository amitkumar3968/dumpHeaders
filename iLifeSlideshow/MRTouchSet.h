/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface MRTouchSet : NSObject
{
    NSMutableSet *_touches;
    NSMutableDictionary *_touchesForUITouches;
}

@property(readonly) NSSet *touches; // @synthesize touches=_touches;
- (id)description;
@property(readonly) BOOL isActive;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) struct CGPoint centroid;
- (void)updateWithUITouches:(id)arg1 inView:(id)arg2;
- (id)initWithUITouches:(id)arg1 inView:(id)arg2;
- (void)cancelAllTouches;
- (void)removeAllTouches;
- (void)removeTouch:(id)arg1;
- (void)addTouch:(id)arg1;
- (void)dealloc;
- (id)initWithTouches:(id)arg1;
- (id)initWithTouch:(id)arg1;

@end

