/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppSupport/InvocationTrampoline.h>

@interface DelayedInvocationTrampoline : InvocationTrampoline
{
    double _delay;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2;

@end

