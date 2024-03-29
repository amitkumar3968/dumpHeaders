/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface ProgressController : NSObject
{
    BOOL _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;
- (void)suspend;
- (void)setLoadingData:(BOOL)arg1;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)userScrolled;
- (id)init;

@end

