/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject
{
    struct DisplayRefreshMonitor *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)invalidate;
- (void)handleDisplayLink:(id)arg1;
- (void)dealloc;
- (id)initWithMonitor:(struct DisplayRefreshMonitor *)arg1;

@end

