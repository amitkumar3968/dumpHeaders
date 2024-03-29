/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MSPlatform <NSObject>
- (id)theDaemon;
- (id)authTokenForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)socketOptions;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)UDID;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (id)pathMediaStreamDir;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void *)arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void *)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;

@optional
- (BOOL)isPerformanceLoggingEnabled;
- (id)pushToken;
- (id)pushTokenForPersonID:(id)arg1;
- (BOOL)policyMaySendDelete;
- (void)didDetectUnrecoverableCondition;
- (Class)deletePluginClass;
@end

