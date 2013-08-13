/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface IMDAppleIDNotification : NSObject
{
    NSString *_appleID;
    NSString *_deviceName;
    NSMutableSet *_aliases;
    NSMutableSet *_sessions;
    NSMutableSet *_serviceTypes;
}

@property(retain, nonatomic) NSMutableSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(retain, nonatomic) NSMutableSet *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSMutableSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)addSession:(id)arg1;
- (void)addServiceType:(int)arg1;
- (void)addAlias:(id)arg1;
- (void)dealloc;
- (id)init;

@end

