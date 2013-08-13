/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate>
{
    NSURL *_homeURL;
    NSURL *_cardURL;
}

@property(readonly) NSURL *homeURL; // @synthesize homeURL=_homeURL;
@property(readonly) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)startTaskGroup;
- (id)_newPropPatchTask;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4;

@end

