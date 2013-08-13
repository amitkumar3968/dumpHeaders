/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCondition;

@interface AVCallbackHandler : NSObject
{
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property SEL mainThreadAction; // @synthesize mainThreadAction=_mainThreadAction;
@property SEL action; // @synthesize action=_action;
@property id target; // @synthesize target=_target;
- (BOOL)hasParams;
- (id)waitForCallbackParams;
- (void)setCallbackParams:(id)arg1;
- (void)dealloc;
- (id)init;

@end

