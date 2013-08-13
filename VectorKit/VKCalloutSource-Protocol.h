/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIView;

@protocol VKCalloutSource <NSObject>
@property(readonly, nonatomic) NSString *title;
- (id)debugAnchorPointString;
- (void)setCalloutView:(id)arg1;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1;

@optional
@property(readonly, nonatomic) UIView *rightCalloutAccessoryView;
@property(readonly, nonatomic) UIView *leftCalloutAccessoryView;
@property(readonly, nonatomic) NSString *subtitle;
@end

