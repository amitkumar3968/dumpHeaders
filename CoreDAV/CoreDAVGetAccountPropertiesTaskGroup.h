/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskDelegate.h"

@class NSMutableSet, NSSet, NSString, NSURL;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate>
{
    NSURL *_principalURL;
    NSString *_displayName;
    NSURL *_resourceID;
    NSSet *_emailAddresses;
    NSSet *_collections;
    NSSet *_principalSearchProperties;
    BOOL _isExpandPropertyReportSupported;
    BOOL _fetchPrincipalSearchProperties;
    BOOL _shouldIgnoreHomeSetOnDifferentHost;
    NSMutableSet *_redirectHistory;
}

@property(nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost; // @synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost;
@property(readonly) NSSet *principalSearchProperties; // @synthesize principalSearchProperties=_principalSearchProperties;
@property BOOL fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;
@property(readonly) BOOL isExpandPropertyReportSupported; // @synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported;
@property(readonly) NSSet *collections; // @synthesize collections=_collections;
@property(readonly) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (void)processPrincipalHeaders:(id)arg1;
- (void)coaxServerForPrincipalHeaders;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (BOOL)forceOptionsRequest;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)startTaskGroup;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(nonatomic) id <CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate; // @dynamic delegate;

@end

