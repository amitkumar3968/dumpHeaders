/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SCRCTargetSelector : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;
- (id)target;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

