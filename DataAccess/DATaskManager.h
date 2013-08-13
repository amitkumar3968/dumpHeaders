/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DAAccount, NSArray, NSMutableArray, NSMutableSet, NSTimer;

@interface DATaskManager : NSObject
{
    DAAccount *_account;
    NSMutableArray *_queuedExclusiveTasks;
    id <DATask> _activeExclusiveTask;
    NSMutableSet *_independentTasks;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedTasks;
    id <DATask> _activeQueuedTask;
    id <DATask> _modalHeldActiveQueuedTask;
    NSMutableArray *_queuedModalTasks;
    id <DATask> _activeModalTask;
    int _state;
    NSTimer *_managerIdleTimer;
}

@property(readonly) NSArray *queuedTasks; // @synthesize queuedTasks=_queuedTasks;
@property(readonly) id <DATask> activeQueuedTask; // @synthesize activeQueuedTask=_activeQueuedTask;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (id)_getQueuedModalTasks;
- (id)_getQueuedTasks;
- (id)_getModalHeldIndependentTasks;
- (id)_getHeldIndependentTasks;
- (id)_getIndependentTasks;
- (id)_getQueuedExclusiveTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)_scheduleStartModal:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_makeStateTransition;
- (void)_reactivateHeldTasks;
- (void)_startModal:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_performTask:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (BOOL)_hasTasksForcingNetworkConnection;
- (BOOL)_taskInQueueForcesNetworkConnection:(id)arg1;
- (BOOL)_taskForcesNetworking:(id)arg1;
- (void)_useOpportunisticSocketsAgain;
- (id)stateString;
- (void)shutdown;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)submitQueuedTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitExclusiveTask:(id)arg1;
- (id)accountPersistentUUID;
- (id)accountID;
- (id)scheme;
- (id)identityPersist;
- (BOOL)useSSL;
- (id)password;
- (id)server;
- (int)port;
- (id)user;
@property DAAccount *account; // @synthesize account=_account;
- (id)userAgent;
- (id)deviceType;
- (BOOL)_useFakeDescriptions;
- (id)_version;
- (void)_populateVersionDescriptions;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;
@property(readonly) id <DATask> activeModalTask; // @synthesize activeModalTask=_activeModalTask;
@property(readonly) NSArray *allTasks;

@end

