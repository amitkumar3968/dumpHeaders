/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AccessibilityUtilities/AXTimer.h>

@class AXThreadTimerTask, NSThread;

@interface AXThreadTimer : AXTimer
{
    NSThread *_thread;
    id _cancelBlock;
    AXThreadTimerTask *_task;
}

@property(retain, nonatomic) AXThreadTimerTask *task; // @synthesize task=_task;
- (void)dealloc;
- (BOOL)isPending;
- (BOOL)isCancelled;
- (void)cancel;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2 cancelBlock:(void)arg3;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)_runAfterDelay:(id)arg1;
- (id)initWithThread:(id)arg1;

@end

