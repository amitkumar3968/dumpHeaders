/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class Protocol;

@interface IUProtocolForwarder : NSObject
{
    id _target;
    Protocol *_protocol;
}

- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_respondsToProtocolSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) id target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end

