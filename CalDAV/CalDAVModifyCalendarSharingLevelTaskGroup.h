/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    int _action;
    NSURL *_url;
    int _state;
}

@property int state; // @synthesize state=_state;
@property(retain) NSURL *url; // @synthesize url=_url;
@property int action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)description;
- (void)dealloc;
- (id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

@end

