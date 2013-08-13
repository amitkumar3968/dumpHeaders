/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AXDisplayLinkManagerTargetAction : NSObject
{
    id _target;
    SEL _actionSelector;
    int _frameInterval;
    int _displayDidRefreshCount;
}

@property(nonatomic, setter=_setDisplayDidRefreshCount:) int _displayDidRefreshCount; // @synthesize _displayDidRefreshCount;
@property(nonatomic, setter=_setFrameInterval:) int _frameInterval; // @synthesize _frameInterval;
@property(nonatomic, setter=_setActionSelector:) SEL _actionSelector; // @synthesize _actionSelector;
@property(retain, nonatomic, setter=_setTarget:) id _target; // @synthesize _target;
- (void)displayDidRefresh:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(int)arg3;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;

@end

