/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask
{
}

- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (BOOL)validate:(id *)arg1;
- (void)dealloc;
- (id)httpMethod;

// Remaining properties
@property(nonatomic) id <CoreDAVCopyTaskDelegate> delegate; // @dynamic delegate;

@end

