/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPropFindTaskDelegate.h"

@class CoreDAVPropFindTask, ICSDocument, NSURL;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate>
{
    NSURL *_inboxURL;
    CoreDAVPropFindTask *_fetchTask;
    ICSDocument *_calendarAvailability;
}

@property(retain) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain) ICSDocument *calendarAvailability; // @synthesize calendarAvailability=_calendarAvailability;
@property(retain) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)_finishWithError:(id)arg1;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;

@end

