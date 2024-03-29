/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MPTransitionController.h"

@class IUMusicCoverFlowController, MPViewController<IUCoverFlowTransitionViewController>;

@interface IUCoverFlowTransitionController : MPTransitionController
{
    IUMusicCoverFlowController *_coverFlowController;
    MPViewController<IUCoverFlowTransitionViewController> *_otherController;
    unsigned int _rotate:1;
}

- (void)coverFlowWillTransitionOut:(id)arg1 animate:(BOOL)arg2;
- (void)coverFlowWillTransitionIn:(id)arg1 animate:(BOOL)arg2;
- (void)prepareForCoverFlowTransitionIn:(id)arg1 animate:(BOOL)arg2;
- (void)coverFlowDidTransitionOut:(id)arg1;
- (void)coverFlowDidTransitionIn:(id)arg1;
- (id)coverFlowControllerInitialTransitionImage:(id)arg1;
- (struct CGRect)coverFlowTransitionFrameForController:(id)arg1;
@property(nonatomic) BOOL rotate;
- (void)performTransition:(unsigned int)arg1;
- (void)dealloc;

@end

