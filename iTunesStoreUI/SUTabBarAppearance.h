/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary, UIImage;

@interface SUTabBarAppearance : NSObject <NSCopying>
{
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    float _tabBarButtonSpacing;
    float _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(nonatomic) float tabBarButtonWidth; // @synthesize tabBarButtonWidth=_tabBarButtonWidth;
@property(nonatomic) float tabBarButtonSpacing; // @synthesize tabBarButtonSpacing=_tabBarButtonSpacing;
@property(retain, nonatomic) UIImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(retain, nonatomic) UIImage *selectedDividerImage; // @synthesize selectedDividerImage=_selectedDividerImage;
@property(retain, nonatomic) UIImage *dividerImage; // @synthesize dividerImage=_dividerImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)enumerateTitleTextAttributesUsingBlock:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

