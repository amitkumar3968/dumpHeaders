/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICoverFlowLayer.h"

@class NSInvocation;

@interface IUMusicCoverFlowLayer : UICoverFlowLayer
{
    NSInvocation *_endTransitionInvocation;
}

- (void)transition:(unsigned int)arg1 withCoverFrame:(struct CGRect)arg2;
- (void)forceCurrentTransitionToEnd;
- (void)noteCurrentTransitionDidEnd;
- (void)_endTransition:(unsigned int)arg1 withCoverFrame:(struct CGRect)arg2;
- (BOOL)isInAnimatedTransition;
- (void)dealloc;

@end

