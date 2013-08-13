/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface AlarmManager : NSObject
{
    NSString *_defaultSound;
    int _defaultSoundType;
    BOOL _dirty;
    NSMutableArray *_alarms;
    NSMutableArray *logMessageList;
    BOOL invalidAlarmsDetected;
    NSDate *lastModified;
}

+ (id)copyReadAlarmsFromPreferences;
+ (void)writeAlarmsToPreferences:(id)arg1;
+ (BOOL)discardOldVersion;
+ (BOOL)upgrade;
+ (BOOL)isAlarmNotification:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(nonatomic) BOOL invalidAlarmsDetected; // @synthesize invalidAlarmsDetected;
@property(retain, nonatomic) NSMutableArray *logMessageList; // @synthesize logMessageList;
- (void)handleNotificationFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1;
- (void)handleAnyNotificationChanges;
- (void)reloadScheduledNotificationsWithRefreshActive:(BOOL)arg1 cancelUnused:(BOOL)arg2;
- (void)reloadScheduledNotifications;
- (void)loadScheduledNotificationsWithCancelUnused:(BOOL)arg1;
- (void)loadScheduledNotifications;
- (void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2;
- (void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2;
- (void)setAlarm:(id)arg1 active:(BOOL)arg2;
- (void)removeAlarm:(id)arg1;
- (void)updateAlarm:(id)arg1 active:(BOOL)arg2;
- (void)addAlarm:(id)arg1 active:(BOOL)arg2;
- (id)nextAlarmForDate:(id)arg1 activeOnly:(BOOL)arg2 allowRepeating:(BOOL)arg3;
- (id)alarmWithIdUrl:(id)arg1;
- (id)alarmWithId:(id)arg1;
- (BOOL)checkIfAlarmsModified;
- (void)saveAlarms;
- (void)unloadAlarms;
- (void)loadAlarms;
- (void)countAlarmsInAggregateDictionary;
- (void)setDefaultSound:(id)arg1 ofType:(int)arg2;
- (void)loadDefaultSoundAndType;
@property(readonly, nonatomic) int defaultSoundType;
@property(readonly, nonatomic) NSString *defaultSound;
- (void)dealloc;
- (id)init;

@end

