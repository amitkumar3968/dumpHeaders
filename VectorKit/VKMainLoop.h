/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, NSMutableArray, NSObject<OS_dispatch_source>;

@interface VKMainLoop : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableArray *_animations[2];
    NSMutableArray *_canvasList;
    BOOL _applicationInBackground;
    struct __CFRunLoop *_displayLinkRunLoop;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _rate;
    BOOL _isDebugRateForced;
    int _debugForcedRate;
    int _backgroundableCanvasCount;
}

+ (id)sharedInstance;
@property(nonatomic) int rate; // @synthesize rate=_rate;
- (void)_receivedMemoryNotification;
- (void)performBlock:(id)arg1;
- (void)removeBackgroundableCanvas;
- (void)addBackgroundableCanvas;
- (void)removeCanvas:(id)arg1;
- (void)addCanvas:(id)arg1;
- (double)resumeAnimation:(id)arg1;
- (double)pauseAnimation:(id)arg1;
- (void)removeAnimation:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)displayTimerFired:(id)arg1;
- (void)updateLinkState;
- (void)didEnterBackground;
- (void)willEnterForeground;
@property(nonatomic) int trueRate;
- (void)forceTrueRate:(int)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (id)init;

@end

