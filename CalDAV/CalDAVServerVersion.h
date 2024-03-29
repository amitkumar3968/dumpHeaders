/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying>
{
    double _version;
    BOOL _supportsTimeRangeFilter;
    BOOL _supportsTodoTimeRangeFilter;
    BOOL _supportsTimeRangeFilterWithoutEndDate;
    BOOL _supportsTimeRangeFilterOnInbox;
    BOOL _supportsAutoSchedule;
    BOOL _supportsPrivateComments;
    BOOL _supportsSharing;
    BOOL _supportsSharingNoScheduling;
    BOOL _supportsCalendarProxy;
    BOOL _supportsInboxAvailability;
    BOOL _supportsPrivateEvents;
    BOOL _supportsSubscriptionCalendars;
    BOOL _supportsPrincipalPropertySearch;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _supportsRequestCompression;
    BOOL _supportsManagedAttachments;
    NSString *_supportedCalendarComponentSets;
    NSSet *_complianceClasses;
    NSString *_serverHeader;
}

+ (id)versionWithPropertyValue:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)_prototypeMatchingServerHeaders:(id)arg1;
@property(copy, nonatomic) NSString *supportedCalendarComponentSets; // @synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets;
@property(nonatomic) BOOL supportsManagedAttachments; // @synthesize supportsManagedAttachments=_supportsManagedAttachments;
@property(nonatomic) BOOL supportsRequestCompression; // @synthesize supportsRequestCompression=_supportsRequestCompression;
@property(nonatomic) BOOL supportsExtendedCalendarQuery; // @synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery;
@property(copy, nonatomic) NSString *serverHeader; // @synthesize serverHeader=_serverHeader;
@property(retain, nonatomic) NSSet *complianceClasses; // @synthesize complianceClasses=_complianceClasses;
@property(nonatomic) BOOL supportsPrincipalPropertySearch; // @synthesize supportsPrincipalPropertySearch=_supportsPrincipalPropertySearch;
@property(nonatomic) BOOL supportsSubscriptionCalendars; // @synthesize supportsSubscriptionCalendars=_supportsSubscriptionCalendars;
@property(nonatomic) BOOL supportsPrivateEvents; // @synthesize supportsPrivateEvents=_supportsPrivateEvents;
@property(nonatomic) BOOL supportsInboxAvailability; // @synthesize supportsInboxAvailability=_supportsInboxAvailability;
@property(nonatomic) BOOL supportsCalendarProxy; // @synthesize supportsCalendarProxy=_supportsCalendarProxy;
@property(nonatomic) BOOL supportsSharingNoScheduling; // @synthesize supportsSharingNoScheduling=_supportsSharingNoScheduling;
@property(nonatomic) BOOL supportsSharing; // @synthesize supportsSharing=_supportsSharing;
@property(nonatomic) BOOL supportsPrivateComments; // @synthesize supportsPrivateComments=_supportsPrivateComments;
@property(nonatomic) BOOL supportsAutoSchedule; // @synthesize supportsAutoSchedule=_supportsAutoSchedule;
@property(nonatomic) BOOL supportsTimeRangeFilterOnInbox; // @synthesize supportsTimeRangeFilterOnInbox=_supportsTimeRangeFilterOnInbox;
@property(nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate; // @synthesize supportsTimeRangeFilterWithoutEndDate=_supportsTimeRangeFilterWithoutEndDate;
@property(nonatomic) BOOL supportsTodoTimeRangeFilter; // @synthesize supportsTodoTimeRangeFilter=_supportsTodoTimeRangeFilter;
@property(nonatomic) BOOL supportsTimeRangeFilter; // @synthesize supportsTimeRangeFilter=_supportsTimeRangeFilter;
@property(nonatomic) double version; // @synthesize version=_version;
- (id)propertyValue;
@property(readonly, nonatomic) NSString *type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (id)_allFlagKeys;
- (id)_additionalFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)dealloc;

@end

