/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SCROBrailleDisplayHistory : NSObject
{
    struct __CFArray *_announcements;
    struct __CFArray *_unreadSnapshot;
    long _currentIndex;
    long _unreadCount;
}

+ (void)initialize;
- (void)moveToMostRecent;
- (BOOL)isOnMostRecent;
- (BOOL)_moveIndexBy:(long)arg1;
- (BOOL)moveToPrevious;
- (BOOL)moveToNext;
- (id)currentString;
- (BOOL)hasUnread;
- (void)markSnapshotAsRead;
- (void)snapshotUnread;
- (void)addString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

